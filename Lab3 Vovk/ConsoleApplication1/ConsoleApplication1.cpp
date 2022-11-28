#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    char d;
    int p = 1;
    while (p != 2)
    {
        cout << ("1 - calculator\n2 - exit\n");
        cin >> p;
        if (p != 1) break;
        cout << "Enter 1 number:";
        cin >> a;
        cout << "Enter 2 number:";
        cin >> b;
        cout << "Enter operation:";
        cin >> d;
        switch (d)
        {
        case '+': c = a + b; break;
        case '-': c = a - b; break;
        case '*': c = a * b; break;
        case '/': c = a / b; break;
        default:
            cout << ("Wrong action\n");
            continue;
        }
        cout << c << endl;

    } 


}
