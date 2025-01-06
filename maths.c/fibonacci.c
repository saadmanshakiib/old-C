#include<stdio.h>
#include<conio.h>
int main(){
    int i;
    int fib;
    int array[10];
    array[0] =0;
    array[1] =1;
    printf("\n\tENTER THE ARRAY INPUTS ");
    for(i=2;i<10;i++){
        scanf("%d",&array[i]);
    }
    for(i=2;i<10;i++){
        array[i] = array[i-2] + array[i-1];
    }
    printf("\n\tFIBONACCI SERIES IS - ");
    for(i=0;i<10;i++){
        printf("%d ",array[i]);
    }
getch();
return 0;

}