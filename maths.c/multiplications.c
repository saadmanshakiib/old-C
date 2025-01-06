#include<stdio.h>
#include<conio.h>
int main(){
    int multiple_time,number,i,multiple=1;
    printf("\n\tENTER THE NUMBER ");
    scanf("%d",&number);
    printf("\n\tENTER THE NUMBER OF MULTIPLE TIME ");
    scanf("%d",&multiple_time);
    for(i=1;i<=multiple_time;i++){    
        printf("\n%d * %d = %d\n",number,i,number*i);
    }
    getch();
    return 0;
}