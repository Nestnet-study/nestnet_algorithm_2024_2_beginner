#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int x = 0;
    int sum = 2;
    while(sum <= n){
        sum += 6*x;
        x++;
    }

    if(n == 1)
    x = 1;

    cout<<x;
}