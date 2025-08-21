#include<bits/stdc++.h>
using namespace std;

int main()
{
    double  radius;
    const double PI = 3.141592653;

    double  area;
    cin >> radius;
    area =PI*(radius*radius);
    cout<<fixed<<setprecision(9)<<area<<endl;

    return 0;
}