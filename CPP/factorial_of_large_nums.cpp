#include<iostream>
using namespace std;


int calc(int n, int pos,int *arr)
{
	int s,i,carry = 0;
	for(i=0;i<pos;i++)
	{
		s = n*arr[i] + carry;
		arr[i] = s%10;
		carry = s/10;
	}
	while(carry)
	{
		arr[i] = carry%10;
		i += 1;
		carry /= 10;
	}
	
	return i;
}

int main()
{
	int arr[300] = {1};
	int num;
	cout<<"Number: ";
	cin>>num;
	int pos=1;
	for(int i=2;i<=num;i++)
	{
		pos = calc(i,pos,arr);
	}
	
	for(int i=pos-1;i>=0;i--)
		cout<<arr[i]<<" ";
		
	return 0;
	
}