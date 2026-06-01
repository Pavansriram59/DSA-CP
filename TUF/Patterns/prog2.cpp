#include <iostream>
using namespace std;

void print3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << j + 1 << " ";
        cout << "\n";
    }
}

void print4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << i + 1 << " ";
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter the n: ";
    cin >> n;
    // print3(n);
    print4(n);
    return 0;
}