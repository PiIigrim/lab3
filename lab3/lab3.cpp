#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    //3.205-минимум при b=5
    double y, x = 0, x0, a = 7, b, sh, y1, x1, rnd;
    rnd = rand() % 2 - 1;
    /*x = 3; b = 5; a = 7;*/
    /*cout << "Введите число b(от 2 до 10): ";
    cin >> b;
    while (b > 10 || b < 2) {
        cout << "Написанно ведь: от 2 до 10! Давай еще раз: ";
        cin >> b;
    }
    cout << "Введите начальное значение: ";
    cin >> x0;
    x = x0;
    cout << "Введите шаг: ";
    cin >> sh;
    y = cos(x) + (1 / b) * cos(a * x + 1) + (1 / pow(b, 2)) * cos(pow(a, 2) * x + 2) + (1 / pow(b, 3)) * cos(pow(a, 3) * x + 3) + (1 / pow(b, 4)) * cos(pow(a, 4) * x + 4);
    cout << "При х0: " << y;
    x1 = x0 + sh * rnd;
    y1 = cos(x) + (1 / b) * cos(a * x + 1) + (1 / pow(b, 2)) * cos(pow(a, 2) * x + 2) + (1 / pow(b, 3)) * cos(pow(a, 3) * x + 3) + (1 / pow(b, 4)) * cos(pow(a, 4) * x + 4);
    cout << "При х0: " << y;*/
    cout << rnd;
}
