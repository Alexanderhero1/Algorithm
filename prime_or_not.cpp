#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int a, b;
    cout << "Введите целое число: ";
    cin >> a;
    b = a / 2;

    while (a % b != 0)
    {
        b--;
    }
    
    if (b == 1)
    {
         cout << "Число " << a << " число простое" <<  endl;
    }
    
    else
    {
         cout << "Число " << a << " не является простым" <<  endl;
    }
    return 0;
}
