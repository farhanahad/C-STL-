#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list <float> List(4,2);
    list <float>::iterator it;
    for(it=List.begin();it!=List.end();it++)
        cout<<*it<<endl;
}
