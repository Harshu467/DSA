//BUBBLE SORT
// 1 22 0 12 65 23 88 -8 9
// 1 0 12 22 23 65 -8 9 88
// 0 1 12 22 23 -8 9 65 88
// 0 1 12 22 -8 9 23 65 88
// 0 1 12 -8 9 22 23 65 88
// 0 1 -8 9 12 22 23 65 88
// 0 -8 1 9 12 22 23 65 88
// -8 0 1 9 12 22 23 65 88
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    bool Swap=true;
    long N; // Here N is Size of  vector
    cout<<"Enter Amount of Numbers to be sorted : ";
    cin>>N;
    vector<long>V(N);
    cout<<"Enter Numbers for Bubble Sorting : ";
    int Num;
    //Input for Bubble Sorting and pushing into Vector
    for(long i=1;i<=N;i++)
    {
        cin>>Num;
        V.push_back(Num);
    }
    // Bubble Sorting
    for(long i=1;(i<=N) && (Swap);i++)
    {
        Swap=false;
        for(long j=1;j<=N-i-1;j++)
        {
            Swap=true;
            if(V[j]>V[j+1])
            {
                swap(V[j],V[j+1]);  // swap(element1,element2) is inbuilt function to change position of 2 elements
            }
        }
    }
    // OutPut
    cout<<"Bubble Sorted Array : ";
    for(long i=1;i<=V.size();i++)
    {
        cout<<V[i]<<" ";
    }
    cout<<endl;
}