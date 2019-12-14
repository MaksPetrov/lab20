#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int a = 0;
    for(unsigned i = 0; i<s.length(); i += 1)
    {
        if(int(s[i])>=97 && int(s[i])<=122)
        {
            a += 1;
        }
    }
    cout << a;
}
