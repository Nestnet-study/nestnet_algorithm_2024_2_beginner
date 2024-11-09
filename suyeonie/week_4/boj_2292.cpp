// 1, 6, 12, 18, 24 순으로 증가 6*(n-1)
// 1보다 작거나 같으면 1,은 아닌데 6보다 작거나 같으면 6

#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;
    int add = 0;
    int max = 1;
    int result = 1;

    while (1)
    {
        if (N <= max)
            break;
        else
        {
            add += 6;
            max += add;
            result++;
        }
    }

    cout << result;

    return 0;
}