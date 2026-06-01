#include <bits/stdc++.h>
using namespace std;

void check_prime(int n)
{
    int cnt = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //         cnt++;
    // }
    for (int i = 1; (i * i) <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if ((n / i) != i)
                cnt++;
        }
    }
    if (cnt == 2)
        cout << "Number is prime";
    else
        cout << "Not a prime number";
}

int main()
{
    // Your code goes here
    int n;
    cout << "Enter the number:";
    cin >> n;
    check_prime(n);
    return 0;
}