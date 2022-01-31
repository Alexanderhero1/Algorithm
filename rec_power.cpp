#include <iostream>
#include <math.h>
using namespace std;

int power(int a, int n)
{
    if (n == 0)
        return 1;
int p = power(a, n / 2);
    if (n % 2 == 0)
        return p * p;
    else
        return a * p * p;
}


int main()
{
    int a, n;
    cout << "number to raise to a degree   ";
    cin >>  a;
    cout << "value of degree   ";
    cin >>  n;

    power(a,n);

    cout << power(a,n) << endl;
    
 return 0;
}
