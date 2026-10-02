#include <iostream>
using namespace std; 
#pragma pack(1)
class Base
{
    public:
      int  i, j;
    void fun()
    { cout <<" Base fun \n"; }
     void gun()
    { cout <<" Base gun \n"; }
       virtual void sun()
    { cout <<" Base  sun\n"; }
    virtual void run()
    { cout <<" Base  run\n"; }
}; // 12 bytes
#pragma pack(1)
  class Derived :public Base 
  {
    public :
        int x;
    void fun()
    {
        cout <<" Derived fun \n";
    }
     void sun()
    { cout <<" Derived  sun\n"; }
     virtual void mun()
    { cout <<" Derived  mun\n"; }
     void bun()     //error
    { cout <<" Derived  bun\n"; }
    
  }; // 16 byt
int main()
{
     
     Base * bp =new Derived();
     
    //  Derived * dp =new Base();

    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    // bp->bun();   // error
    // bp->mun();// error

    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    return 0;
}
