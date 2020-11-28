#include <iostream>
#include <stdio.h>
using namespace std;

int main ()
{
	
	int arr[5];
	arr[0] = 10;
	*(arr+1) = 15;//arr[1] = 15;
	cout<<arr[0]<<endl;
	cout<<arr[1];
	int *p;
	p = arr;
	p = p + 1; //arr[1] == arr+1
	*p= 20;
	cout<<endl<<*p<<endl<<arr[1];
	return 1;
}
