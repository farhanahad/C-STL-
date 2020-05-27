#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i;
    vector <int> vect(5,555);
    for( i=0;i<vect.size();i++)
    {
        cout<<vect[i]<<endl;
    }
}
