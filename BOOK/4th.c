#include<stdio.h>
#include<conio.h>
int main(){
    int T,i,j,N;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&N);
        printf("\n\tCase %d :",i);
        for(j=1;j<=N;j++){
            if(N%j==0){
                printf(" %d",j);
            }
        }
                    printf("\n");

    }
    getch();
    return 0;
}