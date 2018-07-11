#include<iostream>
using namespace std;
class llb
{
	int x,y,z;
	public : void get_data(int a, int b, int c)
				{
					x=a;
					y=b;
					z=c;
				}
				
			void show_data()
			{
				cout<<"X = "<<x<<"\n";
				cout<<"Y = "<<y<<"\n";
				cout<<"Z = "<<z<<"\n";
			}
			void operator+()
			{	
				x=-x;
				y=-y;
				z=-z;
			}
};
int main()
{
	llb p;
	int a,b,c;
	cout<<"Enter first no. : ";
	cin>>a;
	cout<<"Enter second no. : ";
	cin>>b;
	cout<<"Enter third no. : ";
	cin>>c;
	p.get_data(a,b,c);
	p.show_data();
	+p;
	p.show_data();
	return (0);
}
