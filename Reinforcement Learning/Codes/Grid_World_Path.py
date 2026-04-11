import numpy as np
import random

grid_size = 10
actions = 4

start = (0, 0)
goal = (9, 9)

obstacles = [(3,3),(3,4),(3,5),(6,6),(7,6),(8,6)]

Q = np.zeros((grid_size, grid_size, actions))

alpha = 0.1
gamma = 0.9
epsilon = 0.2
episodes = 5000

def is_valid(pos):
    x, y = pos
    if x < 0 or x >= grid_size or y < 0 or y >= grid_size:
        return False
    if (x,y) in obstacles:
        return False
    return True

def step(state, action):
    x, y = state
    if action == 0: x -= 1
    if action == 1: x += 1
    if action == 2: y -= 1
    if action == 3: y += 1

    new_state = (x, y)

    if not is_valid(new_state):
        return state, -100

    if new_state == goal:
        return new_state, 100

    return new_state, -1

for _ in range(episodes):
    state = start

    while state != goal:
        if random.uniform(0,1) < epsilon:
            action = random.randint(0,3)
        else:
            action = np.argmax(Q[state[0], state[1]])

        next_state, reward = step(state, action)

        best_next = np.max(Q[next_state[0], next_state[1]])
        Q[state[0], state[1], action] += alpha * (reward + gamma * best_next - Q[state[0], state[1], action])

        state = next_state

state = start
path = [state]

while state != goal:
    action = np.argmax(Q[state[0], state[1]])
    state, _ = step(state, action)
    path.append(state)

print("Optimal Path:")
for p in path:
    print(p)