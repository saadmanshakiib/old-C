#include<iostream>
using namespace std;
int main(){
    cout<<"Welcome"<<endl;
    string friends[3] = {"sakib" , "sadat", "jarif"};
    for(int index=0;index<3;index++){
        cout<<" "<<friends[index];
    }
    cout<<endl;
    char* frnds[3] = {"Sadman","jubo","sams"};
    for(int index1=0;index1<3;index1++){
        cout<<" "<<frnds[index1];
    }
}