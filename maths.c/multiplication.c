#include<Stdio.h>
#include<conio.h>
int main(){
int n,i,c;
    printf("\n\tENTER THE NUMBER TO SEE ");
    scanf("%d",&n);
    printf("\n\tENTER THE TOTAL COUNTER NUMBER");
    scanf("%d",&c);
        for(i=1;i<=c;++i){
    printf("\n\t %d * %d = %d ",n,i,n*i);
        }
getch();
return 0;
}