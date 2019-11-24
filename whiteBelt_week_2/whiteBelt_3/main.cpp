#include <iostream>
#include <string>
#include <vector>

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

vector<string> PalindromFilter(vector<string> words, int minLength){
    vector<string> w;
    if (words.size()==0){
        w=words;
    }
    else{
        for(int i=0; i<words.size();i++)
        {
            if (IsPalindrom(words[i]) && (words[i].length()>=minLength)){
                w.push_back(words[i]);
            }
        }

    }
    return w;
}

int main()
{
    vector<string> words;
    PalindromFilter(words,5);
    return 0;
}
