//Sorting in Descending in Singly Linked List:
//Code:
#include <iostream>
#include <conio.h>
using namespace std;
class Node{
	private:
		int data;
		Node *next;
		public:
			void insertEnd(int n);
			void sorting();
			void print();
};
Node *head=NULL;
void Node::insertEnd(int n)
{
	Node *temp=new Node;
	temp->data=n;
	temp->next=NULL;
	if (head== NULL)
	{
		head=temp;
	}
	else {
		Node *ptr=head;
		while (ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
}
void Node::sorting(){
	Node *a,*b;
	int ptr;
	if (head==NULL){
		cout<<"List is Empty"<<endl;
	}
	else{
		for(a=head; a->next!=NULL;a=a->next){
			for(b=a->next;b!=NULL;b=b->next)
			{
				if (a->data<b->data)
				{
					ptr=a->data;
					a->data=b->data;
					b->data=ptr;
				}
			}
		}
	}
}
void Node::print(){
	if (head==NULL)
	{
		cout<<"List is Empty"<<endl;
	}
	else{
		Node *ptr=head;
		while(ptr!=NULL)
		{
			cout<<ptr->data;
			ptr=ptr->next;
		}
		cout<<endl;
	}
}
int main()
{
	Node obj;
	cout<<"Before Sorting "<<endl;
	obj.insertEnd(22);
	obj.insertEnd(31);
	obj.insertEnd(10);
	obj.insertEnd(55);
	obj.insertEnd(16);
	obj.print();
	cout<<"After Sorting "<<endl;
	obj.sorting();
	obj.print();
	return 0;
}

