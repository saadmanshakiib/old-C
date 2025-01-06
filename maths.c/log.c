#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float number;
    printf("\n\tENTER THE NUMBER ");
    scanf("%f",&number);
    float res  = log(number);
    printf("\n\tLOG(NUMBER) = %f",res);
    getch();
    return 0;
}