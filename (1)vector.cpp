#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> vect;
    vect.push_back(33);
    vect.push_back(39);
    vect.push_back(37);
    vect[0]=9;
    cout<<vect[0]<<endl<<vect[1]<<endl<<vect[2];
}
