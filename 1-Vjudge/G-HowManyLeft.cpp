#include <bits/stdc++.h>
using namespace std;
int main()
{
    int totalH, totalW, blackH, blackW;
    cin >> totalH >> totalW >> blackH >> blackW;
    cout << (totalH - blackH) * (totalW - blackW) << endl;
    return 0;
}