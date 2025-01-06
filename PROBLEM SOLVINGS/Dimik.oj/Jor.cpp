#include<iostream>
using namespace std;
int main(){
    int test_case,num,loop;
    cin>>test_case;
for(loop=1;loop<=test_case;loop++){
        cin>>num; 
if(num % 2 == 0){
    cout<<"even"<<endl;
}
else{
    cout<<"odd"<<endl;
}
}
}