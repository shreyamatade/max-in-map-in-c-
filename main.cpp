#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mn=INT_MAX;
    int mx=INT_MIN;

    map<int,int>mp;

    mp.insert({1,10});
    mp.insert({2,20});
    mp.insert({3,30});



    for(auto itr=mp.begin();itr!=mp.end();++itr)
    {
        if(itr->second<=mn)
        {
            mn=itr->second; //itr-> first if you want to have key
        }
        if(itr->second>=mx)
        {
            mx=itr->second; // itr->first if you want to have key
        }
    }

    cout<<"max:"<<mx<<endl;
    cout<<"min:"<<mn<<endl;


}
