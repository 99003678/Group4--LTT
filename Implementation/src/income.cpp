#include<iostream>
using namespace std;
int incometax(int n)
{
    int tax;
    if(n<=50000)
    {
        tax=0;
    }
    if(n>50000 && n<=150000)
    {
     tax=(n*10)/100;
    }
    if(n>150000&& n<=500000)
    {
     tax=(n*15)/100;
    }
    if(n>500000)
    {
     tax=(n*20)/100;
    }
return tax;
}