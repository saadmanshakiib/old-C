#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    start :
    printf("\n\tENTER THE WORD\n\tNOTE : THE WORD MUST HAVE 3 ALPHABETS ");
    char word[10];
    gets(word);
    int index;
    strcat(word,"ing");
    printf("\n\tIN CONTINIOUS FORM = %s",word);
    strcat(word,"ly");
    printf("\n\tNEW WORD IS %s",word);
    goto start;
    getch();
    return 0;
}