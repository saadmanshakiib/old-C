#include<stdio.h>
#include<math.h>
int main(void){
    printf("\n\tEnter test case number ");
    int T,number;
    scanf("%d",&T);
    int count;
    double sr;
    for(count=1;count<=T;count++){
        printf("\n\tEnter the number ");
        scanf("%d",&number);
        sr = sqrt(number);
        if(ceil(sr)==floor(sr)){
            printf("YES");
        }
        else{
            printf("\n\tNO");
        }
    }
    return 0;
}
//logic 2
/*
#include<stdio.h>
#include<math.h>
int main(void){
    printf("\n\tEnter the tast case number ");
    int t;
    scanf("%d",&t);
    int count;
    int number;
    for(count=1;count<=t;count++){
        printf("\n\tEnter the number ");
        scanf("%d",&number);
        if(sqrt(number)*sqrt(number)==number){
            printf("\n\tYes");
        }
        else{
            printf("\n\tNo");
        }
    }
    return 0;
}
*/
