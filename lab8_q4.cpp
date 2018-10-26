#include<iostream>
using namespace std;
	
int largest (int arr[],int n)
{
	//assigning the value of first element of array to max
	int max=arr[0];
	//loop for changing the value of max if the next element of array is greater than last one
	for (int i=1; i<n ; i++)
	{
		if (arr[i]>max)
		{		
			max=arr[i];	
		}
		
	}
	//returning largest value 
	return max;
}
	//function for the smallest element of arary
int smallest (int arr[],int n)
{
	//assigning the value of first element of array to min
	int min=arr[0];
	//loop for changing the value of min if the next element of array is less than last one
	for (int i=1; i<n ; i++)
	{
		if (arr[i]<min)
		{		
			min=arr[i];	
		}
		
	}
	//returning smallest value
	return min;
}
int main()
{
	// input of two arrays and their elements using loops
	int n;
	cout <<" on how many numbers you want to do operations on ? ";
	cin >> n;
	cout<< "what are the numbers u want to do operations on? ";
	int arr1[n];
	for (int i=0; i<n; i++)
	{
		cin >>arr1[i];
	}		
	int m;
	cout <<" on how many numbers you want to do operations on ? ";
	cin >> m;
	cout<< "what are the numbers u want to do operations on? ";
	int arr2[m];
	for (int i=0; i<m; i++)
	{
		cin >>arr2[i];
	}
	// declaring another array whose first n elements are same as of arr1 and other m as of arr2
	int arr4[m+n];
	for (int i=0; i<n; i++)
	{
		arr4[i]=arr1[i];
	}
	for (int j=n; j<(m+n); j++)
	{
		arr4[j]=arr2[j-n];	
	}
	// outputing the combined array
	cout << "combination of the two arrays is ";
	for (int i=0; i<(m+n); i++)
	{
		cout << arr4[i]<<" ";
	}
	cout << endl;
	// outputing the largest and smallest number of combined array by calling functions	
	cout<< "the largest number is " <<largest(arr4,m+n)<< endl;
	cout <<"the samllest number is " << smallest(arr4,m+n)<< endl;

}
