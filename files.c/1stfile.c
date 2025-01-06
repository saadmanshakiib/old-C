#include<stdio.h>
#include<conio.h>
int main(){
FILE *file;
file = fopen("test.1stfile","w");
if(file==NULL){
printf("\n\tFILE DOESNT EXIST");
} 
else{printf("\n\tFILE OPENED");}
getch();
return 0;
}