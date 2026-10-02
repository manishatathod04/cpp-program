#include <iostream>
using namespace std; 

class Base
{
    public:
    int  i, j;
      void fun()
    { cout <<"Base fun \n";}
    void gun()
    { cout <<"Base gun \n";}
    virtual  void sun()
    { cout <<"Base sun \n";}
    virtual void run()
    { cout <<"Base run \n";}
};
  class Derived :public Base 
  {
    public :
    int x;
    void fun()
    { cout <<" Derived fun\n";}
    void sun()
    { cout <<"Derived sun \n";}
     virtual void mun()
    { cout <<"Base mun \n";}
    void tun()
    { cout <<"Base tun \n";}
    
  };
int main()
{

      cout<<sizeof(Base)<<"\n";
      cout<<sizeof(Derived)<<"\n";

     
     Base * bp =new Derived();
     
      
     bp-> fun();
     bp-> gun();
     bp-> sun();
     bp-> run();
     bp-> mun();  // error
     bp-> bun();    // error
     
     

     

     

    return 0;
}
