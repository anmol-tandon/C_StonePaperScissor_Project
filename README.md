# Applied SDLC using C Language
# 1. StonePaperScissor 
  It is a hand game and played between two people, in which each player simultaneously forms one of three shapes. The winner of the game is decided as per the below rules:
  Rock vs Paper -> Paper wins. Rock vs Scissor -> Rock wins. Paper vs Scissor -> Scissor wins. In this game, the user will be asked to make choice and according to the choice of     user and computer and then the result will be displayed along with the choices of both computer and user.
  
  ![SDLC](https://user-images.githubusercontent.com/75445117/114940896-11589880-9e60-11eb-9876-fb0a3f40631f.png)

# Approach
  srand() and rand() which are used to generate random numbers will help to generate a random number at each time. This random number will decide the choice of computer as: If the   number is between 0-10 then the choice will be Stone. If the number is between 11-20 then the choice will be Paper. If the number is between 21-30 then the choice will Scissor.
 
# StonePaperScissor() function:
  This function consists of if-else statements that will compare the choice of user and computer. If the user wins then it will return 1. Otherwise, if the computer wins then it     will return -1. If it is a tie, it will return 0.

# 2. GuessTheNumber
  It is a simple guessing game where Player 1 enters a number and Player 2 has to guess the number in minimal attempts.
