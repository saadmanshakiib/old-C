#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
int main(){
    int counter;
    char file_input[100]="MY NAME IS SHAKIB.BESIDES GRAVITY NOTHING KEEPS ME DOWN.DREAMING BIG AND WORKING HARD!";
    FILE *filename;
    filename = fopen("filename","r");
    if(filename==NULL){
        printf("\n\tFILE DOESN`T EXIST!!!");
    }
    else{
        printf("\n\tYOUR FILE HAS BEEN OPENED ");
      for(counter=0;counter<100;counter++){
            fputc(file_input[counter],filename);
       }
        printf("\n\tFILE HAS BEEN WRITTEN SUCCESSFULLY!!");
    }
getch();
return 0;
}