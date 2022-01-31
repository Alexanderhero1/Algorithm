#include <iostream>
#include "locale.h"
using namespace std;

//Task 1
void Func_10_to_2(int n)
{

	if (n != 0)
		Func_10_to_2(n / 2);

	else return;

	cout << ("%d", n % 2);
	return;
}

//Task 2.1
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

//Task 2.2
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

main()
{

    return 0;
}