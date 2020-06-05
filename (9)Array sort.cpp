#include<iostream>
#include<algorithm>
#include<iterator>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={4,6,7,9,7};
    sort(arr,arr+5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
}

