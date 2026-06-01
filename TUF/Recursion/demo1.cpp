#include <bits/stdc++.h>
using namespace std;

// print name n times
void print_name(int i, int n)
{
    if (i > n)
        return;
    cout << "Pavan" << endl;
    print_name(i + 1, n);
}

// print 1 to N by backtracking
void print_1Ton(int i, int n)
{
    if (i < 1)
        return;
    print_1Ton(i - 1, n);
    cout << i << endl;
}
// print N to 1 by backtracking
void print_NTo1(int i, int n)
{
    if (i > n)
        return;
    print_NTo1(i + 1, n);
    cout << i << endl;
}

int main()
{
    // Your code goes here
    int n;
    cout << "Enter the number:";
    cin >> n;
    // print_name(1, n);
    // print_1Ton(n, n);
    print_NTo1(1, n);
    return 0;
}