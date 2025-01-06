#include<iostream>
using namespace std;
class student{
    public: 
    int id;
    string name;
    long int phone;
};
int main(){
    cout<<"Enter the number of students - "<<endl;
    int number;
    cin>>number;
    int loop;
    student std;
    for(loop=1;loop<=number;loop++){
        cout<<"Enter the student name - "<<endl;
        cin>>std.name;
        cout<<"Enter student id - "<<endl;
        cin>>std.id;
        cout<<"Enter the phone number - "<<endl;
        cin>>std.phone;

                cout<<"Student Name - "<<std.name<<endl;
                cout<<"Student id - "<<std.id<<endl;
                cout<<"Student contact - "<<std.phone<<endl;
    }
}