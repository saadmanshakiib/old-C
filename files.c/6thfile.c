#include<Stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[10];
    FILE *stringfile2;
    stringfile2 = fopen("STRINGFILE2.txt","w");
    if(stringfile2==NULL){
        printf("\n\tFILE DOESN'T EXIST");
    }
    else{
        printf("\n\tFILE HAS BEEN OPENED SUCCESSFULLY!!!");
        printf("\n\tENTER YOUR STRING");
        gets(str);
        fputs(str,stringfile2);
        printf("\n\tYOUR FILE HAS BEEN WRITTEN SUCCESFULLY");
        fclose(stringfile2);
    }
    getch();
    return 0;
}