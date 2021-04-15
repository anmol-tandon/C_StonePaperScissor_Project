#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int StonePaperScissor(char you, char comp)
{
    // returns 1 if you win, -1 if you lose and 0 if draw
    // Condition for draw
    if(you == comp)
    {
        return 0;
    }

    // Non-draw conditions
    else if((you=='s' && comp=='p')||(you=='p' && comp=='c')||(you=='c' && comp=='s'))
    {
        return -1;
    }
    else if((you=='s' && comp=='c')||(you=='p' && comp=='s')||(you=='c' && comp=='p'))
    {
        return 1;
    }
    
    //For wrong input
    else
    {
     printf("Wrong input\n");   
    }
}

//Generating random number
long int rangeOfNumber(long int player1)
{

return player1;
}



int main()
{
    int choose_game;               //Let's you choose the game
    
   
    printf("Choose the game you want to play\n");
    printf("1. Stone Paper Scissor\n2. Guess the number Stone Paper Scissor\n");
    scanf("%d",&choose_game);

    char comp,you;                 //initialising values to be entered by computer and user for stone,paper and scissor

    srand(time(0));                //Generating random number  
    int number = rand()%30 + 1;

    if(choose_game==1)
    {
      if(number<10)
      {
          comp = 's';
      }
      else if(number>10 && number<20)
      {
          comp='p';
      }
      else
      {
          comp='c';
      }
      printf("Enter 's' for stone, 'p' for paper and 'c' for scissor\n");
      scanf("%s",&you);

      int result;                //tells who is the winner

      result = StonePaperScissor(you, comp);
      if(result ==0)
      {
          printf("Game draw!\n");
      }
      else if(result==1)
      {
        printf("You win!\n");
      }
      else
      {
        printf("You Lose!\n");
      }
      printf("You chose %c and computer chose %c. ", you, comp);
    }

    else if(choose_game==2)
    {
      long int random_no,guess_no,attempt=1,player1;

      printf("Player1 enter a number.\n ");
      scanf("%ld",&player1);
  
      random_no=rangeOfNumber(player1); 
 
      do{   
      printf("player2 guess the number\n");
      scanf("%ld",&guess_no);
 
      if(guess_no>random_no)
      {
      printf("Its a Higher number\n Again ");
      }
      else if(guess_no<random_no)
      {
       printf("Its a Lower number\n Again ");
      }
      else
      {
       printf("You guess it right in %ld attempts\n",attempt); 
      }
      attempt++;
       }
  
      while(guess_no!=random_no);
    }

return 0;
}