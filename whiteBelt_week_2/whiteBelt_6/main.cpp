#include <iostream>
#include <vector>
#include <string>

using namespace std;

void Reverse(vector<int>& v){
    vector<int> temp;
    for(int i=v.size()-1; i>=0; i--){
        temp.push_back(v[i]);
    }
    v=temp;
}

int main()
{
    vector<int> a;
    Reverse(a);
    return 0;
}

/*
Реализуйте функцию void Reverse(vector<int>& v),
которая переставляет элементы вектора в обратном порядке.
*/
