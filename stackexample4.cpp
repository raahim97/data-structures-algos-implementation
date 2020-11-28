#include<iostream>
using namespace std;
char stack[10];
int top =-1;
int maxindex=10;

int OPpriority(char op)
{
	switch (op){
		case '+':
				return 1;
		case '-':
				return 1;
		case '*':
				return 2;
		case '/':
				return 2;
	}
		
}
int isempty(){
	//cout<<endl<<"top value:"<<top<<endl;
	if (top<=-1) 
		return 1;
	else 
		return 0;
}
int isfull()
{
	if (top>=maxindex)
		return 1;
	else
		return 0;
}
int push(char data)
{
	top++;
	if (!isfull())
		{
			stack[top] = data;
			//cout<<data<<" pushed in the stack"<<endl;
			//top++;
			return 1;
		}
	else {
		return 0;
	}	
}
int pop()
{	
		char w;
	if (!isempty()){
		
		 w = stack[top]; //cout<<endl<<"Popped Value:"<<stack[curindex]<<endl;
		 top--;
		 //cout<<endl<<"Value of top in pop:"<<top<<endl;
		 return w;
	}
	
}
 char topofstack()
 {
 	return stack[top];
 }
int main (){
	
	int i = 0;
	int y;
	char x[10];
	int valid = 1;
	char z;
	cin>>x;
	while (x[i] != '\0')
	{
		if (x[i]== '(' )	
		{
		 	y = push(x[i])	;
		 	cout<<endl<<"Pushed"<<x[i]<<endl;
		 	if (y==0)
			 {		 
		 		valid = 0;
		 	 }
		}
		if(x[i]=='+' || x[i] == '-' || x[i]=='*' || x[i] == '/')
		{
			if (isempty())
				y = push(x[i]);
			else if (topofstack() == '(')
				y = push(x[i]);
			else if(OPpriority(x[i]) >= OPpriority(topofstack())  )
				{
					y =push(x[i]);
				}
			else if(OPpriority(x[i]) < OPpriority(topofstack())  )
				{
					z =pop();
					cout<<" "<<z;
				}
		}
		
		if (x[i] == ')')
		{
			z = pop();
			//cout<<endl<<"Poped"<<z<<endl;
			cout<<" "<<z;
			//if(z == 'u') valid = 0;
			if (x[i] == ')' &&  z != '(') valid = 0;
				
		}
		
		i++;
		
	}
	//cout<<endl<<"isempty():"<<isempty()<<endl;
	if(isempty() == 0) return 0;
	else 
		while (pop() != 0);
		
	
}
