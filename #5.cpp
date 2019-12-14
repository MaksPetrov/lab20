#include <iostream>

using namespace std;

int main()
{
    string s, s0;
    getline(cin, s);
    getline(cin, s0);
    int count = 0;
    for(unsigned i = 0; i<s.length(); i += 1)
    {
        if(s.substr(i, s0.length())==s0)
        {
            count += 1;
        }
    }
    cout << count;
}
