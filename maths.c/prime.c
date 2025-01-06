#include<Stdio.h>
#include<conio.h>
int main(){
    int number,i,count=0;
    printf("\n\tENTER THE NUMBER ");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
        if(number%i==0){
            count++;
        }
        if(count==2){
            printf("\n\tTHIS IS A PRIME NUMBER");
        }
        else{
            printf("\n\tNOT A PRIME NUMBER");
        }
    getch();
    return 0;
}