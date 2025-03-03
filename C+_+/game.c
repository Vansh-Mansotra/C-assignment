#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    int number , guess , no_of_guesses = 0;
    srand(time(0));
    number =rand()%100+1;
    do{
        printf("Enter the number : ");
        scanf("%d",&guess);
        no_of_guesses++;
        if(guess < number){
            printf("Please enter the higher number\n");
        }else if (guess > number){
            printf("Please enter the lower number\n");
        }else{
            printf("You guessed in %d turns",no_of_guesses);
        }
    }while(guess != number);
    return 0;
}