#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int a, b;
    cout << "������� ����� �����: ";
    cin >> a;
    b = a / 2;

    while (a % b != 0)
    {
        b--;
    }
    
    if (b == 1)
    {
         cout << "����� " << a << " ����� �������" <<  endl;
    }
    
    else
    {
         cout << "����� " << a << " �� �������� �������" <<  endl;
    }
    return 0;
}
