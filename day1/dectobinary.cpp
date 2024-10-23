#include <iostream>
using namespace std;

int main()
{
    int decnum = 43;
    int ans = 0;
    int pow = 1;

    while (decnum > 0)

    {
        int rem = decnum % 2;
        decnum = decnum / 2;
        ans += rem * pow;
        pow *= 10;
    }
    cout << ans << endl;

    return 0;
}
