#include<stdio.h>
#include<conio.h>
int main(){
int i,n,sum=0;
    printf("\n\tENTER THE KEY TO START ");
    getchar();
    printf("\n\tENTER THE LAST NUMBER OF THE SERIES YOU WANT TO ");
    scanf("%d",&n);
for(i=0;i=n;++i)
    sum = sum+n;
printf("\n\tSUM OF THAT SERIES IS %d",sum);
getch();
return 0;
}