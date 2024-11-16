#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int number = 666;
    int check = 0;

    for (int i = number; check < N; i++) {
        if (to_string(i).find("666") != string::npos)
        check++;
        
        if(check ==N ){
         cout << i <<endl;
         break;
        }

    }

  
    return 0;
}