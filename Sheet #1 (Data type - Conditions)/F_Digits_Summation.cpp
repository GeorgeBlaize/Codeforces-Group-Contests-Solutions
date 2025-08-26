#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m;

    cin>>n>>m;

    long long int sum=0;

    int lastDigitFirstnNumber=n%10;
    
    int lastDigitLastmNumber=m%10;

    sum=lastDigitFirstnNumber+lastDigitLastmNumber;

    cout<<sum<<endl;

    return 0;
}