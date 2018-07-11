// program to show how constructors are invoked in derived class
#include<iostream>
using namespace std;
class alpha

{

     
      int x; 
    public: 
        alpha(int i)
        {
            x = i;
            cout<<"2";    
        }
        void show_x()
        {
            cout<<"\n x = "<<x;
        }
};
class beta
{
        float y; 
    public: 
        beta(float j)
        {
            y = j;
            cout<<"one";
    
        }
        void show_y()
        {
            cout << "\n y = "<<y;
        }

};
class gamma : public beta, public alpha
{
        int n,m; 
    public: 
        gamma(int a, float b, int c, int d) : alpha(a), beta(b)
        {
            m = c;
            n = d;
        }
        void show_mn()
        {
            cout << "\n m = "<<m;
            cout << "\n n = "<<n;
        }
};

int main()
{
    gamma g(5, 7.65, 30, 100);
    cout << "\n";
    g.show_x();
    g.show_y();
    g.show_mn();
return 0;
}
