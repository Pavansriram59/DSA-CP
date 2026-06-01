#include <bits/stdc++.h>
using namespace std;

// gcd or hcf
// Brute force
// void gcd(int n1, int n2)
// {
//     int gcd = 0;
//     for (int i = min(n1, n2); i >= 1; i--)
//     {
//         if (n1 % i == 0 && n2 % i == 0)
//         {
//             gcd = i;
//             break;
//         }
//     }
//     cout << "GCD of the given numbers:" << gcd;
// }
// Euclidean Algo: gcd(a,b)=gcd(a-b,b)
void gcd(int n1, int n2)
{
    int gcd = 0;
    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
            n1 = n1 % n2;
        else
            n2 = n2 % n1;
    }
    if (n1 == 0)
        gcd = n2;
    else
        gcd = n1;
    cout << "GCD of the given numbers:" << gcd;
}

int main()
{
    // Your code goes here
    int n1, n2;
    cout << "Enter the numbers:";
    cin >> n1 >> n2;
    gcd(n1, n2);
    return 0;
}