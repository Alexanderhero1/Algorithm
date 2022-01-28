#include <iostream>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Привет, мир" << endl;
	return 0;
}
