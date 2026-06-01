#include <bits/stdc++.h>
using namespace std;

int reverse_number(int n)
{
    int revNum = 0;
    while (n > 0)
    {
        int d = n % 10;
        n /= 10;
        revNum = (revNum * 10) + d;
    }
    return revNum;
}

int main()
{
    // Your code goes here
    int n;
    cout << "Enter the number:";
    cin >> n;
    cout << "Reverse of a number:" << reverse_number(n);
    return 0;
}