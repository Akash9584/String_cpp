#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cout << "Enter a even numbers of string: ";
    getline(cin, s);
    cout << s << " " << s.length() << endl;
    s = s + " Kushwaha";
    cout << s << " " << s.length() << endl;
    s = "Hellow " + s;
    cout << s << endl;
    int n = s.length();
    reverse(s.begin(), s.begin() + n / 2);
    cout << s << endl;
    return 0;
}
