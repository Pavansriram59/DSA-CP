#include <bits/stdc++.h>
using namespace std;

bool palindrome(int i, string &s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return palindrome(i + 1, s);
}
int main()
{
    // Your code goes here
    string s;
    cout << "Enter the string:";
    cin >> s;
    if (palindrome(0, s))
        cout << "Given string is palindrome";
    else
        cout << "Not a palindrome";
    return 0;
}