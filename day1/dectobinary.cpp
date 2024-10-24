#include <iostream>
using namespace std;

int dectobinary(int decNum) // this mathod do conver a decimel number to binary number
{
    int ans = 0;
    int pow = 1;
    while (decNum > 0)

    {
        int rem = decNum % 2; // remendir number
        decNum /= 2;          // devide decNum and store there
        ans += rem * pow;     // chenge the answer with add remainder * power
        pow *= 10;            // power incress with multiply 10
    }
    return ans;
}

int main()
{
    int decnum = 43;
    for (int i = 1; i <= 10; i++) // pass 1 to 10 number for convert dec to binary
    {
        cout << dectobinary(i) << endl; // print every sengle integer binary number
    }

    return 0;
}

/// thanks to reach me===========
/// thanks to reach me===========
/// thanks to reach me===========
/// thanks to reach me===========
/// thanks to reach me===========