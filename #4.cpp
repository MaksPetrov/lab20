#include <iostream>

using namespace std;

int main()
{
    string s, s1;
    getline(cin, s);
    char c;
    cin >> c;
    for(unsigned i = 0; i<s.length(); i += 1)
    {
        s1 += s[i];
        if(s[i]==c)
        {
            s1 += s[i];
        }
    }
    cout << s1;
}
