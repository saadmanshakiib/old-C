#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number "<<endl;
    int num;
    cin>>num;
    int sum = 0;
    for(int loop=1;loop<num;loop++){
        sum =  sum+loop;
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}