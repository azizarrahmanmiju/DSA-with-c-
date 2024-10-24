#include <iostream>
using namespace std;

int revers(int number)
{
    int ans = 0;
    while (number > 0)
    {
        int rem = number % 10;
        ans = ans * 10 + rem;
        number /= 10;
    }
    return ans;
}

int main()
{
    cout << revers(125) << endl;
    return 0;
}