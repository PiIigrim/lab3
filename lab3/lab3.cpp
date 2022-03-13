#include <iostream>
#include <math.h>
#include <time.h>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    //3.205-минимум при b=5
    double y, xa = 0, xb, x0, a = 7, b, sh, y1, x1, rnd, i = 1;
    srand(time(NULL));
   /* rnd = rand() % 3 - 1;
    while (rnd == 0) {
        rnd = rand() % 3 - 1;
    }*/
    rnd = -0.5;
    cout << "Рандомное число: " << rnd << endl;
    /*x = 3; b = 5; a = 7;*/
    cout << "Введите число b(от 2 до 10): ";
    cin >> b;
    while (b > 10 || b < 2) {
        cout << "Написанно ведь: от 2 до 10! Давай еще раз: ";
        cin >> b;
    }
    cout << "Введите начальное значение: ";
    cin >> x0;
    xa = x0;
    cout << "Введите шаг: ";
    cin >> sh;
    do {
        y = cos(xa) + (1 / b) * cos(a * xa + 1) + (1 / pow(b, 2)) * cos(pow(a, 2) * xa + 2) + (1 / pow(b, 3)) * cos(pow(a, 3) * xa + 3) + (1 / pow(b, 4)) * cos(pow(a, 4) * xa + 4);
        x1 = x0 + sh * rnd;
        xb = x1;
        y1 = cos(xb) + (1 / b) * cos(a * xb + 1) + (1 / pow(b, 2)) * cos(pow(a, 2) * xb + 2) + (1 / pow(b, 3)) * cos(pow(a, 3) * xb + 3) + (1 / pow(b, 4)) * cos(pow(a, 4) * xb + 4);
        if (y1 < y) {
            x0 = x1;
            y = y1;
        }
        sh = 0.75 * sh;
        cout << fixed << "Итерация номер " << i << "\t" << "Значение y: " << y1 << "\t" << "Значение x: " << x0 << "\t" << "Знаечние шага: " << sh << "\t" << endl;
        i++;
    } while (sh > 0.0001);
}
