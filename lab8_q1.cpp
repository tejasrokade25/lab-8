# include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the size of the array:-";
	cin>>a;
	int me[a];
	for (int i=0;i<a;i++)
	{
		cin>>me[i];
	}
	int sum=0;
	for(int i=0;i<a;i++)
	{
		sum=sum+me[i];
	}
	cout<<"the sum is "<<sum;
	return 0;
}
	
