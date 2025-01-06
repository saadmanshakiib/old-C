#include<stdio.h>
#include<conio.h>
struct books{
    char student_name[10];
    char book_name[10];
    char author_name[10];
    int  issued_date;
};
int main(){
    struct books book1;
    start:
    printf("\n\tENTER THE BOOK NAME ");
    gets(book1.book_name);
    printf("\n\tENTER YOUR NAME ");
    gets(book1.student_name);
    printf("\n\tENTER THE NAME OF THE AUTHOR OF THAT BOOK ");
    gets(book1.author_name);
    printf("\n\tBOOKING DATE - ");
    scanf("%d",&book1.issued_date);
    printf("\n\tTHE BOOK %s OF %s(writer) ISSUED BY THE STUDENT %s ON %d DATE ",book1.book_name,book1.author_name,book1.student_name,book1.issued_date);
    goto start;
    getch();
    return 0;
}