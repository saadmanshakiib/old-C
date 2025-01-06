#include<iostream>
using namespace std;

   int function(string Array[5]){
cout<<" Array received "<<endl;
int index;
for(index=0;index<5;index++){
    cout<<" "<<Array[index];
}
return 0;
    }

int main(){
    cout<<"Welcome"<<endl;
    string arrayString[5];
    cout<<"Enter 5 names - "<<endl;
    int index;
    for(index=0;index<5;index++){
        cin>>arrayString[index];
    }
    for(index=0;index<5;index++){
        cout<<" "<<arrayString[index];
    }
    function(arrayString);

}