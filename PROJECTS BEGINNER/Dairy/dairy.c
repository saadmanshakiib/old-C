#include<stdio.h>
#include<conio.h>
int main(){
    printf("\n\tENTER YOUR NAME TO START ");
    char name[10];
    gets(name);
    FILE *file;
    file = fopen("dairy.txt","w");
    if(file==NULL){
        printf("\n\tFILE DOESN'T EXIST");
    }
    else{
        printf("\n\tYOUR FILE HAS BEEN CREATED SUCCESSFULLY");
    
    printf("\n\tDAIRY HAS BEEN OPENED");
    printf("\n\tWRITE WHATEVER YOU WANT TO WRITE\n\t\n\t");
    char whatever[1000];
    gets(whatever);
    fputs(whatever,file);
    printf("\n\tSAVED SUCCESSFULLY");
    fclose(file);
    }
    //fopen("dairy.txt","r");
    getch();
    return 0;
}