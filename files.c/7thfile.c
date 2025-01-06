#include<Stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[100];
    FILE *strfile3;
    strfile3 = fopen("strfile","w");
    if(strfile3==NULL){
        printf("\n\tFILE DOESN'T EXIST");
    }
    else{
        printf("\n\tFILE HAS BEEN OPENED SUCCESSFULLY!!!");
        printf("\n\tENTER WHAT YOU WANT TO WRITE  ");
        gets(str);
        fputs(str,strfile3);
        printf("\n\tFILE HAS BEEN WRITTEN SUCCESSFULLY!!");
        fclose(strfile3);
    }
    getch();
    return 0;
}