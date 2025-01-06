#include<iostream>
using namespace std;
int main(){
    int Testcase,num,f,l,p,q,r,loop;
    cin>>Testcase;
    //if(Testcase>= 1 && Testcase <= 10000){
        for(loop=1;loop<=Testcase;loop++){
        cin>>num;
        if(num>=10000 && num<= 99999){
            f = num/10000;
            p = num%10000;
            q = p%1000;
            r = q%100;
            l = r%10;
                        cout<<"Sum = "<<f+l<<endl;

        }
        else{abort();}
    }
//}
    //else{
      //  abort();
    //}
}