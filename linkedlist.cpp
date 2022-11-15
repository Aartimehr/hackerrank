#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;
    one = new node();
    two = new node();
    three = new node();
    one->data = 1;
    two->data = 2;
    three->data = 3;
    one->next = two;
    two->next = three;
    three->next = NULL;
    head = one;
    while(head != NULL)
    {
        cout<<head->data;
        head = head->next;
    }
}
