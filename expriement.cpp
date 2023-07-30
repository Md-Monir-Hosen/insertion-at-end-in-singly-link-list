#include <iostream>
using namespace std;
void lastinsert();
struct node
{
    int data;
    struct node *next;
};
struct node *head;
int main()
{
    int item,pos;
    cout<<"enter you pos:"<<" ";
    cin>>pos;
    cout<<endl;

    while(item==0)
    {
        cout<<"enter your element"<<": ";
        cin>>item;

    }
}
void lastinsert(int item)
{
    struct node *newnode= new node();
    struct node *temp;
    if(newnode==NULL)
    {
        cout<<"overflow"<<endl;

    }
    else
    {
        newnode->data=item;
        if(head==NULL)
        {
          newnode->next=NULL;
          head=newnode;
          cout<<"element inserted"<<endl;
        }
        else
        {
            head=temp;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->next=NULL;
            cout<<"element is inserted";
        }
    }
}
