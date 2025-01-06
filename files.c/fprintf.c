#include<Stdio.h>
#include<conio.h>
int main(){
    char name[20];
    printf("\n\tENTER ANY KEY TO CREATE A FILE");
    getchar();
    FILE *test1;
    test1 = fopen("test1","a");
        printf("\n\tYOUR FILE HAS BEEN CREATED SUCCESSFULLY ");
    if(test1==NULL){
        printf("\n\tFILE DOESN'T EXIST");
    }
    else{
        printf("\n\tFILE HAS BEEN OPENED SUCCESSFULLY");
        printf("\n\tENTER YOUR NAME ");
        gets(name);
        fprintf(test1,"%s",name);
        printf("\n\tFILE HAS BEEN WRITTEN SUCCESSFULLY!!");}
        fclose(test1); 
        return 0;
        getch();
}