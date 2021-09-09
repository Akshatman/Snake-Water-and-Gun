#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakeWaterGun(char you,char comp){
    // Draw condition
    //gg
    //ss
    //ww
    if(you == comp){
        return 0;
    }
    //Non-draw condition
    //gs
    //gw
    //ws
    //sw
    //wg
    //sg
    if(you=='s'&& comp=='w'){
        return 1;
    }
    else if(you=='w'&& comp=='s'){
        return -1;
    }
    if(you=='s'&& comp=='g'){
        return -1;
    }
    else if(you=='g'&& comp=='s'){
        return 1;
    }
    if(you=='g'&& comp=='w'){
        return -1;
    }
    else if(you=='w'&& comp=='g'){
        return 1;
    }
}
int main(){
    char you,comp;
    int number;
    srand(time(0));
    number = rand()%100+1;
    if(number<33){
       comp = 's'; 
    }
    else if(number>33&&number<66){
        comp = 'w';
    }
    else{
        comp = 'g';
    }
    printf("Enter 's' for snake, 'w' for water and 'g'for gun\n");
    scanf("%c",&you);
    int result = snakeWaterGun(you,comp);
    if(result==0){
        printf("Game draw\n");  
    }
    else if(result==1){
        printf("You win\n");
    }
    else{
        printf("You lose\n");
    }
    printf("You choose %c and computer choose %c.",you,comp);
return 0;
}