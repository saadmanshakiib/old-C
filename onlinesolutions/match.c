#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    system("COLOR 0C");
    int bangladesh[11];
    int india[11];
    printf("\n\tENTER THE INDIVIDUAL RUNS OF BANGLADESH TEAM ");
    int bangladesh_index;
    for(bangladesh_index=0;bangladesh_index<11;bangladesh_index++){
        scanf("%d",&bangladesh[bangladesh_index]);        
    }
    printf("\n\tTHE INDIVIDUAL SCORES OF BANGLADESH TEAM PLAYERS ARE - ");   
    for(bangladesh_index=0;bangladesh_index<11;bangladesh_index++){
    printf("%d ",bangladesh[bangladesh_index]);}
    printf("\n\tENTER THE INDIVIDUAL RUNS OF INDIA TEAM ");
    int india_index;
    for(india_index=0;india_index<11;india_index++){
        scanf("%d",&india[india_index]); 
    }    
    printf("\n\tTHE INDIVIDUAL SCORES OF INDIA TEAM PLAYERS ARE - ");
    for(india_index=0;india_index<11;india_index++){
        printf("%d ",india[india_index]);
    }
    int bangladesh_total;
    bangladesh_total = 0;
for(bangladesh_index=0;bangladesh_index<11;bangladesh_index++){
    bangladesh_total = bangladesh_total+bangladesh[bangladesh_index];
}
printf("\n\tTHE TOTAL RUNS OF BANGLADESH TEAM IS %d",bangladesh_total);
int india_total;
india_total = 0;
for(india_index=0;india_index<11;india_index++){
    india_total = india_total+india[india_index];
}
printf("\n\tTHE TOTAL SCORE OF TEAM INDIA IS %d",india_total);
if(bangladesh_total>india_total){
    printf("\n\tBANGLADESH WON");
}
else{
    printf("\n\tINDIA WON");

}
int count;
count = 0 ;
for(bangladesh_index=0;bangladesh_index<11;bangladesh_index++)
    if(bangladesh[bangladesh_index]>=50){
    count ++;
    }
            printf("\n\tTHERE ARE %d HALF CENTURY(s) IN BANGLADESH TEAM",count);
    getch();
    return 0;    
}