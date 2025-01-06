#include<stdio.h>
#include<conio.h>
#define sqr(x) (x*x)
#define cube(x) (sqr(x)*(x))
int main(){
    int ans;
    ans = cube(2);
    printf("%d",ans);
getch();
return 0;
}