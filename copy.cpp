#include<iostream>
using namespace std;
class code
{
	
    int id;

  public: code(){}
		code(int a)
		{
		id=a;
		}
		code (const code &x)
		{
			id=x.id;
			
		}
		void display()
		{
		cout<<id;
		}
};
int main()
{
	code A(200);
	code B(A);
	code C=A;
	code D;
	D=A;
	cout<<"\n id of A:"; A.display();
	cout<<"\n id of B:"; B.display();
	cout<<"\n id of C:"; C.display();
	cout<<"\n id of D:"; D.display();
	
	return 0;
	
}
