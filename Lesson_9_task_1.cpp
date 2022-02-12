#include <iostream>
#include <queue>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "rus");

    priority_queue <int> priority_q;  // объ€вл€ем приоритетную очередь

    cout << "¬ведите 5 чисел: " << endl;

    for (int j = 0; j < 5; j++) {
        int a; cin >> a;

        priority_q.push(a);  // добавл€ем элементы в очередь
    }
    // выводим первый элемент(исключение)
    
    cout << "ѕервый элемент очереди: " << priority_q.top();  

    return 0;
}