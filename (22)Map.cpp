#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <string,int> m;
    m["Farhan"]=43;
    m["Alvee"]=41;
    m["Babu"]=49;
    //m["Nabil"]433;
    m.insert(make_pair("Nabil",433));
    cout<<m["Farhan"];
}
