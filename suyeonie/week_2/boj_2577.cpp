#include <iostream>
using namespace std;

class Count
{
    int S[10];

public:
    Count()
    {
        for (int i = 0; i < 10; i++)
        {
            S[i] = 0;
        }
    }
    void inc(int x)
    {
        for (int i = 0; i < 10; i++)
        {
            if (i == x)
            {
                S[i]++;
                break;
            }
        }
    }
    int geticnt(int i)
    {
        return S[i];
    }
};

int main()
{

    int A, B, C;
    Count La;
    cin >> A >> B >> C;

    A = A * B * C;
    int x;
    while (A > 0)
    {
        x = A % 10;
        A /= 10;
        La.inc(x);
    }

    for (int i = 0; i < 10; i++)
    {
        cout << La.geticnt(i) << endl;
    }

    return 0;
}