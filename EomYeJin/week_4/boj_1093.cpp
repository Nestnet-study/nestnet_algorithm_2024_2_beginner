#include <iostream>
using namespace std;


int main() {
    int X;
    cin >> X;

    int line_num = 1;
    int sum = 0;

    while(sum + line_num < X) {
        sum += line_num;
        line_num++;

    }

    int position = X - sum;
    int child, parent;

    if(line_num % 2 == 1) {
        child = sum + line_num - X + 1;
        parent = position;
    } else {
        child = position;
        parent = sum + line_num - X + 1;
    }

    cout << child << "/" << parent;
    return 0;
}
