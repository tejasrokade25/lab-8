#include<iostream>
using namespace std;
int sum(int arr[],int n){
int sum = 0;
for( int a=1; a<=n; a++){
sum = sum + arr[a-1];
}
return sum;
}
int main(){
int a,n,b;
//int sum = 0;
cout<<"Enter the no. of elements in array."<<endl;
cin>>n;
int arr[n],sum1;
for( a = 1; a<= n; a++){
cout<<"Enter element no."<< a <<":"<<endl;
cin>>arr[a-1];

//sum = sum + arr[a-1];
}
cout<<"sum:"<<sum(arr,n);

}
