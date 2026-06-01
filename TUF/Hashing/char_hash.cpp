#include <bits/stdc++.h>
using namespace std;

// frequency of given characters in an array
int main()
{
    // Your code goes here
    string s;
    cout << "Enter the string:";
    cin >> s;

    // precompute
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
        hash[s[i] - 'a']++;

    int f;
    cout << "Enter the no of queries:";
    cin >> f;
    cout << "Enter the elements to find freq in the array:";
    for (int i = 0; i < f; i++)
    {
        char c;
        cin >> c;
        // fetch
        cout << hash[c - 'a'] << " ";
    }

    return 0;
}