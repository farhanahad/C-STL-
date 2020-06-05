#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list <float> List;
    list <float>::iterator it;
    List.push_back(10);
     List.push_back(19);
      List.push_front(100);
       List.push_back(1);
       List.reverse();
       cout<<"List size:"<<List.size()<<endl;
       for(it=List.begin();it!=List.end();it++)
        cout<<*it<<endl;
}

