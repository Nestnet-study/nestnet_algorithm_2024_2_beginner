#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int temp;
    int sum = 0;
    int avg;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++) {
       sum  += arr[i];
    }
    avg = sum/5;

    for (int i = 0; i < 4; i++) {
        for( int j = 0; j < 4-i; j++)
         if( arr[j] > arr[j+1]) {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }
        
    }   
    cout << avg << '\n' << arr[2] << endl;


}