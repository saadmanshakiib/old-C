#include<iostream>
using namespace std;
int main(){
    cout<<"Ente the number of test cases - "<<endl;
    int testcase;
    cin>>testcase;
    char character;
    while(testcase!=0){
        cout<<"Enter the character - "<<endl;
        cin>>character;
        for(int loop=0;loop<10;loop++){
            if(character =='c'||character=='o' ||character=='d' ||character=='e' ||character=='f' ||character=='o' ||character=='r' ||character=='c' ||character=='e' ||character=='s' ){
            cout<<"YES"<<endl;
           break;
            }
            else{
                cout<<"NO"<<endl;
                break;
            }
        }
        testcase--;
    }
    return 0;
}