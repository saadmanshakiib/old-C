#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int index;
    int array[5];
    for(index=0;index<5;index++){
        cin>>array[index];
    }
    for(index=0;index<5;index++){
        cout<<" "<<array[index];
    }
int target,index2;
cin>>target;
for(index=0;index<5;index++){
    for(index2=1;index2<5;index2++){
        if(array[index] + array[index2] == target){
        cout<<" "<<array[index]<<" + "<<array[index2]<<" = "<<target<<endl;
    }
    else{abort();}
    }
}
return 0;
}