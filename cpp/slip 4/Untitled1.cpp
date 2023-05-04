#include<iostream>

using namespace std;

int max(int a,int b)
{
	return((a>b)?a:b);
	
}

int min(int a,int b)
{
	return((a<b)?a:b);
	
}

int main()
{
	int a,b;
	cout<<"enter two integer : ";
	cin>>a>>b;
	
	cout<<"max number is : "<<max(a,b)<<endl;
	cout<<"min number is : "<<min(a,b)<<endl;
}
