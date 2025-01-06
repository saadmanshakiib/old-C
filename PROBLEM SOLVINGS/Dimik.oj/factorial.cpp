#include<iostream>
using namespace std;
int main(){
    int num,test,loop,loop2;
    long long int factorial = 1;
cin>>test;
if(test<=100){
for(loop=1;loop<=test;loop++){
    cin>>num;
    for(loop2=num;loop2>=1;loop2--){
        factorial = loop2*factorial;
    }
    cout<<factorial<<endl;
    factorial = 1;
}
}
else{
    abort();
}
}