#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    int arr[5]={22,33,454,656,7};
    list <int> a(arr,arr+5);
    list <int>::iterator it;
    it=find(a.begin(),a.end(),454);
cout<<*it<<endl;
    a.insert(it,7);
    for(it=a.begin();it!=a.end();it++)
    {
        cout<<*it<<endl;
    }
}

