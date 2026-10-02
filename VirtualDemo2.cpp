#include <iostream>
using namespace std; 

class Base
{
    public:
    int  i, j;
    void fun()
    {
        cout <<"Inside of fun Base .\n";
    }
};
  class Derived :public Base 
  {
    public :
    int x;
    void fun()
    {
        cout <<"Inside of fun Derived .\n";
    }
  };
int main()
{

      cout<<sizeof(Base)<<"\n";
      cout<<sizeof(Derived)<<"\n";

     Base * bp1 =new Base();
     Base * bp2 =new Derived();
     Derived * dp1 =new Derived();
     // Derived * dp2 =new Base();
      
     
     

    return 0;
}
