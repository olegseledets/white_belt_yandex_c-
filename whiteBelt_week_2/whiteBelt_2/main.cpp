#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool IsPalindrom(string word){
    int len = word.length();
    if (len==0 || len==1){
        return 1;
    } else{
        for(int i = 0; i < len/2; ++i)
        {
            if(word[i] != word[len-i-1])
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    string word;
    cin>>word;
    if(IsPalindrom(word)){
        cout<<"true";
    } else{
        cout<<"false";
    }
    return 0;
}
