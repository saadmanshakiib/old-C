#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    printf("\n\tWelcome to our departmental store ");
    getchar();
    printf("\n\t-------------------");
    printf("\n\tCODE\tPRICE\tVAT");
    printf("\n\tASDF\t40.50\t59.65");
    printf("\n\tQWER\t50.57\t80.67");
    printf("\n\tRTYU\t45.45\t90.55");
    printf("\n\tZXCV\t34.89\t88.00");
    printf("\n\tHJKI\t33.00\t89.65");
    printf("\n\t-------------------");

    printf("\n\tHow many products do you want to buy ?");
       //printf("\n\tEnter the code of the product to buy the product");

    int i,itemnumber;
    scanf("%d",&itemnumber);
    int count;
    char codeofproduct[4];
    char first_code_product[4] = "ASDF";
    float price1 = 40.50;
    float vatprice1 = 59.65;
    char sec_code_product[4] = "QWER";
    float price2 = 50.57;
    float vatprice2 = 80.67;
    char third_code_product[4] = "RTYU";
    float price3 = 45.45;
    float vatprice3 = 90.55;
    char fourth_code_product[4] = "ZXCV";
    float price4 = 34.89;
    float vatprice4 = 88.00;
    char fifth_code_product[4] = "HJKI";
    float price5 = 33.00;
    float vatprice5 = 89.65;

    float enteredmoney,enteredmoney2,enteredmoney3,enteredmoney4,enteredmoney5;
 for(i=1;i<=itemnumber;i++){
    printf("\n\tEnter the code of the product to buy the product");
    scanf("%s",&codeofproduct);
        if(strcmp(codeofproduct,"ASDF")==0){
            printf("\n\tThe price of your selected item is %f ",price1);
            printf("\n\tPlease enter the amount of %f $ ",price1+vatprice1);
            scanf("%f",&enteredmoney);
            if(enteredmoney>price1+vatprice1){
                printf("Recieve your %f extra money",enteredmoney-vatprice1+price1);
            }
            else if(enteredmoney<price1+vatprice1){
                printf("\n\tEnter more %f amount of money please ",price1+vatprice1-enteredmoney);
            }
        }
        else if(strcmp(codeofproduct,"QWER")==0){
                        printf("\n\tThe price of your selected item is %f ",price2);
            printf("\n\tPlease enter the amount of %f $ ",price2+vatprice2);
            scanf("%f",&enteredmoney2);
            if(enteredmoney2>price2+vatprice2){
                printf("Recieve your %f extra money",enteredmoney2-vatprice2+price2);
            }
            else if(enteredmoney2<price2+vatprice2){
                printf("\n\tEnter more %f amount of money please ",price2+vatprice2-enteredmoney2);
            }
        }
                else if(strcmp(codeofproduct,"HJKI")==0){
                        printf("\n\tThe price of your selected item is %f ",price4);
            printf("\n\tPlease enter the amount of %f $ ",price4+vatprice4);
            scanf("%f",&enteredmoney4);
            if(enteredmoney4>price4+vatprice4){
                printf("Recieve your %f extra money",enteredmoney4-vatprice4+price4);
            }
            else if(enteredmoney4<price4+vatprice4){
                printf("\n\tEnter more %f amount of money please ",price4+vatprice4-enteredmoney4);
            }
        }
                        else if(strcmp(codeofproduct,"ZXCV")==0){
                        printf("\n\tThe price of your selected item is %f ",price3);
            printf("\n\tPlease enter the amount of %f $ ",price3+vatprice3);
            scanf("%f",&enteredmoney3);
            if(enteredmoney3>price3+vatprice3){
                printf("Recieve your %f extra money",enteredmoney3-vatprice3+price3);
            }
            else if(enteredmoney3<price3+vatprice3){
                printf("\n\tEnter more %f amount of money please ",price3+vatprice3-enteredmoney3);
            }
        }
        else{
            printf("Error");
        }

        //itemnumber--;
    }
return 0;
}
