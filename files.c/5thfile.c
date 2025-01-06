#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int  i;
    char string[100];
    FILE *stringfile;
    stringfile = fopen("stringfile","w");
    if(stringfile==NULL){
        printf("\n\tFILE DOESN'T EXIST!!");
    }
    else{
        printf("\n\tFILE HAS BEEN OPENED");
        printf("\n\tENTER YOUR STRING ");
        gets(string);
        fputs(string,stringfile);
        printf("\n\tYOUR FILE HAS BEEN WRITTEN SUCCESSFULLY");
        fclose(stringfile);
    }
    getch();
    return 0;
}