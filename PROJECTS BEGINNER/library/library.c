#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
     int old_account(){
         long long int set_password = 950211; 
            time_t currenttime;
    time(&currenttime);
    printf(" %s ",ctime(&currenttime));
        printf("\n\tEnter Your Password\t");
        long long int password;
        scanf("%lld",&password);
        if(password==set_password){
            printf("\n\tPassword matched press any key to continue ");
            getchar();
        }
        else{
            printf("\n\tPassword doesn`t matched ");
            abort();
        }
        printf("\n\tHow many books do you want??");
        int demand;
        scanf("%d",&demand);
        int count;
        int selected_book;
 
        printf("\n\tChoose your books (select only numbers) from below");
        printf("\n\t1. To Kill a Mockingbird, by Harper Lee");
        printf("\n\t2. 1984, by George Orwell");
         printf("\n\t3. Harry Potter and the Philosopher’s Stone, by J.K. Rowling");
          printf("\n\t4. The Lord of the Rings, by J.R.R. Tolkien");
           printf("\n\t5. The Great Gatsby, by F. Scott Fitzgerald");
            printf("\n\t6. Pride and Prejudice, by Jane Austen");
             printf("\n\t7. The Diary Of A Young Girl, by Anne Frank");
              printf("\n\t8. The Book Thief, by Markus Zusak");
               printf("\n\t9. The Hobbit, by J.R.R. Tolkien");
                printf("\n\t10. Little Women, by Louisa May Alcott");
                 printf("\n\t11. Fahrenheit 451, by Ray Bradbury");
                  printf("\n\t12. Jane Eyre, by Charlotte Bronte");
                   printf("\n\t13. Animal Farm, by George Orwell");
                    printf("\n\t14. Gone with the Wind, by Margaret Mitchell");
                     printf("\n\t15. The Catcher in the Rye, by J.D. Salinger");
                      printf("\n\t16. Charlotte’s Web, by E.B. White");
                       printf("\n\t17. The Lion, the Witch, and the Wardrobe, by C.S. Lewis");
                        printf("\n\t18. The Grapes of Wrath, by John Steinbeck");
                         printf("\n\t19. Lord of the Flies, by William Golding");
                          printf("\n\t20. The Kite Runner, by Khaled Hosseini");
        for(count=1;count<=demand;count++){
scanf("%d",&selected_book);
        }
printf("\n\tYour selected book(s) no %d ",selected_book);
    localtime(&currenttime);
    struct tm *mytime = localtime(&currenttime);
    printf("\n\tThe retrun date for the books - ");
    printf("%i /%i /%i",mytime->tm_mon+1+7,mytime->tm_mday+7,mytime->tm_year+1900);
    return 0;

    }

     int new_account(){
     time_t currenttime;
    time(&currenttime);
    printf(" %s ",ctime(&currenttime));
    printf("\n\tEnter your first name \t");
    char firstname[10];
    scanf("%s",&firstname);
    printf("\n\tEnter your last name \t");
    char lastname[10];
    scanf("%s",&lastname);
    printf("\n\tWelcome %s %s ",firstname,lastname);
    printf("\n\tCreate a password using special characters");
    long long int password;
    int i;
    scanf("%lld",&password);
if(strlen(password)<8){
    printf("\n\tTry to make a long password with more than 8 characters ");
}
else if(strlen(password)>=8){
        printf("\n\tPassword set successfully");
}
            printf("\n\tHow many books do you want??");
        int demand;
        scanf("%d",&demand);
        int count;
        int selected_book;
            printf("\n\tChoose your books (select only numbers) from below");
        printf("\n\t1. To Kill a Mockingbird, by Harper Lee");
        printf("\n\t2. 1984, by George Orwell");
         printf("\n\t3. Harry Potter and the Philosopher’s Stone, by J.K. Rowling");
          printf("\n\t4. The Lord of the Rings, by J.R.R. Tolkien");
           printf("\n\t5. The Great Gatsby, by F. Scott Fitzgerald");
            printf("\n\t6. Pride and Prejudice, by Jane Austen");
             printf("\n\t7. The Diary Of A Young Girl, by Anne Frank");
              printf("\n\t8. The Book Thief, by Markus Zusak");
               printf("\n\t9. The Hobbit, by J.R.R. Tolkien");
                printf("\n\t10. Little Women, by Louisa May Alcott");
                 printf("\n\t11. Fahrenheit 451, by Ray Bradbury");
                  printf("\n\t12. Jane Eyre, by Charlotte Bronte");
                   printf("\n\t13. Animal Farm, by George Orwell");
                    printf("\n\t14. Gone with the Wind, by Margaret Mitchell");
                     printf("\n\t15. The Catcher in the Rye, by J.D. Salinger");
                      printf("\n\t16. Charlotte’s Web, by E.B. White");
                       printf("\n\t17. The Lion, the Witch, and the Wardrobe, by C.S. Lewis");
                        printf("\n\t18. The Grapes of Wrath, by John Steinbeck");
                         printf("\n\t19. Lord of the Flies, by William Golding");
                          printf("\n\t20. The Kite Runner, by Khaled Hosseini");
        for(count=1;count<=demand;count++){
scanf("%d",&selected_book);
        }
printf("\n\tYour selected book(s) no %d ",selected_book);
    localtime(&currenttime);
    struct tm *mytime = localtime(&currenttime);
    printf("\n\tThe retrun date for the books - ");
    printf("%i /%i /%i",mytime->tm_mon+1+7,mytime->tm_mday+7,mytime->tm_year+1900);
    return 0;
}
    
int main(){
    time_t currenttime;
    time(&currenttime);
    printf(" %s ",ctime(&currenttime));
    printf("\n\tEnter your name to continue\t");
    char name[10];
    gets(name);
    printf(" Welcome %s ",strupr(name));
    printf("\n\tDo you have an account??\t1.Yes\t2.No");
    int ans;
    scanf("%d",&ans);
    if(ans==1){
        old_account();
    }
    else if(ans==2){
        new_account();
    }
    else{
        printf("\n\tError");
    }
getch();
return 0;
}