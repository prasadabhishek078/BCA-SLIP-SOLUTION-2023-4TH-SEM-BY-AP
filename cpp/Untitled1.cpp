// count number of object
#include<iostream>

using namespace std;

class test
{
	private: 
	static int count ;
	
	public:
		
		test()
		{
		cout<<"calling construct ";
	count++;	
		}
		
		static int object()
		{
			return count;
			
		}
};

int test::count;

int main()
{
	test obj1,obj2,obj3;
	int cnt;
	cnt=test::object();
	cout<<"number if obj is : "<<cnt;
	
}
