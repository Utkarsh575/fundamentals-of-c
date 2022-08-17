/*Write a C++ program that will display the calculator menu. The
program will prompt the user to choose the operation choice (from 1 to
5). Then it asks the user to input two integer vales for the calculation. See
the sample below.
MENU 1. Add 2. Subtract 3. Multiply 4. Divide 5. Modulus
Enter your choice: 1
Enter your two numbers: 12 15 Result: 27*/

#include <bits/stdc++.h>
using namespace std;

int addition(int a, int b)
{
    return (a + b);
}
int subtract(int a, int b)
{
    return (a - b);
}
int multiplication(int a, int b)
{
    return (a * b);
}
float division(int a, int b)
{
    a = (float)a;
    b = (float)b;
    return (a / b);
}

int main()
{

    while (true)
    {
        cout << "What operation do you want to perform??" << endl;
        cout << "[1] ADDITION" << endl;
        cout << "[2] SUBTRACTION" << endl;
        cout << "[3] MULTIPLICATION" << endl;
        cout << "[4] DIVISION" << endl;
        cout << "[5] EXIT" << endl;
        int choice;
        cout << "Enter a choice:- ";
        cin >> choice;
        if (choice == 1)
        {
            int a, b;
            cin >> a >> b;
            cout << addition(a, b) << endl;
        }
        else if (choice == 2)
        {
            int a, b;
            cin >> a >> b;
            cout << subtract(a, b) << endl;
        }
        else if (choice == 3)
        {
            int a, b;
            cin >> a >> b;
            cout << multiplication(a, b) << endl;
        }
        else if (choice == 4)
        {
            int a, b;
            cin >> a >> b;
            cout << division(a, b) << endl;
        }
        else if (choice == 5)
        {
            break;
        }
    }

    return 0;
}