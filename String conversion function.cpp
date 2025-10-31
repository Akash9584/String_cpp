#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){
    int n;
        cout<<"Enter a number: ";
        cin>>n;
//-------Conversion Int to String--------- 
    string s = to_string(n);    
        cout<<"You are enterd total numbers of: "<<s<<endl;
        cin.ignore();
//-------Conversion String to Int---------  
    string str;
        cout<<"Enter a number as a string which is you want to convert to intger: ";
        getline(cin,str);
    int a = stoi(str);
        cout<<"You are enterd "<<a<<" which is number not string."<<endl;    
    return 0;
}
