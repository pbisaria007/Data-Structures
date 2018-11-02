#include <iostream>

using namespace std;

class node
{
	public:
    int data;
    node *next;
};

class linked_list
{
	public:
    node *head,*tail;

    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
    
    
    void display()
    {
        node *tmp=new node;
        tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->data << endl;
            tmp = tmp->next;
        }
    }
    void insertf(int val){
    node *new_node = new node;	
    	new_node->data=val;
    new_node->next=head;
	head=new_node;
	display();	
	}
	
	void insertl(int val){
		
	node *new_node = new node;		
	node *ptr = new node;		
    ptr=head;
	while(ptr->next !=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=new_node;
	new_node->next=NULL;
	display();
	}
    
    
};


int main()
{   
    int type,val;
    
    linked_list a;
    a.add_node(22);
    a.add_node(11);
    a.add_node(55);
    a.add_node(44);
    a.display();
    while(1)
    {
	
    cout<<"enter an operation :1. first 2.last  3.before a node  4.after a node ";
    cin>>type;
    cout<<"enter the value";
    	cin>>val;
    

	switch(type)
    {
    	case 1:  a.insertf(val);
    	         break;
    	case 2:  a.insertl(val);
    	        break;
    	
	}
}
    return 0;
}
