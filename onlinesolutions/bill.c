#include<stdio.h>
#include<conio.h>
int main(){
    start:
    printf("\n\tTHE LIST OF PRODUCTS - ");
    printf("\n\t1.MILK\n\t2.MANGO\n\t3.ICE CREAM\n\t4.EGG");
    printf("\n\tWHAT YOU WANT TO BUY?");
    int  product;
    int  response;
    int  response2;
    int  response3;
    int  response4;
    scanf("%d",&product);
    if(product==1){
        printf("\n\tPRICE OF MILK IS 50 TAKA");
        printf("\n\tPRESS 1 IF YOU WANT TO BUY OR PRESS 2 IF YOU DONT WANT TO BUY");
        scanf("%d",&response);
        if(response==1){
            printf("\n\tPLEASE PAY 50 TAKA");
        }
        else if(response==2){
            printf("\n\tTHANKS");
        }
        else{
            printf("\n\tERROR!!!");
        }
    }
    else if(product==2){
        printf("\n\tTHE PRICE OF 1KG MANGO IS 100 TAKA");
        printf("\n\tPRESS 1 IF YOU WANT TO BUY OR PRESS 2 IF YOU DONT WANT TO BUY");
        scanf("%d",&response2);
        if(response2==1){
            printf("\n\tPLEASE PAY 100 TAKA ");
        }
        else if(response2==2){
            printf("\n\tTHANKS COME AGAIN");
        }
        else{
            printf("\n\tERROR!!!!");
        }
    }
    else if(product==3){
        printf("\n\tPRICE OF ICE CREAM IS 80 TAKA");
        printf("\n\tPRESS 1 IF YOU WANT TO BUY OR PRESS 2 IF YOU DONT WANT TO BUY ");
        scanf("%d",&response3);
        if(response3==1){
            printf("\n\tPLEASE PAY 80 TAKA ");
        }
        else if(response3==2){
            printf("\n\tTHANKS COME AGAIN");
        }
        else{
            printf("\n\tERROR!!!");
        }
    }
    else if(product==4){
        printf("\n\tPRICE OF 1 DOZEN EGG IS 120 TAKA ");
        printf("\n\tPRESS 1 IF YOU WANT TO BUY OR PRESS2 IF DONT WANT OT BUY");
        scanf("%d",&response4);
        if(response4==1){
            printf("\n\tPLEASE PAY 120 TAKA ");
        }
        else if(response4==2){
            printf("\n\tTHANKS COME AGAIN");
        }
        else{
            printf("\n\tERROR!!!!");
        }
    }
    else{
        printf("\n\tPLEASE SELECT BETWEEN 1 TO 4");
    }
goto start;

}