/*
Write a function take three numbers from user then output the
minimum number.
*/

#include <bits/stdc++.h>
using namespace std;

int minimum(int a, int b, int c)
{
    if (a <= b && a <= c)
        return a;

    else if (b <= a && b <= c)
        return b;

    else
        return c;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << minimum(a, b, c) << endl;

    return 0;
}
