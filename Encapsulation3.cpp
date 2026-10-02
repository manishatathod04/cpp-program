#include <iostream>

using namespace std;
#pragma pack (1)
class Demo
{                      // default hnje ki khi nhi tr te private aste
   int i;
   char ch;
   float f;

};



int main()

{
       Demo dobj;

       dobj.i= 11;   // He error ka ahe ki AS  public nhi write kele
       dobj.ch = 'A';
       dobj.f =3.14;

    return 0;
}