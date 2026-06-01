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
// void reverseLL(Node *head)
// {
//     stack<int> st;
//     Node *temp = head;
//     while (temp)
//     {
//         st.push(temp->data);
//         temp = temp->next;
//     }
//     temp = head;
//     while (temp)
//     {
//         temp->data = st.top();
//         st.pop();
//         temp = temp->next;
//     }
//     printLL(head);
// }

// Optimal(Iterative)
void reverseLL(Node *head)
{
    Node *temp = head;
    Node *prev = NULL;
    while (temp)
    {
        Node *front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    printLL(prev);
}

int main()
{
    vector<int> arr = {2, 5, 8, 7};
    Node *head = convertArr2LL(arr);
    cout << "After reversing:";
    reverseLL(head);
    return 0;
}
