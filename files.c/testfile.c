#include<stdio.h>
#include<conio.h>
int main(){
    FILE *filepointer;
    filepointer = fopen("saakib.txt","w");
    if(filepointer==NULL){
        printf("\n\tFILE DOESN'T EXIST");
    }
    else{
        printf("\n\tFILE HAS BEEN CREATED SUCCESSFULLY");
    }
    fclose(filepointer);
    getch();
    return 0;
}