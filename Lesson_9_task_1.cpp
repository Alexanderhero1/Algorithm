#include <iostream>
#include <queue>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "rus");

    priority_queue <int> priority_q;  // ��������� ������������ �������

    cout << "������� 5 �����: " << endl;

    for (int j = 0; j < 5; j++) {
        int a; cin >> a;

        priority_q.push(a);  // ��������� �������� � �������
    }
    // ������� ������ �������(����������)
    
    cout << "������ ������� �������: " << priority_q.top();  

    return 0;
}