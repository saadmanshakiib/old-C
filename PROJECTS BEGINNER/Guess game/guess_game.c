#include<stdio.h>
int main(){
    int point = 0;
    printf("\n\tHow Many Times You Want To Play ?");
    int play_time;
    scanf("%d",&play_time);
    int loop;
    for(loop=1;loop<=play_time;loop++){
    printf("\n\tGuess Any Number Between 1 To 10 ");
    int fixed_number = 4;
    int guess_number;
    scanf("%d",&guess_number);
        if(guess_number==fixed_number){
        printf("\n\tCorrect Ans!!!!");
        point++;
                fixed_number--;

        }
        else if(guess_number>fixed_number)
        printf("\n\tThink a bit smaller");
        else if(guess_number<fixed_number)
        printf("\n\tThink a bit greater ");
        fixed_number++;
    }
    
    printf("\n\tTotal Points = %d out of %d ",point,play_time);
    return 0;
}