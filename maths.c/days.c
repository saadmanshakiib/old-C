#include<stdio.h>
int main(){ 
    int days,years,months,day1;
    printf("\n\tENTER THE NUMBER OF TOTAL DAYS _");
    scanf("%d",&days);
    if(days<0||days==0){printf("\n\tENTER A VALID NUMBER ");}
    years = days/365;
    months = days/30;
    day1 = days % 30;
    printf("\n\tTOTAL YEARS %d\n\tTOTAL MONTHS = %d\n\tTOTAL REMAINING DAYS = %d",years,months,day1);
    return 0;}