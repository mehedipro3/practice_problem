#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        cout << " Insert_at_tail " <<endl<<endl ;
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout << " Insert_at_tail " <<endl<<endl ;
}
void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl << endl;
}

void insert_at_pos(Node *head,int pos,int v)
 {
    Node *newNode = new Node(v);
    Node *temp = head;
    for(int i=1; i<=pos-1; i++)
    {
        temp=temp ->next;
        if(temp == NULL)
        {
            cout << endl << "Invalid Index" << endl << endl;
            return;
        }
        newNode->next = temp ->next;
        temp ->next= newNode;
        cout << endl << endl << " Inserted at position : " << pos << endl << endl;
    }
}
void insert_at_head(Node* &head,int v)
{
    Node* newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl << "Insert at head" << endl;
}
void delete_from_position(Node* head,int pos)
{
    Node* temp= head;
    for(int i=1; i<=pos-1; i++)
    {
        temp = temp->next;
        if(temp == NULL)
        {
            cout << endl << "Invalid Index" << endl << endl;
            return;
        }
    }
    if(temp -> NULL)
    {
        cout << endl << "Invalid Index" << endl << endl;
        return;
    }
    Node* deleteNode = temp->next;
    temp -> next = temp->next->next;
    delete deleteNode;
    cout << endl << "Delete position "<< pos << endl;
}
void delete_head(Node* &head)
{
    if(head == NULL)
    {
        cout << endl << "Head is not available right now" << endl << endl;
        return;
    }
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << endl << "Delete head "<< endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: insert_at_any_position" << endl;
        cout << "Option 4: insert_at_head" << endl;
        cout << "Option 5: Delete_from_position" << endl;
        cout << "Option 6: Delete_head" << endl;
        cout << "Option 7: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos,v;
            cout << " Insert_position :";
            cin >> pos;
            cout << " Insert_value :";
            cin >> v;
            if(pos==0)
            {
                insert_at_head(head,v);
            }
            else
            {
                insert_at_pos(head,pos,v);
            }
        }
        else if (op == 4)
        {
            int  v;
            cout << "Enter the value: ";
            cin >> v;
            insert_at_head(head,v);

        }
        else if(op == 5)
        {
            int  pos;
            cout << "Enter position: ";
            cin >> pos;
            if(pos==0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head,pos);
            }
        }
        else if(op == 6)
        {
            delete_head(head);
        }

        else if (op == 7)
        {
            break;
        }
    }
    return 0;
}
