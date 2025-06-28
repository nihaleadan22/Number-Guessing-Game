#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int secretNumber, Guess, Attempts = 0;
//intializing random number generator 
srand(time(0));
secretNumber = rand() % 100 + 1; 

printf(" WELCOME TO NUMBER GUESSING GAME!\n");
printf("GUESS THE NUMBER(BETWEEN 1 AND 100):\n");

do{
printf("ENTER YOUR GUESS:");
scanf("%d",&Guess);
Attempts++;

if (Guess > secretNumber)
            printf("TOO HIGH! TRY AGAIN.\n");
            else if (Guess < secretNumber)
            printf("TOO LOW! TRY AGAIN.\n");
  else             printf("CONGRATS! YOU GUESSED THE NUMBER IN %d ATTEMPTS.\n", Attempts);

    } while (Guess != secretNumber);
return 0;

}

