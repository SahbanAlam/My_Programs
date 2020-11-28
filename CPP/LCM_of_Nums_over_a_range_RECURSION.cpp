#include <bits/stdc++.h>
using namespace std;

int MinOfTwo(int a, int b)
{
    return a > b ? b : a;
}

int LCM(int a, int b, int min, int k)
{
    if (a == 1 || b == 1)
        return a * b;
    if (a == b)
        return a;
    if (k <= min)
    {
        if (a % k == 0 && b % k == 0)
        {
            int m = MinOfTwo(a / k, b / k);
            return k * LCM(a / k, b / k, m, 2);
        }
        else
            return LCM(a, b, min, k + 1);
    }
    else
        return a * b;
}

int main()
{

    int num;
    cin >> num;
    long long int res = 1;

    for (int i = 2; i <= num; i++)
    {
        res = LCM(res, i, MinOfTwo(res, i), 2);
    }

    cout << res << endl;

    return 0;
}
