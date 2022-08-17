/*
Write function that take a string then reverse it.
*/
#include <bits/stdc++.h>
using namespace std;

void rev(string str)
{
    for (int i = str.size(); i >= 0; i--)
    {
        cout << str[i];
    }
}
int main()
{
    string str;
    cin >> str;
    rev(str);
    return 0;
}