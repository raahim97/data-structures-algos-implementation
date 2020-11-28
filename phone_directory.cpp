#include<iostream>
using namespace std;
struct node{
	string contactname;
	string address;
	string city;
	string phonenumber;
	node *next;
};
node* head=new node;
node* tail=new node;
void createdirectory(/*string c, string a, string ct, string phn*/){
	node *firstNode=new node;
	firstNode->contactname="default";
	firstNode->address="default";
	firstNode->city="default";
	firstNode->phonenumber="default";
	firstNode->next=NULL;
	head=firstNode;
	tail=firstNode;
}
void addcontact(string contactname, string address,string city, string phonenumber){
	node* newnode=new node;
	newnode->contactname=contactname;
	newnode->address=address;
	newnode->city=city;
	newnode->phonenumber=phonenumber;
	tail->next=newnode;
	tail=newnode;
}
void Searchdirectory(string searchval, int searchby){
	node* cursor=new node;
	cursor=head;
	if(searchby==1){
		while(cursor!=NULL){
		if(searchval==cursor->contactname){
			cout<<"Contact Name: "<<cursor->contactname<<endl;
			cout<<"Address: "<<cursor->address<<endl;
			cout<<"City: "<<cursor->city<<endl;
			cout<<"Phone Number: "<<cursor->phonenumber<<endl;
			break;
		}
		cursor=cursor->next;
	}
		}
		if(searchby==2){
			while(cursor!=NULL){
				if(searchval==cursor->phonenumber){
					cout<<"Contact Name: "<<cursor->contactname<<endl;
					cout<<"Address: "<<cursor->address<<endl;
					cout<<"City: "<<cursor->city<<endl;
					cout<<"Phone Number: "<<cursor->phonenumber<<endl;
					break;
				}
				cursor=cursor->next;
			}
		}
		else if(searchby!=1&&searchby!=2){
			cout<<"Invalid Search option"<<endl;
		}
}
int main(){
	string name, address, city, phone;
	int option=1;
	int searchby;
	string searchval;
	
	while(option>=1&&option!=3){
	cout<<"Enter 1 to add contact\nEnter 2 to search \nEnter 3 to exit\n";
	cin>>option;
	switch(option){
		case 1: 
		cout<<"Enter Contact name ";cin.ignore();
		getline(cin, name);
		cout<<"Enter address ";
		getline(cin, address);
		cout<<"Enter city ";
		getline(cin, city);
		cout<<"Enter phone number ";
		getline(cin, phone);
		createdirectory();
		addcontact(name, address, city, phone);
		break;
		case 2:
			cout<<"Enter 1 to search by name and 2 to search by phone: ";
			cin>>searchby;
			if(searchby==1){
				cout<<"Enter Name to search in the directory: ";cin.ignore();
				getline(cin, searchval);
				Searchdirectory(searchval, searchby);
			}
			if(searchby==2){
				cout<<"Enter phone to search in the directory: ";cin.ignore();
				getline(cin, searchval);
				Searchdirectory(searchval, searchby);
			}
			break;
		default:
			break;
	}
}
}
