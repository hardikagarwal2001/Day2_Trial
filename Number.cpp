#include<iostream>

using namespace std;

void fun(int n)
{
    if(n%2)
        cout<<"Odd";
    else cout<<"Even";
}

main()
{
    int n;
    cin>>n;
    fun(n);
}
