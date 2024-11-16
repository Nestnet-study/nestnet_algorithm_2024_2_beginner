#include <iostream>
using namespace std;

class Nums
{
    int mainNum;
    int S[10] = {0};
    void sixnine()
    {
        S[6] += S[9];
        S[9] = 0;
        S[6] = (S[6] + 1) / 2;
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

public:
    Nums(int a) : mainNum(a) {};

    int getMax()
    {
        int index = 0;
        for (int i = 1; i < 9; i++)
        {
            if (S[index] < S[i])
            {
                index = i;
            }
        }
        return S[index];
    }

    void loofInc()
    {
        int M = mainNum;
        while (M > 0)
        {
            inc(M % 10);
            M /= 10;
        }
        sixnine();
    }
};

int main()
{

    int door;
    cin >> door;
    Nums la(door);
    la.loofInc();
    cout << la.getMax();

    return 0;
}