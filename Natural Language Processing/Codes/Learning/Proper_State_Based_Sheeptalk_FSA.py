def FSA_for_Sheeptalk(a: str) -> int:
    state = 0
    for ch in a:
        if state == 0 and ch == 'b':
            state = 1
        elif state == 1 and ch == 'a':
            state = 1
        elif state == 1 and ch == '!':
            state = 2
        else:
            return 0
    
    return 1 if state == 2 else 0

string = input("Enter a string: ")
if FSA_for_Sheeptalk(string) == 1:
    print("The string is in the language of Sheeptalk.")
else:
    print("The string is not in the language of Sheeptalk.")