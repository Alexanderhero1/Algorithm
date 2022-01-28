#include <iostream>
#include "locale.h"

using namespace std;

void Func_10_to_2(int n) 
{

	if (n != 0)
		Func_10_to_2(n / 2);

	else return;

	cout<<("%d", n % 2);
	return;
}

int main() 
{
	setlocale(0, "RUS");

	int n;
	cout << "Введите десятичное число: ";
	cin >> n;
	Func_10_to_2(n);
	return 0;
}
