#include<stdio.h>
int main(){
int T;
scanf("%d",&T);
int n,i;
for(i=1;i<=T;i++){
scanf("%d",&n);
if(n%2==0){
printf("even\n");
}
else{
printf("odd\n");
}
}
return 0;
}