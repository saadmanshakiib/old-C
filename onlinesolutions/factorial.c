#include<stdio.h>
#include<conio.h>
int main(){
    int number;
    printf("\n\tENTER THE NUMBER  ");
    scanf("%d",&number);
    int counter;
    int factorial;
    factorial = 1;
    for(counter=1;counter<=number;counter++){
        factorial = factorial*counter;
    }
    printf("\n\tFACTORIAL OF THAT NUMBER IS %d",factorial);
    getch();
    return 0;
}