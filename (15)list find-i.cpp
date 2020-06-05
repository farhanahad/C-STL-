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
    if(it==a.end()){
        cout<<"Not found";
    }
    else{
        cout<<"Found";
    }
}
