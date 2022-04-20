#include <iostream>
using namespace std;
int main()
{

    int bottleAhold, bottleAcontain, bottleBcontain;
    cin >> bottleAhold >> bottleAcontain >> bottleBcontain;
    int remainBottle2 = bottleBcontain - (bottleAhold - bottleAcontain);
    if (remainBottle2 < 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << remainBottle2 << endl;
    }

    return 0;
}