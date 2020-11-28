#include<iostream>
using namespace std;
struct stack{
	int mystack[20];
	int top;
};
//stack is declared globally
	stack s;
	
bool Isfull(){
	if(s.top==20){
		return 1;
	}
	else{
		return 0;
	}
}
bool IsEmpty(){
	if(s.top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
void push(int x){
	if(Isfull()==1){
		cout<<"Stack overflow"<<endl;
	}
	else
	{
		s.top=s.top+1;
		s.mystack[s.top]=x;
	}
}
int Pop()
{
	char temp = s.mystack[s.top];
	if(IsEmpty()==1)
	{
		cout<<"Stack UnderFlow\n";
	}
	else
	{
		s.top--;
		return temp;
	}
}
void handle_multiply()
{
	int a1 = Pop();
	int a2 =Pop();
	int product = a1*a2;
	push(product);
	 
}
void handle_Operand(char n)
{
		int temp = n-'0';
				push(temp);
}
void handle_divide()
{
	int a1 = Pop();
	int a2 = Pop();
	int Divide = a1/a2;
	push(Divide);
}
void handle_plus()
{
	int a1 = Pop();
	int a2 = Pop();
	int Sum = a1+a2;
	push(Sum);
}
void handle_minus()
{
	int a1 = Pop();
	int a2 = Pop();
	int minus = a1-a2;
	push(minus);
}
void display_Value()
{
		cout<<"AFTER EVALUATION :"<<s.mystack[0]<<"\n";
	
}
main()
{
	s.top=-1;
	char expression[10];
	cout<<"Enter Expression in Postfix Form :";
	cin>>expression; 
	int i=0;
	//char temp =expression[0];
	while(expression[i]!='\0'){
		
		switch(expression[i])
		{
			case '0':
				case '1': 
					case '2':
						case '3':
							case '4':
								case '5':
									case '6':
										case '7':
											case '8':
												case '9':handle_Operand(expression[i]);break;	
			case '*':handle_multiply();break;
			case '/':handle_divide();break;
			case '+':handle_plus();break;
			case '-':handle_minus();break;	
			default :cout<<"INVALID POSTFIX EXPRESSION"<<endl;break;								
												
		}
		i++;
	}
	cout<<endl;
	cout<<"YOUR EQUATION WAS : "<<expression<<endl;
	display_Value();
}
