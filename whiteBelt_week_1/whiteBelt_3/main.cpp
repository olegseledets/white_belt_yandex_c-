#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, d, x1, x2;
    cin >> a >> b >> c;
    if (a == 0) {//линейное уравнение вида bx+c=0
        if (b != 0) {
            cout << -c / b;
        }
        else {
            //не имеет решений, т.к. по условию получиться что С !=0
        }
    }
    else {//квадратное уравнение
        d = (b*b - 4 * a*c);//вычисляем дискриминант
        if (d < 0) {
            //нет действительных корней
        }
        else {
            if (d == 0) {//одинаковые корни
                x1 = x2 = -b / (2 * a);
                cout << x1;
            }
            else {//d>0  два корня
                x1 = (-b + sqrt(d)) / (2 * a);
                x2 = (-b - sqrt(d)) / (2 * a);
                cout << x1 << " " << x2;
            }
        }
    }
    return 0;
}
