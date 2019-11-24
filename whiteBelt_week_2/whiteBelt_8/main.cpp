#include <iostream>
#include <vector>

using namespace std;

int averageTemperature(const vector<int>& dT){      //средняя температура
    int aT=0;
    for(auto a : dT){
        aT+=a;
    }
    aT=aT/dT.size();
    return aT;
}

vector<int> tAboveAverage(const vector<int>& dT, const int& aT){
    vector<int> aa;
    for(int t=0; t<dT.size();t++){
        if(dT[t]>=0 && dT[t]>aT){
            aa.push_back(t);
        }
    }
    return aa;
}

void outputAboveAverage(const vector<int>& aa){
    cout<<aa.size()<<endl;
    for(int i=0; i<aa.size();i++){
        cout<<aa[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> dailyTemperature(n);
    for(int i=0; i<n;i++){
        cin>>dailyTemperature[i];
    }
    outputAboveAverage(tAboveAverage(dailyTemperature,averageTemperature(dailyTemperature)));

    return 0;
}

/*
Даны значения температуры, наблюдавшиеся в течение N подряд идущих дней.
Найдите номера дней (в нумерации с нуля) со значением температуры выше
среднего арифметического за все N дней.

Гарантируется, что среднее арифметическое значений температуры является
целым числом.

Формат ввода
Вводится число N, затем N неотрицательных целых чисел — значения температуры
в 0-й, 1-й, ... (N−1)-й день.

Формат вывода
Первое число K — количество дней, значение температуры в которых выше
среднего арифметического. Затем K целых чисел — номера этих дней.

ввод
5
7 6 3 0 9

вывод
3
0 1 4
*/
