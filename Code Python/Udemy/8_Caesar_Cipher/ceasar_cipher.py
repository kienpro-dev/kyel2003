import string

letters = list(string.ascii_lowercase)

def encrypt(text, shift):
    res = ""
    for i in text:
        if letters.index(i)+shift < len(letters):
            res += letters[letters.index(i) + shift]
        else:   
            res += letters[shift - (len(letters) - letters.index(i))]
    return res

def decrypt(text, shift):
    res = ""
    for i in text:
        if letters.index(i)+shift >= 0:
            res += letters[letters.index(i) - shift]
        else:   
            res += letters[len(letters) - (shift - letters.index(i))]
    return res

while 1:
    text = input("Message: ").lower()
    shift = int(input("Shift number: "))
    command = input("Do you want to encrypt or decrypt? ")
    if(command.lower() == "encrypt"):
        print(f"The message is encrypt is {encrypt(text, shift)}")
        s = input("Want to try again?: ").lower()
        if s != "yes":
            break
    elif command.lower() == "decrypt":
        print(f"The message is decrypt is {decrypt(text, shift)}")
        s = input("Want to try again?: ").lower()
        if s != "yes":
            break
    else:
        print("Command's not found")
        s = input("Want to try again?: ").lower()
        if s != "yes":
            break
