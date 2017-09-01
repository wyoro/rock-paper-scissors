/*
Rock, Paper, Scissors Game.
Yoro, William
ICS 212 
2/12/2016
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){


    int r = 1;
    int p = 2;
    int s = 3;
    int i;
    int Pscore = 0;
    int Cscore = 0;
    char choice;
    srand(time(NULL));
    printf("Rock = 'r', Paper = 'p', or Scissors = 's'\n");

    while(EOF != choice){
    for(i=0;i<5;i++){
        printf("Enter your choice: ");
        choice = getchar();
            int computer=rand()%3+1;
            if(choice=='r'){
                if(computer==1){
                    printf("Draw\n");
                }
                if(computer==2){
                    printf("Computer Wins!\n");
                    Cscore= Cscore + 1;
                }
                if(computer==3){
                    printf("Player Wins\n");
                    Pscore = Pscore + 1;
                }
            }
              else  if(choice=='p'){
                    if(computer==2){
                        printf("Draw\n");
                    }
                    if(computer==3){
                        printf("Player Wins!\n");
                        Pscore = Pscore + 1;
                    }
                    if(computer==1){
                        printf("Computer Wins!\n");
                        Cscore= Cscore + 1;
                    }
                }
                else if(choice=='s'){
                    if(computer==3){
                        printf("Draw\n");
                    }
                    if(computer==2){
                        printf("Computer Wins!\n");
                        Cscore= Cscore + 1;
                    }
                    if(computer==1){
                        printf("Player Wins!\n");
                        Pscore = Pscore + 1;

                    }
                }

            }

            printf("Computer wins: %d\n",Cscore);
            printf("Player wins: %d\n",Pscore);

            if(Cscore > Pscore ){
                printf("Computer wins %d to %d\n",Cscore,Pscore);
            }
            else if(Cscore < Pscore ){
                printf("Player wins %d to %d\n",Pscore,Cscore);
            }
           else if(Cscore = Pscore ){
                printf("No winner it is a draw!\n");
            }
            choice = getchar();
        }



    return 0;
}
