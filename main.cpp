#include <iostream>
using namespace std;

int main() {
   float a,x,b,y;
   cin >> a >> b >> x >> y;

   float result;
   if (x<0 && y>0) {
   result = a*x -b*y;
   }
   else if (x>= 0 && y<=0){
      result = a*( x*x) - b*y;
   }
   else{
      result = a*x +b*(y*y);
   }
   cout<<result;
   return 0;
}
