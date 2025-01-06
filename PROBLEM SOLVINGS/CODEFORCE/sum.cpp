#include<iostream>
using namespace std;
int  main(){
    cout<<"Enter the testcase number - "<<endl;
    int testcase;
    cin>>testcase;
    int num1,num2,num3;
    if(testcase>0&&testcase<=9261){
        while(testcase!= 0 ){
cout<<"Enter 3 numbers - "<<endl;
cin>>num1>>num2>>num3;
if(num1 + num2 == num3 || num1+num3 == num2 || num2+num3 == num1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
testcase--;
    }
}
else{
    abort();
}
return 0;
}