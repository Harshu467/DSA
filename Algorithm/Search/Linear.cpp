#include <iostream>
#include <bits/stdc++.h>
#include <algorithm> 
using namespace std;

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
    bool flag = false;
    for(int i=1;i<N;i++)
    {
        if(X==V[i])
        {
            flag = true;
            cout<<X<<" is found in an Array at "<<i<<"th Position"<<endl;
            break;
        }
    }
    if(!flag)
    {
        cout<<"Element is not Found in given Array ";
    }
    return 0;
}