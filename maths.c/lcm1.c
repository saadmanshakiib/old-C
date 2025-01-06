#include<Stdio.h>
#include<conio.h>
int main(){
    int l,s,lcm;
    printf("\n\tENTER THE LARGE NUMBER FIRST AND THEN ENTER THE SMALL NUMBER ");
    scanf("%d %d",&l,&s);
for(lcm=2;lcm<=l*s;lcm++)
if(lcm%l==0&&lcm%s==0)
break;
    printf("\n\tLCM IS %d",lcm);

getch();
return 0;
}