#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
int main()
{
    // Your code goes here
    int n;
    cout << "Enter the number:";
    cin >> n;
    cout << "Factorial of a number:" << fact(n);
    return 0;
}