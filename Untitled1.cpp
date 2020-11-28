#include<iostream>
using namespace std;
struct stack
{
	char mystack[20];
	int top;
};
bool isEmpty(stack s)
{
	if(s.top==-1)
		return true;
	else
		return false;
}
char Top(stack s)
{
	if(isEmpty(s)==true)
	{
		cout<<"Stack Underflow"<<endl;
	}
	else
		return s.mystack[s.top];
}
bool isFull(stack s)
{
	if(s.top==20)
		return true;
	else
		return false;
}
void push(stack s,char ch)
{
	if(isFull(s)==true)
	{
		cout<<"Stack Overflow\n";
	}
	else
	{
		s.top = s.top +1 ;
		s.mystack[s.top]=ch;
		cout<<"Pushed Value at : "<<s.top<<endl;
	}
}
char pop(stack s)
{
	char temp;
	if(isEmpty(s)==true)
	{
		cout<<"Stack Underflow"<<endl;
	}
	else
	{
		temp = s.mystack[s.top];
		s.top--;
	}
	
		return temp;
		
}
main()
{
	 char ch[20];
	stack a;
	a.top =-1;
	 cout<<"Enter any algebric expression: ";
	 cin>>ch;
	 int i=0;
	 while(ch[i]!='\0')
	 {
	 	if(ch[i]=='+'||ch[i]=='-'||ch[i]=='*'||ch[i]=='/'||ch[i]=='('||ch[i]==')')
	 	{
		 
	 	if(ch[i]=='(')
	 	{
	 		push(a,ch[i]);
		}
		else if(ch[i]=='*' || ch[i]=='/')
		{
			if(Top(a)=='+' || Top(a)=='-')
			{
				push(a,ch[i]);
			}
			else
			{
				cout<<pop(a);
				push(a,ch[i]);
		}
		}
		else if(ch[i]=='+' || ch[i]=='-')
		{
			if(Top(a)=='*' || Top(a)=='/')
			{
				cout<<pop(a);
				push(a,ch[i]);
			}
			else
				push(a,ch[i]);
		}
		else if(ch[i]==')')
		{
			while(Top(a)!='(')
			{
				cout<<pop(a);
			}
		}
		}
		else
		{
		cout<<ch[i];
		}
		i++;
	 }
	 cout<<endl;
	 cout<<a.mystack<<endl;
}

