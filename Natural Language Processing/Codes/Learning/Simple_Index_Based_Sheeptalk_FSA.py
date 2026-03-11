def FSA_for_Sheeptalk(a: str) -> int:
    i = 0
    while i < len(a):
        if a[i] == 'b' and i==0:
            i+=1
        elif a[i] == 'a' and i>=1:
            i+=1
        elif a[i] == '!' and i>1 and i == len(a)-1:
            return 1
        else:
            return 0
    return 0

string = input("Enter a string: ")

if FSA_for_Sheeptalk(string) == 1:
    print("The string is in the language of Sheeptalk.")
else:   
    print("The string is not in the language of Sheeptalk.")