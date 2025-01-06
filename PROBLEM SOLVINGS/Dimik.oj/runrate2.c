#include<stdio.h>
#include<stdlib.h>
int main(){
    int testcase,loop;
    int opponent_total,batsmen_total,ball,need,ball_remains;
    float current_runrate,required_runrate,over;
scanf("%d",&testcase);
if(testcase>=1 && testcase<101){
    for(loop=1;loop<=testcase;loop++){
        scanf("%d",&opponent_total);
        if(opponent_total>=1 && opponent_total<1001){
scanf("%d",&batsmen_total);
            if(batsmen_total>=1 && batsmen_total<=opponent_total){
                scanf("%d",&ball_remains);
if(ball_remains>=1 && ball_remains<301){
                    ball = 300 - ball_remains;
                    over = ball/6;
                    current_runrate = batsmen_total/over;
printf("\n%0.2f",current_runrate);
need = (opponent_total-batsmen_total)+1;

        required_runrate = (need / ball_remains)*6;
        printf("\n%0.2f",required_runrate);
}
else{abort();}
            }
else{abort();}
        }
else{abort();}
}
}
else{abort();}
return 0;
}