#include <bits/stdc++.h>
using namespace std;

// nth fibonacci number
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    // Your code goes here
    int n;
    cout << "Enter the number:";
    cin >> n;
    cout << "The fibbonacci number is:" << fibonacci(n);
    return 0;
}