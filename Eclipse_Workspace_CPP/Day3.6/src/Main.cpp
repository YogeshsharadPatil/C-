#include<cstdio>
namespace na{
int num1=10;
}

namespace nb{
int num1 = 20;
  namespace nc{
     int num1 = 30;

       }

}


int main(){
   printf("%d\n",na::num1);
   printf("%d\n",nb::num1);
   printf("%d\n",nb::nc::num1);
}
