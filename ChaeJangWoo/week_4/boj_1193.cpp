#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;

   int n = 1;
   while(x - n > 0){
    x -= n;
    n ++;
   }
   if(n%2){
    cout << n + 1 - x << '/' << x;
   }
   else
   cout << x << '/' << n + 1 - x;
}
