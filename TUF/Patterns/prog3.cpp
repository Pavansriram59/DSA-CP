#include <iostream>
using namespace std;

void print5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i); j++)
            cout << "* ";
        cout << "\n";
    }
}

// Pyramid Patterns
void print6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i - 1; space++)
            cout << " ";

        for (int j = 0; j < (2 * i + 1); j++)
            cout << "*";

        for (int space = 0; space < n - i; space++)
            cout << " ";

        cout << endl;
    }
}

void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < i; space++)
            cout << " ";

        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
            cout << "*";

        for (int space = 0; space < i; space++)
            cout << " ";

        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the n: ";
    cin >> n;
    // print5(n);
    print6(n);
    print7(n);
    return 0;
}