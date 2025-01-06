#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(void){
    time_t currenttime;
    time(&currenttime);
printf("%s ",ctime(&currenttime));
start:
printf("\n\tEnter the name for the contact ");
char name[10];
gets(name);
printf("\n\tEnter the phone number ");
long long int phonenumber;
scanf("%lld",&phonenumber);
printf("\n\n\t-------------------------------------------\n\t");
printf("Name : %s ",strupr(name));
printf("\n\tContact Number : %lld ",phonenumber);
getch();
goto start;
return 0;
}