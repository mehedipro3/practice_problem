#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node* next;
    node(int val)
    {
        this -> val = val;
        this -> next = NULL;
    }
};
void  insert_a_fun(node *&head,int v)
{
    node *Newnode = new node(v);
    node *temp = head;
    if(head == NULL)
    {
        head = Newnode;
        return;
    }
    while(temp -> next != NULL)
    {
        temp = temp->next;
    }
    temp->next = Newnode;
}
void print_link_list(node *head)
{
    node*temp = head;
    while(temp  != NULL)
    {
        cout << temp->val << " ";
        temp = temp ->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    cout<< "option:1__insert the number :" << endl;
    cout<< "option:2__print_linked_list :" << endl;
    cout<< "option:3__Terminate         :" << endl;
    while(true)
    {
        int op;
        cin >> op;
        if(op==1)
        {
            int v;
            cin >> v;
            insert_a_fun(head,v);
        }
        else if(op == 2)
        {
            print_link_list(head);
        }
        else if(op == 3)
        {
            break;
        }
    }
    return 0;

}
