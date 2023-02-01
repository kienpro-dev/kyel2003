import random

word_list = ["ardvark", "baboon", "camel"]

# chosen_word = word_list[random.randint(0, len(word_list)-1)]
chosen_word = random.choice(word_list)



display = []

for i in range(len(chosen_word)):
    display.append("_")

while "_" in display:
    guess = input("Guess a letter: ").lower()
    for i in range(len(chosen_word)):
        if guess == chosen_word[i]:
            display[i] = guess
    print(display)
        

    

# for c in chosen_word:
#     if guess == c:
#         print("Yes")
#     else:
#         print("No")