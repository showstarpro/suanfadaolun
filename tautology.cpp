#include <iostream>
#include <stack>
#include <string>

using namespace std;


int main()
{
    stack<char> WFF;
    string s;
    cin >> s;
    int i = 0;
    while(i<s.size())
    {
        WFF.push(s[i]);
        i++;
    }
    
    return 0;
}