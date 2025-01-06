#include<stdio.h>
#include<conio.h>
int main(){
    int T,index,number;
    scanf("%d",&T);
    for(index=1;index<=T;index++){
        scanf("%d",&number);
        if(number%2==0)
        printf("\n\tEVEN NUMBER ");
        else 
        printf("\n\tODD NUMBER ");
    }
    getch();
    return 0;
}