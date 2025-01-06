#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int>marksmap;
    marksmap["Sakib"]=98;
    marksmap["Rohan"]=90;
    marksmap["Sadat"]=89;
    map<string, int> :: iterator iter;
    for(iter=marksmap.begin();iter!=marksmap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl; 
    }
}
