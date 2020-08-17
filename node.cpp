#include<iostream>
class node
{
    int data;
    node * next;
public:
    void add(int add);
    void display();
};
read =NULL;  //initialization

void node::add (int data)
{
    node *newnode=new node;    //node object using dma
    newnode-> data = data;
    newode -> next = NULL;
    if(head ==NULL)
        read= newnode;
    else
    {
        nide * arr = read;
        while (arr-> next !=NULL)
            arr= arr->net;
        arr -> next = newnode;
    }
}
void node:: display()
{
    if (read== NULL)
        cout<<"list is empty";
    else
        node *arr=read;
    while(arr!=NULL)
    {
        cout<<arr->data<<endl;
        arr=arr->next;
    }
}
int main()
{
    int c,data;
    node obj;
    while(1)
    {
        cout<<"1.add node"<<endl;
        cout<<"2.display notes"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"4.Enter choice"<<endl;
        cin>>c;
        switch(c)
        {
            case 1: cout<<"Enter data"<<endl;
            cin>>data;
            obj.add(data);
            break;
            case 2: obj.display();
            break;
            case 3:exit(0);
            break;
        }
    }
}
