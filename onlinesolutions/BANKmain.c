#include<stdio.h>
#include<conio.h>
#include<time.h>
struct user{
    char accountName[10];
    char password[10];
    int phoneNumber[11];
};
int main(){
    time_t currenttime;
    time(&currenttime);
    printf("%s",ctime(&currenttime));
    struct user user1;
    printf("\n\tENTER YOUR ACCOUNT NAME ");
    gets(user1.accountName);
    printf("\n\tSET A PASSWORD FOR YOUR ACCOUNT ");
    gets(user1.password);
    int index;
    printf("\n\tENTER YOUR PHONE NUMBER ");
    for(index=0;index<11;index++){
    scanf("%d",&user1.phoneNumber[index]);
}

    printf("\n\tYOUR ACCOUNT HAS BEEN CREATED SUCCESSFULLY!!!");
    printf("\n\tWHAT DO YOU WANT TO KNOW?");
    printf("\n\t1.ACCOUNT CHECK");
    printf("\n\t2.STORE MONEY ");
int ans;
float balance;
balance = 0.00;
float stored_money;
    scanf("%d",&ans);
        switch(ans){
            case 1:
            printf("\n\tUSER NAME - %s",user1.accountName);
            printf("\n\tPHONE NUMBER - ");
            for(index=0;index<11;index++){
                printf("%d",user1.phoneNumber[index]);
            }
            printf("\n\tBALANCE %f",balance);

            break;

            case 2:

            printf("\n\tHOW MUCH MONEY DO YOU WANT TO STORE? ");
            scanf("%f",&stored_money);
            printf("\n\tYOUR NEW ACCOUNT BALANCE IS %f",stored_money);
            break;

            default:
            printf("\n\tERROR!!!!");
            break;
        }
        start:
            printf("\n\tWHAT DO YOU WANT TO KNOW?");
            printf("\n\t1.ACCOUNT CHECK");
            printf("\n\t2.STORE MONEY ");
         
            printf("\n\t3.END");
            int ans2;
            float stored_money2;
                        float newbalance;
            float collectmoney;
            newbalance = stored_money+stored_money2;
            scanf("%d",&ans2);
                    switch(ans2){
            case 1:
            printf("\n\tUSER NAME - %s",user1.accountName);
            printf("\n\tPHONE NUMBER - ");
            for(index=0;index<11;index++){
                printf("%d",user1.phoneNumber[index]);
            }
            printf("\n\tBALANCE %f",balance);
            printf("\n\tBIRHDATE - ");

            break;

            case 2:
            printf("\n\tHOW MUCH MONEY DO YOU WANT TO STORE? ");
            scanf("%f",&stored_money2);
            printf("\n\tNEW BALANCE IS %f",stored_money+stored_money2);
            break;

            case 3:
            printf("\n\tENDED");
            break;

            default:
            printf("\n\tERROR!!!");
            break;
                    }
                    goto start;
getch();
return 0;
}

