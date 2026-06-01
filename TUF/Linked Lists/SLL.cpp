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
void deleteFront(Node *head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
    printLL(head);
}

void deleteLast(Node *head)
{
    // if (!head || !head->next) return NULL;
    Node *temp = head;
    while (temp->next->next)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    printLL(head);
}
void deletePos(Node *head, int pos)
{
    if (!head)
    {
        cout << "List is empty";
        return;
    }
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    int c = 0;
    Node *temp = head, *prev = nullptr;
    while (temp)
    {
        c++;
        if (c == pos)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    printLL(head);
}
void insertFront(Node *head, int val)
{
    Node *temp = new Node(val, head);
    head = temp;
    printLL(head);
}

void insertLast(Node *head, int val)
{
    Node *temp = head;
    while (temp->next)
        temp = temp->next;
    Node *newNode = new Node(val);
    temp->next = newNode;
    printLL(head);
}

void insertPos(Node *head, int val, int pos)
{
    if (pos == 1)
    {
        Node *temp = new Node(val, head);
        printLL(head);
        return;
    }
    int c = 0;
    Node *temp = head;
    while (temp)
    {
        c++;
        if (c == pos - 1)
        {
            Node *node = new Node(val, temp->next);
            temp->next = node;
            printLL(head);
            return;
        }
        temp = temp->next;
    }
}
int main()
{
    vector<int> arr = {2, 5, 8, 7};
    Node *head = convertArr2LL(arr);

    // deleteFront(head);
    // deleteLast(head);
    // deletePos(head,5);
    // insertFront(head, 1);
    // insertLast(head, 9);
    insertPos(head, 10, 2);
    return 0;
}
