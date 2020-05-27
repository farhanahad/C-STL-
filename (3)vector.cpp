#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector <int> vect(10,5955);
    vect.push_back(11);
    for(int i=0;i<vect.size();i++)
    {
        cout<<vect[i]<<endl;
    }
}

