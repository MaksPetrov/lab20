#include <iostream>

using namespace std;

int main()
{
    string s, s1;
    getline(cin, s);
    for(unsigned i = 0; i<s.length(); i += 1)
    {
        s1 += s[i];
        s1 += ' ';
        j += 2;
    }
    cout << s1;
}
