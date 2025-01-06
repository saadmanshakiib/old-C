#include<stdio.h>
#include<conio.h>
int main(){
    /*printf("\n\tENTER YOUR NAME ");
    char name[10];
    gets(name);
    printf("\n\tENTER KEY TO START ");
    getchar();*/
    start:
    printf("\n\tTHE ELECTION IS BETWEEN - ");
    printf("SHAKIB VS MASHRAFEE");
    printf("\n\tPRESS '1' KEY TO VOTE SHAKIB\n\tPRESS '2' KEY TO VOTE MASHRAFEE!");
    int vote;
    scanf("%d",&vote);
    int shakib_vote_count;
    shakib_vote_count = 0;
    int mashrafee_vote_count;
    mashrafee_vote_count =0;
    int total_vote;
    total_vote = 0;
if(vote==1){
        printf("\n\tYOU HAVE VOTED SHAKIB AL HASAN ");
        shakib_vote_count++;
    }
    else if(vote==2){
        printf("\n\tYOU HAVE VOTED MASHRAFEE");
        mashrafee_vote_count++;
    }
    else{
        printf("\n\tPLEASE PRESS EITHER THE KEY 1 OR 2");
    }
    if(shakib_vote_count>mashrafee_vote_count){
        printf("\n\tWINNER IS SHAKIB");
    } 
    else{
        printf("\n\tWINNER IS MASHRAFEE");
    }
    
    getch();
    return 0;
}