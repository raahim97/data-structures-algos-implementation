#include<iostream>
using namespace std;
int queue[4];
int pushindex =0;
int popindex=0;
int maxindex=4;
int c =0;
int push(int data)
{
	
	
		if (pushindex<maxindex)
			{
				if( c == 1&& pushindex == popindex){
					cout<<"Queue Overflow"<<endl;	
					return 0;
					}
				
				queue[pushindex] = data;
				cout<<data<<" pushed in the queue"<<endl;
				pushindex++;
				if(pushindex == maxindex && popindex>0) 
				{
						pushindex = 0;
						c=1;
				}
			}
		
		else {
				cout<<"Queue Overflow"<<endl;
				return 0;
				
			}	
	
	
}
int pop()
{	
		
	if (popindex<pushindex){
		
		cout<<endl<<"Popped Value:"<<queue[popindex]<<endl;
		popindex++;
	}else if (popindex >= pushindex && c == 1)
	
	{
		if(popindex== maxindex) popindex =0;
		
		cout<<endl<<"Popped Value:"<<queue[popindex]<<endl;
		popindex++;
		
	
		
	}else
		cout<<endl<<"queue Under Flow";
	
}

int main (){
	push(10);
	push(12);
	pop();
	push(14);
	push(15);
	push(16);
	
	pop();
	pop();
	pop();
	pop();
	pop();
	
}
