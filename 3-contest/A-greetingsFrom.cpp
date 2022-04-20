#include <iostream>
using namespace std;
int main()
{

    int caseNum, num1, num2;
    cin >> caseNum;
    for (int i = 1; i <= caseNum; i++)
    {
        cin >> num1 >> num2;
        cout << "Case " << i << ": " << num1 + num2 << endl;
    }

    return 0;
}