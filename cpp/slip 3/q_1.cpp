#include<iostream>

using namespace std;

void swap(int &a,int &b)
{
	int temp;
	
	temp=a;
	a=b;
	b=temp;
}


int main()
{
	int a ,b;
	cout<<"enter two number :";
	cin>>a>>b;
	
	cout<<"before swaping number is : "<<a<< "\t" <<b<<endl;
	swap(a,b);
	cout<<"after swaping number is : "<<a<< "\t" <<b<<endl;
	
	return 0;
	
	
}
