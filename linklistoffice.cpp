#include <iostream>
#include <stdio.h>
using namespace std;

struct node {
	int x;
	string name;
	node *next;
};

void addnode(node *head,int xval,string nameval)
{
	
	node *newblock = new node;
	newblock->x=xval;
	newblock->name = nameval;
	newblock->next=NULL:
	
	if (head == NULL){
		head = newblock;
	}
	else
	{
		node *current = new node;	
		current = head;	
		while (current != NULL)
		{
			if(current->next == NULL)
			{
				current->next = newblock;
				return;
			}
			current = current->next;
		}
	}
}

main (){
	
	//Create and initialize head
	node *head = new node;
	head = NULL;
	
	int endloop = 0;
	int xvallocal ;
	string namevallocal;
	
	while(endloop ==0)
	{
		cout<<"Enter value of x:";
		cin>>xval<<endl;
		cout<<"Enter name";
		cin>>nameval<<endl;
		
		addnode(head,xvallocal,namevallocal);
		cout<<"Press 0 to continue and 1 to exit";
		cin>>endloop<<endl;
		
		
	}
	/*
	//create first node
	node *newblock0 = new node;
	
	
	newblock0->x=10; ////(*newblock).x = 10;	
	newblock0->name="Humair";
	newblock0->next=NULL;
	
	head = newblock0;	
	
	node *newblock1 = new node;	
	newblock1->x=15; ////(*newblock).x = 10;	
	newblock1->name="Humair";
	newblock1->next=NULL;
	
	newblock0->next=newblock1;
	*/
	
}
