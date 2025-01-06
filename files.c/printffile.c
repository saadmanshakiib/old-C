#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char name[100];
    FILE *file;
    file = fopen("printffile.text","w");
    if(file==NULL){
        printf("\n\tFILE DOESN'T EXIST");
    }
    else{
        printf("\n\tFILE HAS BEEN OPENED SUCCESSFULLY");
        printf("\n\tENTER YOUR NAME ");
        gets(name);
        fprintf(file,"%s",name);
        printf("\n\tWHAT YOU HAVE WRITTEN SUCCESSFULLY SHOWED");
    }
    fclose(file);
    getch();
    return 0;
}