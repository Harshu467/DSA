#include <iostream>
#include <bits/stdc++.h>
#include <algorithm> 
using namespace std;
int binarySearch(vector<long long>&V,long long X)
{
    long long N;
    N = V.size();
    long long low=0;
    long long High=N-1;
    while(low<=High)
    {
        long long Mid = low+(High-low)/2;
        if(X==V[Mid])
        {
            return Mid;
        }
        else if(X<V[Mid])
        {
            High = Mid -1;
        }
        else
        {
            low = Mid+1;
        }
    }
    return -1;
}
int main() {
	// your code goes here
    long long N;
    cout<<"Enter Number of Elements in array : ";
    cin>>N;
    vector<long long>V(N);
    for(int i=1;i<=N;i++)
    {
        cout<<"Enter "<<i<<"th element of Array : ";
        cin>>V[i];
    }
    long long X;
    cout<<"Enter Element to Search in Array : ";
    cin>>X;
    int Answer;
    Answer=binarySearch(V,X);
    if(Answer==-1)
    {
        cout<<"Element is Not Found in an Array ";
    }
    else{
        cout<<X<<" is Found at "<<Answer<<"th Position";
    }
    return 0;
}