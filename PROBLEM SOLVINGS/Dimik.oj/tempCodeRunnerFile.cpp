#include<iostream>
using namespace std;
int main(){
    int testcase,loop,num,col,loop2;
    cin>>testcase;
    if(testcase>=1 && testcase<=25){

    for(loop=1;loop<=testcase;loop++){
        cin>>num;
        if(num>=1 && num<=80){
            for(loop2=1;loop2<=num;loop2++){
                for(col=1;col<=num;col++){
                    cout<<"* ";
                }
                cout<<"\n";
            }
        }
        else{abort();}
    }
}
else{abort();}
return 0;
}