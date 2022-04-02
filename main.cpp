#include <iostream>

using namespace std;
int obeb(int,int);
int okek(int,int);
int main()
{
    cout<<obeb(40,30)<<endl<<okek(40,30);
    return 0;
}
//obeb function
int obeb(int a,int b){
    int Obeb = 0;
    if(a>b)
    {
        for(int  i = 1; i <= b; i++)
        {
            if(a%i == 0 && b%i == 0)
            {
                Obeb = i;
            }
        }
    }
    else
    {
        for(int  i = 1; i <= a; i++)
        {
            if(a%i == 0 && b%i == 0)
            {
                Obeb = i;
            }
        }
    }
    return Obeb;
}
//okek function
int okek(int a, int b)
{
    int Okek = (a*b)/obeb(a,b);
    return Okek;
}
