//write a cpp program to find the volume of cylinder ,coan and sphare (use function overloading)

#include<iostream>
using namespace std;

void volume(float r,float h)
{
	cout<<"volume  of cylinder is : "<<3.14*r*r*h<<endl;
	cout<<"volume of coan is :  "<< 3.14*r*r*h/3 <<endl;

}

void volume(int r)
{
	cout<<"volume of sphere : "<<(float)4/3*3.14*r*r*r <<endl;
}

int main()
{
	
	volume(10,20);
	volume(20);
}



