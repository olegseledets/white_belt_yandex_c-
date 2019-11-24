#include <iostream>
#include <vector>
#include <string>

using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination){
    for(int i=0;i<source.size();i++){
        destination.push_back(source[i]);
    }
    source.clear();
}

int main()
{
    vector<string> source;
    vector<string> destination;
    MoveStrings(source, destination);
    /*for(int i=0; i<destination.size(); i++){
        cout<<destination[i]<<" ";
    }*/
    return 0;
}

/*
Ќапишите функцию MoveStrings, котора€ принимает два вектора строк,
source и destination, и дописывает все строки из первого вектора в конец второго.
ѕосле выполнени€ функции вектор source должен оказатьс€ пустым.

„тобы очистить содержимое вектора, надо вызвать у него метод clear:

vector<string> words = {"hey", "hi"};
words.clear();
// “еперь вектор words пуст
*/

/*
vector<string> source = {"a", "b", "c"};
vector<string> destination = {"z"};
MoveStrings(source, destination);
// source должен оказатьс€ пустым
// destination должен содержать строки "z", "a", "b", "c" именно в таком пор€дке
*/
