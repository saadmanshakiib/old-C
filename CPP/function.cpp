#include<iostream>
using namespace std;
int SUM(int number1,int number2){
    int sum1 = number1+number2;
    return sum1;
}
int main(){
    cout<<"WELCOME"<<endl;
    int num1,num2,sum;
    cout<<"Enter 2 numbers "<<endl;
    cin>>num1>>num2;
    sum = SUM(num1,num2);
    cout<<"Sum of 2 numbers are - "<<sum;
return 0;
}