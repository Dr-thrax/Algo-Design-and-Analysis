#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,k;
    vector <int> v;
    cout << "Enter the size of the array" << endl;
    int size,value;
    cin >> size;
    cout << "Enter the array" << endl;
    for(int i=0;i<size;i++)
    {
        cin >> value;
        v.push_back(value);
    }

    m = 157;

    vector <int> r(157);
    for(int i=0;i<r.size();i++)
        r[i] = -1;

    for(int i=0;i<v.size();i++)
    {
        r[v[i]%m] = v[i];
    }

    cout << "h(k)\tk"<< endl;
    for(int i=0;i<r.size();i++)
    {
        if(r[i]!=-1)
        {
            cout << i << "\t" << r[i] << endl;
        }
    }
}
