#include<stdio.h>
#include<conio.h>
int main(){
    int t;
    scanf("%d",&t);
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        for(j=1;j<=n;j++){
            printf("* ",n*n);
        }
        printf("\n");
    }
    getch();
    return 0;

}