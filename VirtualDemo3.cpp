#include <iostream>
using namespace std; 

class Base
{
    public:
    int  i, j;
   virtual void fun()
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

     
     Base * bp =new Derived();
     
      
     bp-> fun();
     

    return 0;
}
