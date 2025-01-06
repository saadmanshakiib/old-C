#include<iostream>
using namespace std;
int main(){
    cout<<"Enter 5 numbers - "<<endl;
    int loop;
    int index;
    int number[5];
    for(loop=0;loop<5;loop++){
        cin>>number[loop];
    }
    double average;
    int total = 0;
    for(loop=0;loop<5;loop++){
        total = total + number[loop];
    }
    average = total/5;
    cout<<"Average is = "<<average;
return 0;
}