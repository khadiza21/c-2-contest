#include <bits/stdc++.h>
using namespace std;
int main()
{
    int harryShot, larryShot, shotedCan;
    cin >> harryShot >> larryShot;
    shotedCan = harryShot + larryShot - 1;
    cout << shotedCan - harryShot << " " << shotedCan - larryShot << endl;

    return 0;
}