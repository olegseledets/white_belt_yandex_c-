#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, d, x1, x2;
    cin >> a >> b >> c;
    if (a == 0) {//�������� ��������� ���� bx+c=0
        if (b != 0) {
            cout << -c / b;
        }
        else {
            //�� ����� �������, �.�. �� ������� ���������� ��� � !=0
        }
    }
    else {//���������� ���������
        d = (b*b - 4 * a*c);//��������� ������������
        if (d < 0) {
            //��� �������������� ������
        }
        else {
            if (d == 0) {//���������� �����
                x1 = x2 = -b / (2 * a);
                cout << x1;
            }
            else {//d>0  ��� �����
                x1 = (-b + sqrt(d)) / (2 * a);
                x2 = (-b - sqrt(d)) / (2 * a);
                cout << x1 << " " << x2;
            }
        }
    }
    return 0;
}
