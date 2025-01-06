#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<windows.h>
int main(void){
time_t time_now;
time(&time_now);
printf("%s ",ctime(&time_now));
//sleep(2);
printf("\n\tEnter your name to start - ");
char name[10];
scanf("%s",&name);
printf("\n\tWelcome %s ",strupr(name));
printf("\n\tEnter the number of test case(s)");
int testcase;
scanf("%d",&testcase);
int vote;
int vote_count1 = 0;
int vote_count2 = 0;
while(testcase!=0){
    printf("\n\tChoose your participant - ");
    printf("\n\t1.Shakib\t2.Mushfiq");
    printf("\n\tPress 1 to vote Shakib and 2 to vote Mushfiq");
    scanf("%d",&vote);
    if(vote==1){
        printf("\n\tYou have voted Shakib ");
        vote_count1++;
        printf("\n\tShakib = %d \t Mushfiq = %d ",vote_count1,vote_count2);
    }
    else if(vote==2){
        printf("\n\tYou have voted Mushfiq ");
        vote_count2++;
        printf("\n\tShakib = %d \t Mushfiq = %d ",vote_count1,vote_count2);
    }
    else {
        printf("\n\tSomething Went Wrong!");
    }
    testcase--;
}
if(vote_count1<vote_count2){
    printf("\n\tWinner is Mushfiq");
}
else if(vote_count2<vote_count1){
    printf("\n\tWinner is Shakib");
}
else{
    printf("\n\tError!!!");
    abort();
}
return 0;
}