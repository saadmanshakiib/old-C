#include<Stdio.h>
#include<conio.h>
int main(){
    int num1,num2,rem,gcd,lcm;
    num1 = 60;
    num2 = 24;
while(num1%num2!=0){
rem = num1%num2;
num1 = num2;
num2 = rem;
} gcd = num1;
printf("\n\tGCD IS %d ",gcd);
getch();
printf("\n\tENTER THE KEY TO START FOR LCM");
getchar();
lcm = num1*num2/gcd;
printf("\n\tLCM IS %d",lcm);
getch();
return 0;
}