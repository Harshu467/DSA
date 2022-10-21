#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool Swap=true;
    long N; // Here N is Size of  vector
    cout<<"Enter Amount of Numbers to be sorted : ";
    cin>>N;
    vector<long>V(N);
    cout<<"Enter Numbers for Sorting : ";
    int Num;
    for(long i=0;i<N;i++)
    {
        cin>>V[i];
    }
    cout<<"Array Before Sorting : "<<endl;
    for(long i=0;i<V.size();i++)
    {
        cout<<V[i]<<" ";
    }
    cout<<endl;
    long long MinIndex;
    for(long i=0;i<N-1;i++)
    {
        MinIndex = i;
        for(long j=1;j<N;j++)
        {
            if(V[j]<V[MinIndex])
            {
                MinIndex=j;
            }
        }
        int temp=V[i];
        V[i] = V[MinIndex];
        V[MinIndex]=temp;
    }
    // OutPut
    cout<<"Selection Sorted Array : ";
    for(long i=0;i<V.size();i++)
    {
        cout<<V[i]<<" ";
    }
    cout<<endl;
    return 0;
}