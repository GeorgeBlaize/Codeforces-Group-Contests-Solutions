//C. Finding Minimums

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

  int N,K;

  cin>>N>>K;

  vector<int>arr(N);

  for(int i=0; i<N; i++){
    cin>>arr[i];
  }

  for(int i=0; i<N; i+=K){
    int end = min(i+K,N);

    int minimum=*min_element(arr.begin()+i,arr.begin()+end);

    cout<<minimum<<" ";
  }

  return 0;
}
