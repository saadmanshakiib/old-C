#include<stdio.h>
int main(){
    printf("\n\tEnter the tase case no");
    int t;
    scanf("%d",&t);
    int count,count2;
    int number;
    int factorial = 1;
    for(count=1;count<=t;count++){
        printf("\n\tEnter the number ");
    scanf("%d",&number);
for(count2=number;count2>=1;count2--){
    factorial = factorial*count2;
}
printf("%d",factorial);
factorial = 1;
    }
    return 0;
}