#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int testcase,loop;
    double current_runrate,required_runrate,opponent_total,batsmen_total,ball_remains,ball,over,need;
    cin>>testcase;
    if(testcase>=1 && testcase<=100){
    for(loop=1;loop<=testcase;loop++){
        cin>>opponent_total;
        if(opponent_total>=1 && opponent_total<=1000){
            cin>>batsmen_total;
            if(batsmen_total>=1 && batsmen_total<=opponent_total){
                cin>>ball_remains;
                if(ball_remains>=1 && ball_remains<=300){
                    ball = 300.00 - ball_remains;
                    over = ball / 6.00;
                    current_runrate = (double)batsmen_total / over;
                    cout<<"\n";
                    cout<<setprecision(3)<<current_runrate;
                    need = (opponent_total-batsmen_total) + 1.00;
                    required_runrate = (double)(need / ball_remains) * 6.00;
                    cout<<" "<<setprecision(3)<<required_runrate;
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