#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int x) : val(x), next(nullptr) {}
};
class MyLinkedList
{
public:
    Node *head;
    int size;
    MyLinkedList()
    {
        head = NULL;
        size = 0;
    }

    int get(int index)
    {
        if (index >= size || index < 0)
            return -1;
        Node *temp = head;
        for (int i = 0; i < index; i++)
        {
            temp = temp->next;
        }
        return temp->val;
    }

    void addAtHead(int val)
    {
        addAtIndex(0, val);
    }

    void addAtTail(int val)
    {
        addAtIndex(size, val);
    }

    void addAtIndex(int index, int val)
    {
        if (index > size || index < 0)
        {
            return;
        }
        Node *newNode = new Node(val);
        Node *temp = head;
        if (index == 0)
        {
            newNode->next = temp;
            head = newNode;
        }
        else
        {
            for (int i = 0; i < index - 1; i++)
            {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
        size++;
    }

    void deleteAtIndex(int index)
    {
        if (index >= size || index < 0)
        {
            return;
        }
        if (index == 0)
        {
            Node *nextNode = head->next;
            delete head;
            head = nextNode;
        }
        else
        {
            Node *current = head;
            for (int i = 0; i < index - 1; ++i)
            {
                current = current->next;
            }
            Node *nextNode = current->next->next;
            delete current->next;
            current->next = nextNode;
        }
        size--;
    }
};
int main()
{
}