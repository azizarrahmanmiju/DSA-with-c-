#include <iostream>
using namespace std;

int dectobinary(int decNum)
{
    int ans = 0;
    int pow = 1;
    while (decNum > 0)

    {
        int rem = decNum % 2;
        decNum /= 2;
        ans += rem * pow;
        pow *= 10;
    }
    return ans;
}

int main()
{
    int decnum = 43;
    for (int i = 1; i <= 10; i++)
    {
        cout << dectobinary(i) << endl;
    }

    return 0;
}
