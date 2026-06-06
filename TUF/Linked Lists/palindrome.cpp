#include <bits/stdc++.h>
using namespace std;

// Node class represents a node in the linked list
class Node
{
public:
    int data;   // Data value
    Node *next; // Pointer to next node

    // Constructor with data and next
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    // Constructor with only data
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *node = new Node(arr[i]);
        temp->next = node;
        temp = node;
    }
    return head;
}

void printLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
// Brute
bool isPalindrome(Node *head)
{
    stack<int> st;
    Node *temp = head;
    while (temp)
    {
        st.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while (temp)
    {
        if (temp->data != st.top())
            return false;
        temp = temp->next;
        st.pop();
    }
    return true;
}

// Optimal(Iterative)

int main()
{
    vector<int> arr = {1, 2, 2, 1};
    Node *head = convertArr2LL(arr);
    bool ans = isPalindrome(head);
    if (ans)
        cout << "The given ll is palindrome";
    else
        cout << "Not a palindrome";
    return 0;
}
