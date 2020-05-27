#include<iostream>
#include<bits/stdc++.h>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    vector <int> vec;
    vector <int>::iterator it;
    vec.push_back(11);
    vec.push_back(111);
    vec.push_back(1222);
    vec.push_back(133);
    vec.push_back(1155);
    vec.push_back(1666);
    sort(vec.begin(),vec.end());
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<endl;
    }
}
