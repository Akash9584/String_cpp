#include <iostream>
#include<string>
using namespace std;
void STL(string s)
{
    s.push_back('a');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    s.append(" Kushwaha");
    cout<<s<<endl;
    s.clear();
    cout<<s<<" "<<s.length()<<endl;

}
int main()
{
    string s;
    cout << "Enter s string: ";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] % 2 == 0)
        {
            s[i] = 'a';
        }
    }
    cout << s << endl;
    // --------Standard Templet Library----------
     STL(s);
    return 0;
}
