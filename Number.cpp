#include<iostream>

using namespace std;

void fun2(int n)
{
    if(n>50)
        cout<<"Number >50";
    else
        cout<<"Number <50";
}


/*
void fun(int n)
{
    if(n%2)
        cout<<"Odd";
    else cout<<"Even";
}*/

main()
{
    int n;
    cin>>n;
//    fun(n);
    fun2(n);
}
