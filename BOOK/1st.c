#include<stdio.h>
int main(){
int T;
scanf("%d",&T);
int number,i;
for(i=1;i<=T;i++){
scanf("%d",&number);
if(number%2==0){
printf("Even Number\n");
}
else{
printf("Odd Number\n");
}
}
return 0;
}