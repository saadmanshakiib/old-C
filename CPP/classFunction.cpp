#include<iostream>
using namespace std;
class employee{
    public:
    string name;
    int id;
    int salary;
    void display(){
        cout<<"Employee name - "<<name<<"\n\tEmployee id - "<<id<<"\n\tEmployee salary - "<<salary<<endl;
    }
};
int main(){
    cout<<"Start "<<endl;
employee sakib;
sakib.id = 223224;
sakib.salary = 120000;
sakib.name = "RAKIBUL HASAN";
sakib.display();

employee sadat;
sadat.id = 22686;
sadat.salary = 88000;
sadat.name = "Nazmus sadat";
sadat.display();
}