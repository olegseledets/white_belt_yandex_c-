#include <iostream>

using namespace std;


int Factorial(int a){   //функция Факториал
    int fact=1;
    if(a<00){
        return 1;
    }
    else{
        int fact=1;
        while(a>0){
            fact=a*fact;
            a--;
        }
        return fact;
    }
}

int main()
{
    int a;
    cin>>a;
    cout<<Factorial(a);
    return 0;
}
