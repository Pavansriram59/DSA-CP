#include <iostream>
using namespace std;

void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << "* ";
        cout << "\n";
    }
}

void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << "* ";
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the n: ";
    cin >> n;
    // print1(n);
    print2(n);
    return 0;
}