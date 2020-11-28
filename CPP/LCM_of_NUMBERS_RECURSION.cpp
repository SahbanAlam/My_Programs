#include <bits/stdc++.h>
using namespace std;

int Min(int a, int b)
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
            int m = Min(a / k, b / k);
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
    int n1 = 4, n2 = 6;
    cout << LCM(n1, n2, Min(n1, n2), 2);

    return 0;
}