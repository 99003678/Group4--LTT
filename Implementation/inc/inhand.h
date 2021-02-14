#include<iostream>
using namespace std;

int inhand(int n,int bonus)
{
    float prf,avg;
    int m;
   prf=provfund(n);
    m=n-bonus-prf-prof_tax()-incometax(n);
    avg=m/12;
    return avg;
}
