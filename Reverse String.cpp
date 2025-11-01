#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {
    string s;
        cout<<"Enter a string above 5 laters: ";
        getline(cin,s);
        reverse (s.begin(),s.end());
        cout<<s<<endl;
        reverse (s.begin()+2,s.begin()+4);
        cout<<s<<endl;
    return 0;
}
