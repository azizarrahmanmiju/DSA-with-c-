#include <iostream>
using namespace std;

int binaryTodec(int binaryNum)
{
    int ans = 0, pow = 1;

    while (binaryNum > 0)
    {
        int rem = binaryNum % 10;
        ans += rem * pow;
        pow *= 2;
        binaryNum /= 10;
    }

    return ans;
}

int main()
{

    cout << binaryTodec(1000) << endl;
}