#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t,i,n;
    int root;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
        root = sqrt(n);
        if(root * root == n){
           cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}