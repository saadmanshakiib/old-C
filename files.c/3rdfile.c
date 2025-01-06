#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char name[10] = "saadman";
    int i;
    int length = strlen(name);
    FILE *file3;
    file3 = fopen("3rdfile","w");
    if(file3==NULL){
        printf("\n\tFILE DOESNT EXIST");
    }
    else{
        printf("\n\tFILE NO.3 OPENED ");
        for(i=0;i<10;i++){
            fputc(name[i],file3);
        }printf("\n\tFILE IS WRITTEN SUCCESSFULLY");
        fclose(file3);
    }
    
getch();
return 0;
}