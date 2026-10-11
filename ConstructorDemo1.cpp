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
     ~ PPA()
     {
        cout<<"Inside Destructor\n";
     }
      
      

};
int main()
{
   PPA pobj;
   PPA pobj2;

   
  return 0;
}