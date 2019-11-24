#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> a;
    int countCommand=0;
    cin>>countCommand;

    string command;
    int countP;

    int i=0;
    while (i<countCommand){
        cin>>command;
        if(command=="WORRY"){
            cin>>countP;
            a[countP]=1;
        }
        else if(command=="QUIET"){
            cin>>countP;
            a[countP]=0;
        }
        else if(command=="COME"){
            cin>>countP;
            if(countP>0){
                while(countP>0){
                    a.push_back(0);
                    countP--;
                }
            }
            else if(countP<0){
                while(countP<0){
                    a.pop_back();
                    countP++;
                }
            }
        }
        else if(command=="WORRY_COUNT"){
            int wCount=0;
            for(int j=0;j<a.size();j++){
                if(a[j]==1){
                    wCount+=1;
                }
            }
            cout<<wCount<<endl;
        }
        i++;
    }
    return 0;
}
