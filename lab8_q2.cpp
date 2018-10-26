
#include<iostream>
using namespace std;
//largest element in array
int largest (int arr[],int n)
{
	//assigning the value of  element of array to max
	int max=arr[0];
	//loop for changing the value of max if the next element of array is greater than last one
	for (int i=1; i<n ; i++)
	{
		if (arr[i]>max)
		{		
			max=arr[i];	
		}
		
	}
	 
	return max;
}
	//function for the smallest element of arary
int smallest (int arr[],int n)
{
	int min=arr[0];
	//loop for changing the value of min if the next element of array is less than last one
	for (int i=1; i<n ; i++)
	{
		if (arr[i]<min)
		{		
			min=arr[i];	
		}
		
	}
	
	return min;
}
	/*int sort (int *arr,int n)
{
	int arr1[n] ;
	for(int j=n ; j>0; j--)
	{	
		int max=arr[0];
		for (int i=1; i<n ; i++)
		{
			if (arr[i]>max)
			{		
				max=arr[i];	
			}
		
		}
		arr1[j]=max;
		for (int i=1; i<n ; i++)
		{
			if (arr[i]==max)
			{		
				arr[i]=0;	
			}
		
		}
	
		
	}
	return *arr1;
}*/
	// using bubble sort and swap for sorting
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  

void sort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
}
	// function to define mean value
float mean(int arr[], int n){
	// summing the elemnets of array	
	int sum = 0;
	for (int i=0;i<n;i++){sum = sum + arr[i];}
	// calculating the mean
	float x = n;
	float y = sum/x;
return y;
}
	// function to calculate the median
float median(int arr[], int n){
	float x;
	if ((n-1)%2 != 0){int y = (n)/2;
		int z = (arr[y]+arr[y-1]);
		x = z/2.00;}

	else {int z = (n+1)/2;
	      z = arr[z-1];
		x = z;}
return x;
}
	// function to calculate the frequency
int freq(int arr[], int n){
	int mx=1; int curr=1; int res=arr[0];
	for (int i=1;i<n;i++){
		if(arr[i]==arr[i-1]){curr++;}
	else{
		if(curr>mx){mx=curr;
		res = arr[i-1];}
	curr = 1;}
	}
return res;
}	 

int main (){
	//taking input
	int n,x;
	cout <<" on how many numbers you want to do operations on ? ";
	cin >> n;
	cout<< "what are the numbers u want to do operations on? ";
	int arr[n];
	for (int i=0; i<n; i++)
	{
		cin >>arr[i];
	}
	//taking input of what function to use	
	cout << "What do you wish to do?" << endl;
	cout << "To find the largest, press 1." << endl;
	cout << "To find the smallest, press 2." << endl;
	cout << "To find the mean, press 3." << endl;
	cout << "To find the median, press 4." << endl;
	cout << "To find the max freq element, press 5." << endl;
	cin >> x;
	// using loops to call the specific function
	if (x==1){
	cout<< "the largest number is " <<largest(arr,n)<< endl;}
	else if(x==2){
	cout <<"the samllest number is " << smallest(arr,n)<< endl;}

	else if(x==3||x==4||x==5){	
	 int p[n];
	// outputting the sorted array
   	sort(arr,n);
   	cout << "The sorted array is ";
  	for ( int i = 0; i < n; i++ ) {
      	cout << arr[i];}
	cout << endl;
   	}	
	
	if (x==3){int r = mean(arr,n);
	cout << "The mean = " << r << endl;}

	if (x==4){int r = median(arr,n);
	cout << "The median = " << r << endl;}

	if (x==5){int r = freq(arr,n);
	cout << "The max freq element = " << r << endl;}
return 0;
}


