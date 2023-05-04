#include<iostream>

using namespace std;

class point{
	int x,y;
	
	public :
		void setpoint(int a, int b){
			
			x=a;
			y=b;
		}
		
		void getpoint(){
			
			cout<<"(" <<x<<"," << y <<")";
		}
	
};


int main()
{
	int x,y;
	point p;
	
	p.setpoint(10,20);
	p.getpoint();
	
	return 0;
}
