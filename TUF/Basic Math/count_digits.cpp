#include <bits/stdc++.h>
using namespace std;

int count_digits(int n)
{
    int c = 0;
    int cnt = (int)(log10(n)) + 1;
    while (n > 0)
    {
        c += 1;
        n /= 10;
    }
    return cnt;
}

int main()
{
    // Your code goes here
    int n;
    cout << "Enter the number:";
    cin >> n;
    cout << "No of digits are:" << count_digits(n);
    return 0;
}