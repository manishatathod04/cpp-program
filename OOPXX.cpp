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
        this ->No2 =0;
        
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

       //int Subtraction  *this)
      int Subtraction()
      {
        int Ans =0;
        Ans =this->No1 - this->No2;
        return Ans;
      }
};

int main()
{
  Arithematic aobj1(21,10);
  int Result =0;
  
  // Result = Addition (&aobj1)
  Result =aobj1.Addition();  //caller object

  cout<<"Addition is :"<<Result<<"\n";

   // Result = Subtraction (&aobj1)
  Result =aobj1.Subtraction();

  cout<<"Subtractionis :"<<Result<<"\n";
  

  


    return 0;

}