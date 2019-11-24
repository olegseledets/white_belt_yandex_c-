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
�������� ������� MoveStrings, ������� ��������� ��� ������� �����,
source � destination, � ���������� ��� ������ �� ������� ������� � ����� �������.
����� ���������� ������� ������ source ������ ��������� ������.

����� �������� ���������� �������, ���� ������� � ���� ����� clear:

vector<string> words = {"hey", "hi"};
words.clear();
// ������ ������ words ����
*/

/*
vector<string> source = {"a", "b", "c"};
vector<string> destination = {"z"};
MoveStrings(source, destination);
// source ������ ��������� ������
// destination ������ ��������� ������ "z", "a", "b", "c" ������ � ����� �������
*/
