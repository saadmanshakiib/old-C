#include<iostream>
using namespace std;
int main(){
    int Test_case,loop,num,loop2;
    cin>>Test_case;
    if(Test_case<=10){
    for(loop=1;loop<=Test_case;loop++){
            cin>>num;
            if(num>=1&&num<=100000){
            cout<<"Case "<<loop<<":";
            for(loop2=1;loop2<=num;loop2++){
                if(num%loop2 == 0){
                    cout<<" "<<loop2;
                }
            }
            cout<<"\n";
    }
    else{
        abort();
    }
}
}
else{
    abort();
}
return 0;
}