#include<iostream>

using namespace std;

class date
{
	public : 
	int day ;char month; int year;
	
	void get()
	{
		cout<<"enter day : "<<endl;
		cout<<"dd";
		cin>>day;
		
		cout<<"enter date : "<<endl;
		cout<<"mm";
		cin>>month;
		
		cout<<"enter date : "<<endl;
		cout<<"year";
		cin>>year;
	}
	
	void display()
	{
		cout<<"date is : "<<;
		
	}
	
	
};

int main()
{
	date d;
	d.get();
	
	return 0;
}
