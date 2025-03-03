#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    int number , difficulty,guess , no_of_guesses = 0;
    srand(time(0));
    printf("Enter the difficulty level you want : ");
    printf("1) Easy(1-50) |  2) Medium(1-100)  |  3) Hard(1-200)\n");
    scanf("%d",&difficulty);
        if(difficulty == 1){
            number = rand()%10 + 1;
            printf("You have choosen easy level & start guessing now \n");
        }else if(difficulty == 2){
            number = rand()%100 + 1;
            printf("You have choosen medium level & start guessing now \n");
        }else{
            number = rand()%200 + 1;
            printf("You have choosen hard level & start guessing now \n");         
        }
        time_t start_time = time(NULL);
        do{
            printf("Enter the number\n");
            scanf("%d",&guess);
            no_of_guesses++;
            if(guess < number){
                printf("Enter higher number please\n");
            }else if(guess > number){
                printf("Enter the lower number please\n");
            }else{ 
            time_t end_time = time(NULL);
            float time_taken = end_time - start_time;
                printf("You have guessed right number in %d turns\n",no_of_guesses);
                printf("You took %.2f seconds",time_taken);
                break;
            } 
        if(no_of_guesses > 10){
        printf("Sorry you have lost , as you have exceeded maximum number of turns\n");
        printf("The original number was %d .\n",number);
        break;
        }
    }
    while(guess != number); 
    return 0;
}


