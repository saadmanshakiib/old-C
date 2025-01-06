#include<stdio.h>
#include<conio.h>
int main(){
    int number,rem,c;
    int sum=0;
   start:
    printf("\n\tENTER THE NUMBER(must be integer type) ");
    scanf("%d",&number);
    while(number>0){
        rem = number%10;
        c = rem*rem*rem;
        sum = sum+c;
        number =  number/10;
    }
    if(sum==number){
        printf("\n\tYOUR ENTERED NUMBER IS ARMSTRONG TYPE!");}
    else{
        printf("\n\tYOUR NUMBER IS NOT ARMSTRONG TYPE!!");}
    goto start;
    getch();
    return 0;
}