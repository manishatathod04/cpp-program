#include<iostream>
using namespace std;

class Arithematic
{
    public:
      int No1 ;
      int No2 ;

      Arithematic()
      {
        No1 =0;
        No2 =0;
      }
      Arithematic(int i, int j)
      {
        No1 =i;
        No2 =j;

      }
};

int main()
{
  Arithematic obj1;
  Arithematic aobj2(10,11);
  cout<<obj1.No1<<"\n";
  cout<<obj1.No2<<"\n";

  cout<<obj2.No1<<"\n";
  cout<<obj2.No2<<"\n";

  


    return 0;

}