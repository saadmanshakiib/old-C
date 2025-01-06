#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    printf("\n\tENTER ACCOUNT USER NAME ");
    char name[100];
    gets(name);
    char password[8];
     set_password:
    printf("\n\tCREATE A PASSWORD ");
    printf("\n\t(PASSWORD MUST BE STRONG WITH IN 8 CHARACTERS)\n\t");
    int index;
    for(index=0;index<8;index++){
        scanf("%s",&password[index]);
    }
    char ch;
           while((ch=password[index])!='\0'){
            if(ch=='@'||ch=='&'||ch=='%'||ch=='#')
            printf("\n\tPASSWORD HAS BEEN CREATED ");  
        else{
            printf("\n\tPLEASE TRY TO SET A STRONG PASSWORD INCLUDING SPECIAL CHARACTERS");
            goto set_password;
        }
    }
    int birth_year;
    printf("\n\tENTER YOUR BIRTH YEAR");
    scanf("%d",&birth_year);
    if(birth_year>2003){
        printf("\n\tUSER MUST BE 18+ YEARS OLD ");
    }
    else{
        printf("\n\tYOUR ACCOUNT HAS BEEN CREATED ");
    }
    printf("\n\tUSER NAME %s",name);
    printf("\n\tHOW MUCH MONEY DO YOU WANT TO KEEP ??");
    int money;
    scanf("%d",&money);
    if(money<1000){
        printf("\n\tYOU HAVE TO KEEP AT LEAST 10000+ TAKA ");
    }
    else{
        printf("\n\tMONEY HAS BEEN STORED ");
    }
    try:
    printf("\n\tENTER YOUR PASSSWORD TO CHECK THE MONEY ");
    char check_password[100];
    gets(check_password);
    if(password==check_password){
        printf("\n\tYOUR STORED MONEY IS %d",money);
    }
    else{
        printf("\n\tWRONG PASSWORD!!!!!!");
        goto try;
    }
    getch();
    return 0;
}