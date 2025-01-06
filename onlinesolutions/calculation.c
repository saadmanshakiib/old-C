#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    FILE *math;
    math = fopen("mathfile","a");
    if(math==NULL){
        printf("\n\tFILE DOESN'T EXIST");
    }
    else{ 
        printf("\n\tFILE HAS BEEN CREATED AND OPENED SUCCESSFULY");
    int ans;
    start:
        printf("\n\t'+','-','*','/'");
        printf("\n\tPRESS 1 FOR ADDITION");
        printf("\n\tPRESS 2 FOR SUBSTRUCTION");
        printf("\n\tPRESS 3 FOR MULTIPLICATION");
        printf("\n\tPRESS 4 FOR DIVISION");
        printf("\n\tPRESS 5 FOR QUIT");
        scanf("%d",&ans);
if(ans==1){
        printf("\n\tENTER THE NUMBER");
int number1;
int number2;
        scanf("%d,%d",&number1,&number2);
int sum;
sum = number1+number2;
        printf("\n\tTHE SUM OF TOTAL NUMBER IS %d",sum);
}
else if(ans==2){
        printf("\n\tENTER THE NUMBERS(enter the smaller number first) ");
    int number3;
    int number4;
    int substract;
        scanf("%d %d",&number3,&number4);
    substract = number4 - number3;
        printf("\n\tSUBSTRACTION OF THOSE NUMBERS IS %d",substract);
}
else if(ans==3){
    int number5;
    int number6;
    int multiplication;
        printf("\n\tENTER THE NUMBERS ");
        scanf("%d %d",&number5,&number6);
    multiplication = number5*number6;
        printf("\n\tMULTIPLICATION OF THOSE NUMBERS IS %d",multiplication);
}
else if(ans==4){
    float number7;
    float number8;
    float division;
        printf("\n\tENTER THE NUMBERS ");
        scanf("%f %f",&number7,number8);
    division = number7/number8;
        printf("\n\tTHE RESULT IS %f",division);
}
else{
    printf("\n\tENDED!!!!");
}
        //printf("\n\tPROGRAME ENDED ");
                goto start;
getch();
return 0;
}
}