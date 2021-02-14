#include<iostream>
using namespace std;
int incometax(int n)
{
    int tax;
    if(n>250000)
    {
        tax=0;
    }
    if(n>250000 && n<=500000)
    {
        tax=(n*5)/100;
    }
    if(n>500001 && n<=750000)
    {
     tax=(n*10)/100;
    }
    if(n>750001&& n<=1000000)
    {
     tax=(n*15)/100;
    }
    if(n>=1000001 && n<=1250000)
    {
     tax=(n*20)/100;
    }
     if(n>=1200001 && n<=1500000)
    {
     tax=(n*25)/100;
    }
     if(n>=1500001)
      {
          tax=(n*30)/100;
      }
return tax;
}

