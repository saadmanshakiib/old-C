#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file;
    file.open("myfile.txt");
    file<<"MY NAME IS SAKIB ";
    file.close();
}