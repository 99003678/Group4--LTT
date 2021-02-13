#include<iostream>
#include<bits/stdc++.h>
#include<regex>
#include<stdio.h>
#include "income.h"
#include "inhand.h"


using namespace std;

bool check_email(string x)
{
	const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
	return regex_match(x,pattern);
}

bool check_special(string y)
{
	bool count = false;
	for(int i=0;i<y.length();i++)
	{
		if((y[i]>=65 && y[i]<=90) || (y[i]>=97 && y[i]<=122))
        {
        	continue;
		}
		else
		{
			count = true;
			
		}
	}
    

    return count;
    
}

int main()
{
    string name;
    cout<<"please enter your name"<<endl;
    cin>>name;
    bool val = check_special(name);
    while(val)
    {
        cout<<"Invalid"<<endl;
        cin>>name;
        val = check_special(name);
    }
    string Org_name;
    cout<<"enter your organisation name"<<endl;
    cin>>Org_name;
    bool val1 = check_special(Org_name);
    while(val1)
    {
        cout<<"Invalid Org name"<<endl;
        cin>>Org_name;
        val1 = check_special(Org_name);
    }
    
    string email_id;
    cout<<"Enter your email_id"<<endl;
    cin>>email_id;
    bool val2 = check_email(email_id);
    while(val2==false)
    {
        cout<<"Invalid email"<<endl;
        cin>>email_id;
        val2 = check_email(email_id);
    }
    

    float ctc,bo;
    cout<<"Please enter your CTC above or 50000"<<endl;
    cin>>ctc;
    cout<<"enter your bonus"<<endl;
    cin>>bo;
    cout<<"welcome "<<name<<endl;
    cout<<Org_name<<endl;
    cout<<email_id<<endl;
    cout<<"Your inhand salary is"<<endl;
    cout<<inhand(ctc,bo)<<endl;
    cout<<"Tax to paid is(yearly)"<<endl;
    cout<<incometax(ctc);


 }
    

	

	

