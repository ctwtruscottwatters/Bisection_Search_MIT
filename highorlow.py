# Charles Thomas Wallace Truscott
# MIT 6.001 Introduction to Computer Science and Programming Using Python
# Week 3 Assignment (though not a problem set) Bisection Search, Number Guessing Game
# 80 to 90 % grade on finger exercises for my first three weeks :-D

high = 100
low = 0
guesses = 0
guess = (high + low) / 2
print('Please think of a number between 0 and 100!', end='\n')
all_chosen = False
while (not all_chosen):
    print('Is your secret number {}?'.format(int(guess)))
    print('Enter \'h\' to indicate the guess is too high. Enter \'l\' to indicate the guess is too low. Enter \'c\' to indicate I is guessed correctly. ', end='')
    choice = input()
    if choice == 'h':
        high = guess
        guess = int((high + low) / 2)
    elif choice == 'l':
        low = guess
        guess = int((high + low) / 2)
    elif choice == 'c':
        all_chosen = True
    else:
        print('Sorry, I did not understand your input.')

print('Game over. Your secret number was: ' + str(guess))
 