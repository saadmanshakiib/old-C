#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("\n\tENTER ANY NUMBER TO CALCULATE THE FACTORIAL ");
    scanf("%d",&a);
    int i;
    int fact =1;
    for(i=1;i<=a;i++){
        fact = fact*i;
    }
    printf("\n\tFACTORIAL IS %d",fact);
    getch();
    return 0;

}