#include<iostream>
using namespace std;
class student{
    public: 
    int id;
    string name;
    double result;
};

int main(){
cout<<"Welcome"<<endl;
student student1;
student1.id = 432433;
student1.name = "Sakib";
student1.result = 3.25;

cout<<"Student name - "<<student1.name<<endl;
cout<<"Student id - "<<student1.id<<endl;
cout<<"Student Result - "<<student1.result<<endl;
}