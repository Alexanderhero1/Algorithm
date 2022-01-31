#include <iostream>
#include <math.h>
using namespace std;

int power_2(int a, int n)
{
    if (n == 0)
    return 1;
    if (n % 2 == 1)
    return power_2(a, n - 1) * a;
    else {
    int c = power_2(a, n / 2);
    return c * c;
    }
    
}


int main()
{
    int a, n;
    cout << "number to raise to a degree   ";
    cin >> a;
    cout << "value of degree   ";
    cin >> n;

    power_2(a, n);

    cout << power_2(a, n) << endl;

    return 0;
}
