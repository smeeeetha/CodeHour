#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n,x;
    cin>>t;
    for(int T=0;T<t;T++)
    {   int sum,temp=1000,flag=0;
        cin>>n>>x;vector<int>arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
        {   
            for(int size=0;size<n;size++)
            {   sum=0;
                for(int j=i;j<=i+size;j++)
                {
                    sum+=arr[j];
                }
                if(sum>=x)
                {
                    if(size<temp)
                    {
                        temp=size+1;flag=1;
                    }
                }
            }
        }
        if(flag==1)
          cout<<temp<<endl;
        else 
          cout<<0<<endl;
     }
    return 0;
}
