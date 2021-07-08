#include<stdio.h>
#include<stdlib.h>
#include <time.h> 

int main(){
    srand(time(NULL));
    int T,d1=rand() % 7,d2=rand() % 7;
    T=d1+d2;
    char name[100];

    printf("What is your name?\n");
    printf("> ");
    scanf("%s",name);
    printf("Hello, %s!\n",name);
    
    printf("Rolling the dice...\nDie 1:%d\n",d1);
    printf("Die 2:%d\n",d2);

    printf("Total value: %d",T);

  return 0;
}

