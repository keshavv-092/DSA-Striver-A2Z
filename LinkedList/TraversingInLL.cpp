#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
Node *ConvertArr2LL(vector<int> v)
{
    Node *head = new Node(v[0]);
    Node *mover = head;
    for (int i = 1; i < v.size(); i++)
    {
        Node *temp = new Node(v[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void traversal(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<< endl;
}
int lengthOfLL(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void checkElement(Node *head, int element)
{
    Node *temp = head;
    while (head)
    {
        if (temp->data == element)
        {
            cout << "Element is present\n";
            return;
        }
        temp = temp->next;
    }
    cout<<"Element is not present\n";
}
Node* DeleteHead(Node* head){
    if(head == NULL){
        cout << "Empty Linked List";
        return head;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
int main()
{
    vector<int> v = {12, 4, 6, 8, 10};
    Node *head = ConvertArr2LL(v);
    traversal(head);
    cout << "\nLength of linked list is " << lengthOfLL(head) << endl;
    checkElement(head,8);
    head = DeleteHead(head);
    traversal(head);
    return 0;
}