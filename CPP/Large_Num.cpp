#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[] = "12346589145683659145397253467924361"
                 "23462380154789348936487108357010370"
                 "81213129471496757914386012342132123"
                 "85629814657325254935673860143122110";
    int qt = 0, size = 35;
    vector<int> v;
    for (int i = size - 1; i >= 0; i--)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += str[j * size + i] - '0';
        }
        sum += qt;
        int last = sum % 10;
        v.push_back(last);
        qt = sum / 10;
    }
    if (qt)
    {
        while (qt)
        {
            int last = qt % 10;
            v.push_back(last);
            qt /= 10;
        }
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < 20; i++)
        cout << v[i];

    return 0;
}