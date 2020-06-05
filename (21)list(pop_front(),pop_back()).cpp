#include<iostream>
#include<list>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    list <int> mylist(arr,arr+5);
    list <int>::iterator it;
    mylist.pop_front();
    mylist.pop_back();
    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<endl;
    }
}


