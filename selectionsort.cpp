#include<iostream>
using namespace std;

void selectSort(int arr[], int n)
{
//pos_min is short for position of min
	int pos_min,temp;
	for (int i=0; i < n-1; i++)
	{
	    pos_min = i;//set pos_min to the current index of array		
		for (int j=i+1; j < n; j++)
		{
			if (arr[j] < arr[pos_min])
				{			
                   pos_min=j;
            	}	
		}//pos_min will keep track of the index that min is in, this is needed when a swap happens
		//if pos_min no longer equals i than a smaller value must have been found, so a swap must occur
            if (pos_min != i)
            {
            	cout<<endl<<"First pos_min to swap:"<<pos_min<<endl;
                 temp = arr[i];
                 arr[i] = arr[pos_min];
                 arr[pos_min] = temp;
            }
	}
}
void printArray(int arr[], int n)
{
   int i;
   for (i=0; i < n; i++)
       cout<<arr[i]<<endl;
   
}

main(){
	int arr[] = {12, 11, 13, 5, 6};
	cout<<"Before Sorting:"<<endl;
	printArray(arr,5);
	
	selectSort(arr,5);
	cout<<endl<<"After Sorting"<<endl;
	printArray(arr,5);
	
}

