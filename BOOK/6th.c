#include<stdio.h>
int main(){
int T;
scanf("%d",&T);
int n,i;
for(i=1;i<=T;i++){
scanf("%d",&n);
if(n%2==0){
printf("Even Number\n");
}
else{
printf("Odd Number\n");
}
}
return 0;
}