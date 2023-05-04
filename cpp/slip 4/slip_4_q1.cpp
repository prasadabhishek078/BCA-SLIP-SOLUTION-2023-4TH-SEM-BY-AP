#include<iostream>

using namespace std;

class worker
{

public :

inline int  getdata()
{
	char name[50] ;
	 int hours , rate=100   ,salary;

	
	cout<<"enter the name of worker :"<<endl;
	cin>>name;
	

	cout<<"no. of hours worked :"<<endl;
	cin>>hours;
	
	cout<<"pre houre rate : "<<rate<<endl;
	
	cout<<"salary :"<<rate*hours<<endl;
	

}

inline int display()
{
	
	
		
}
};

int main()
{
	
	worker w;
	w.getdata();
	w.display();
	
	
}
