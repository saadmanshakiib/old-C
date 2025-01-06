#include<iostream>
using namespace std;
int main(){
    int inputyear,year;
    int inputmonth,month;
    int inputday,day;
    int currentYear=2023;
    int currentmonth = 9;
    int currentday =29;
    cout<<"Enter the birth year - "<<endl;
    cin>>inputyear;
    cout<<"Enter the birth month - "<<endl;
    cin>>inputmonth;
    cout<<"Enter the birth Day - "<<endl;
    cin>>inputday;
    cout<<"Your Birth year : "<<inputyear<<" Month : "<<inputmonth<<" Day - "<<inputday<<endl;

    year = (currentYear-1)-inputyear;
    cout<<"Year - "<<year;

return 0;
}