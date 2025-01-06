#include<stdio.h>
#include<conio.h>
int main(){
    int index,i;
    i = 0;
    for(index=1000;index>=1;index--){
        printf("%d\t",index);
        i++;
        if(i%5==0){
            printf("\n");
        }
    }
    getch();
    return 0;
}