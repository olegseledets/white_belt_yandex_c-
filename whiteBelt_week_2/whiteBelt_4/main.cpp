#include <iostream>

using namespace std;

void UpdateIfGreater(int first, int& second){
    if(first>second){
        second=first;
    }
}

int main()
{
    int a,b;
    cin>>a>>b;
    UpdateIfGreater(a,b);
    return 0;
}

/*
Напишите функцию UpdateIfGreater, которая принимает два целочисленных аргумента: first и second.
Если first оказался больше second, Ваша функция должна записывать в second значение параметра first.
При этом изменение параметра second должно быть видно на вызывающей стороне.
*/

/*int a = 4;
int b = 2;
UpdateIfGreater(a, b);
// b должно стать равно 4
*/
