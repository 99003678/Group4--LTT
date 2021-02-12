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
	bool count = true;
	for(int i=0;i<y.length();i++)
	{
		if((y[i]>=65 && y[i]<=90) || (y[i]>=97 && y[i]<=122))
        {
        	continue;
		}
		else
		{
			count = false;
			
		}
	}
    

    return count;
    
}

int main()
{
    string name;
    cout<<"please enter your name"<<endl;
    cin>>name;
    bool check = check_special(name);
     if(check==false)
     {
        while(1)
        {
            cout<<"Not valid Please enter again"<<endl;
            cin>>name;
            if(check_special(name))
            break;
            else
            continue;
            
        }
    	
	}
	
        string Org_name;
        cout<<"enter your organisation name"<<endl;
        cin>>Org_name;
        cout<<"please enter your enmail"<<endl;
        string email_id;
        cin>>email_id;
        bool check2  =check_email(email_id);
        if(check2==false)
        {
            cout<<"Invalid email please enter again"<<endl;
            while(1)
        {
            cin>>email_id;
            if(check_special(name))
            break;
            else
            cout<<"Not valid Please enter again"<<endl;
        }
            
        }

            float ctc,bo;
            cout<<"enter your CTC"<<endl;
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
    
	

	

