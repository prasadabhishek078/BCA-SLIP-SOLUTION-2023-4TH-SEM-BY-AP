
/* write a cpp program to check maximum and minimum of two interger (use inline function and conditional oprater) */

#include<iostream>
using namespace std;

inline int  max(int a,int b)
{
	return (a>b)?a:b;
}

inline int  min(int a, int b)
{
	return (a<b)?a:b;
}

int main()
{
	int a,b;
	cout<<"enter two enteger : "<<endl;
	cin>>a>>b;
	
	cout<<"maximum number is : "<<max(a,b)<<endl;
	cout<<"minimum number is : "<<min(a,b)<<endl;
	
	return 0;
}
