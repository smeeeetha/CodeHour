#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n,m;
    cin>>t;
    for(int T=0;T<t;T++)
    {
        cin>>n; vector<int>arr(n);
         for(int i=0;i<n;i++)
            cin>>arr[i];
        int i=0;
        while(count(arr.begin(),arr.end(),arr[i])>1)
        {i++;}
        cout<<arr[i]<<endl;
    }
    return 0;
}
