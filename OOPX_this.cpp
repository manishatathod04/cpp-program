#include<iostream>
using namespace std;

class Arithematic
{
    public:
      int No1 ;
      int No2 ;

      Arithematic()
      {
       this->No1 =0;
        this ->No1 =0;
        
      }
      Arithematic(int i, int j)
      {
        No1 =i;
        No2 =j;
      }

      //int Addition (Arithematic *this)
      int Addition()
      {
        int Ans =0;
        Ans =this->No1 + this->No2;
        return Ans;
      }
};

int main()
{
  Arithematic aobj1(10,11);
  int Result =0;
 // Result = Addition (&aobj1)
  Result =aobj1.Addition();  //caller object

  cout<<"Addition is :m"<<Result<<"\n";
  

  


    return 0;

}