#include <iostream>
using namespace std; 
#pragma pack(1)
class Base
{
    public:
      int  i, j;
    void fun()
    { cout <<" Base fun \n"; }   //1000
     void gun()
    { cout <<" Base gun \n"; }  //2000
       virtual void sun()
    { cout <<" Base  sun\n"; }//3000
    virtual void run()
    { cout <<" Base  run\n"; }  //4000
}; // 16 bytes
#pragma pack(1)
  class Derived :public Base 
  {
    public :
        int x;
    void fun()
    {
        cout <<" Derived fun \n"; ///5000
    }
     void sun()                   //6000
    { cout <<" Derived  sun\n"; }
     virtual void mun()
    { cout <<" Derived  mun\n"; } //7000
     void bun()     //error
    { cout <<" Derived  bun\n"; }//8000
    
  };
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

    

    return 0;
}
