#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map <string,int> m;
    map <string,int>::iterator it;
    m["Farhan"]=43;
    m["Alvee"]=41;
    m["Babu"]=49;
    //m["Nabil"]433;
    m.insert(make_pair("Nabil",433));
    it=m.begin();
    ++it;
        cout<<it->first<<endl;
        cout<<it->second<<endl;


}


