#include<iostream>

using namespace std;

class number
{
	static int cnt;
	
	public : 
	static void display()
	{
		int cnt=10;
		cout<<"number is : "<<cnt;
		cnt++;
		
	}
	
};



int main()
{

	number::display();
	
	return 0;
}


