#include <iostream>
using namespace std;

int main () {
    int N;
    int num[1000];
    cin >> N;
    int cnt = 0;

   for (int i = 0; N > 0; i++) {
    num[i] = N % 10;
    N /= 10;
    cnt++;
   }

   int temp;
    for(int i = 0; i < cnt-1; i++) {
        for(int j = 0; j < cnt-i-1; j++) {
            if(num[j] < num[j+1]) {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            } 
        }
    }
    for (int i = 0; i < cnt; i++) {
        cout << num[i];
    }
    cout << endl;
    return 0;
}