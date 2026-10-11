#include <iostream>

using namespace std;

class Demo
{
   int i;
   char ch;
   float f;

};



int main()

{
       Demo dobj;

       cout<<sizeof(dobj);


    return 0;
}

// Code          | अर्थ                                  |
 
 //class Demo`  | Class तयार केला                       |
 //int i`       | Data member / characteristic          |
 //char ch`     | Data member / characteristic          |
 //float f`     | Data member / characteristic          |
 //`Demo obj`    | Demo class चा object तयार केला        |
 //sizeof(obj)` | Object किती memory घेतो ते पाहिले     |
 //cout`        | Output दाखवतो                         |
 //main()`      | Program execution सुरू होण्याचे ठिकाण |
