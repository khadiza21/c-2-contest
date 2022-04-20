#include <iostream>
using namespace std;
int main()
{
    int mbps, month, useMbps = 0, balanceData = 0;
    cin >> mbps >> month;
    while (month--)
    {
        balanceData = balanceData + mbps;
        cin >> useMbps;
        balanceData = balanceData - useMbps;
    }

    cout << balanceData + mbps << endl;
    return 0;
}
