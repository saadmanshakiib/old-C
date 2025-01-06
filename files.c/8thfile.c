#include<stdio.h>
#include<conio.h>
int main(){ 
    char name[10];
    FILE *fp;
    fp = fopen("fp.txt","a");
    printf("\n\tFILE HAS BEEN OPENED ");
    printf("\n\tENTER YOUR NAME ");
    gets(name);
    fprintf(fp,"%s",name);
    printf("\n\tFILE HAS BEEN WRITTEN SUCCESSFULLY ");
    fclose(fp);
    getch();
    return 0;
}