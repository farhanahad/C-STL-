#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    int arr[5]={22,33,454,656,7};
    list <int> a(arr,arr+5);
    list <int>::iterator it;
    it=a.begin();
    it++;
    a.insert(it,7);
    for(it=a.begin();it!=a.end();it++)
    {
        cout<<*it<<endl;
    }
}
