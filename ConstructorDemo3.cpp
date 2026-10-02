#include<iostream>
using namespace std;

class PPA
{
   public:
      int No1;
      int No2;
  
      // default constructor
      PPA()
      {
    cout<<"Inside Default constructor\n";

      }

       PPA(int a, int b)
      {
    cout<<"Inside Parametrised constructor\n";

      }
       // copy constructor
      PPA(PPA &obj)
      {
        cout<<"Inside Copy constructor\n";
      }
     ~ PPA()
     {
        cout<<"Inside Destructor\n";
     }
      
      

};
int main()
{
   PPA pobj1;
   PPA pobj2(11,21);   
   PPA pobj3(pobj1);
   
  return 0;
}