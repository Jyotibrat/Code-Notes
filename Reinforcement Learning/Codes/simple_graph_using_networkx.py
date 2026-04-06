import networkx as nx
import numpy as np

# Create graph
G = nx.Graph()

# Add 5 nodes with feature vectors (length = 3)
for i in range(5):
    feature = np.random.rand(3)
    G.add_node(i, feature=feature)

# Add 6 edges with random weights
edges = [
    (0, 1),
    (0, 2),
    (1, 2),
    (1, 3),
    (2, 4),
    (3, 4)
]

for u, v in edges:
    weight = np.random.rand()
    G.add_edge(u, v, weight=weight)

# Print node features
print("Node Features:")
for node in G.nodes(data=True):
    print(node)

# Print edge weights
print("\nEdge Weights:")
for edge in G.edges(data=True):
    print(edge)

import matplotlib.pyplot as plt

pos = nx.spring_layout(G)

# Draw graph
nx.draw(G, pos, with_labels=True)

# Draw edge weights
edge_labels = nx.get_edge_attributes(G, 'weight')
nx.draw_networkx_edge_labels(G, pos, edge_labels=edge_labels)

plt.show()