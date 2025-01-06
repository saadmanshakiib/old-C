#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string whatever;
    ofstream writing_file;
    writing_file.open("HELLO");
    getline(cin,whatever);
    writing_file<<whatever;
writing_file.close();
}