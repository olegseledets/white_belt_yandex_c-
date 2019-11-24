#include <iostream>
#include <vector>

using namespace std;

vector<int> Reversed(const vector<int>& v){
    vector<int> v1;
    for(int i=v.size()-1; i>=0;i--){
        v1.push_back(v[i]);
    }
    return v1;
}

int main()
{
    vector<int> v;
    Reversed(v);
    return 0;
}


/*
Реализуйте функцию vector<int> Reversed(const vector<int>& v),
возвращающую копию вектора v, в которой числа переставлены в обратном порядке.
*/
