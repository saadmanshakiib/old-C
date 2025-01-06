#include<stdio.h>
#include<conio.h>
int main(){
                                             system("COLOR 0C");
        printf("\n\tENTER YOUR ACCOUNT NAME ");
char accountName[10];
        gets(accountName);
int dateofbirth;
        printf("\n\tENTER YOUR DATE OF BIRTH (ddmmyy)- ");
        scanf("%d",&dateofbirth);
int phoneNumber[11];
int index;
        printf("\n\tENTER YOUR PHONE NUMBER ");
        for(index=0;index<11;index++){
            scanf("%d",&phoneNumber[index]);
        }
        printf("\n\tPHONE NUMBER - ");
        for(index=0;index<11;index++){
            printf("%d",phoneNumber[index]);
        }
char password[50];
        gets(password);
        printf("\n\tYOUR ACCOUNT HAS BEEN CREATED !!!!!");
        printf("\n\tYOUR CURRENTLY ACCOUNT BALANCE IS 0.000 TAKA");
        printf("\n\tWHAT YOU WANT TO DO? ");
        printf("\n\t1.ACCOUNT INFORMATION");
        printf("\n\t2.STORE MONEY");
int response;
int stored_money;
        scanf("%d",&response);
        switch(response){

            case 1:

        printf("\n\t USER NAME : %s",accountName);
             printf("\n\tPHONE NUMBER - ");
            for(index=0;index<11;index++){
        printf("%d",phoneNumber[index]);
            }
            break;
            case 2:

        printf("\n\tHOW MUCH MONEY DO YOU WANT TO STORE? (AT LEAST 10K IS REQUIRED)");
        scanf("\n\t%d",&stored_money);
        printf("\n\tYOU HAVE SUCCESSFULLY STORED %d TAKA IN YOUR ACCOUNT ",stored_money);
            break;
            default :
            printf("\n\tSOMETHING WENT WRONG!!!!");
            break;
        }
getch();
return 0;
}