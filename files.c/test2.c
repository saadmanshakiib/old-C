#include<stdio.h>
#include<conio.h>
int main(){
    char name[100];
    printf("\n\tENTER ANY KEY TO START");
    getchar();
    FILE *file69;
    file69 = fopen("saadman.txt","w");
    if(file69==NULL){
        printf("\n\tFILE DOESN'T EXIST");
    }
    else{
        printf("\n\tFILE HAS BEEN CREATED SUCCESSFULLY");
        printf("\n\tENTER YOUR NAME ");
        gets(name);
        fputs(name,file69);
        printf("\n\tYOUR FILE HAS BEEN WRITTEN SUCCESSFULLY");
    }
fclose(file69);
getch();
return 0;
}