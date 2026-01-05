#include<stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
int player;
int computer;
printf("Choose 0 for rock 1 for paper and 2 for scissors:  ");
scanf("%d",&player);

srand(time(NULL));      // seed once

     computer = rand() % 3;
    printf("The computer choose: %d \n",computer);
     if(player==0 && computer==1){
       printf("Sorry you lost!");
     }
     else if(player==0 && computer==2){
        printf("Congratulations you won!");
     }   
    else if(player==1 && computer==2){
        printf("Sorry you lost ! ");
    }
   else if(player==1 && computer==0){
    printf("Congratulations you won!");
   }
    else if(player==2 && computer==0){
        printf("Sorry you lost ! ");
    }
   else if(player==2 && computer==1){
    printf("Congratulations you won!");
   }

   else{
    printf("Its a draw");
   }
    return 0;
}

