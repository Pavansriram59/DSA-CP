#include <bits/stdc++.h>
using namespace std;

void print_divisors(int n)
{
    // for (int i = 1; i <= n; i++)
    //     if (n % i == 0)
    //         cout << i << " ";

    for (int i = 1; (i * i) <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if ((n / i) != i)
                cout << (n / i) << " ";
        }
    }
}

int main()
{
    // Your code goes here
    int n;
    cout << "Enter the number:";
    cin >> n;
    print_divisors(n);
    return 0;
}