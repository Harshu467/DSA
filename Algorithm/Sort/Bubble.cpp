//BUBBLE SORT
// Bubble sort is majorly used where -
// complexity does not matter
// simple and shortcode is preferred
// Best Case Complexity - It occurs when there is no sorting required, i.e. the array is already sorted. The best-case time complexity of bubble sort is O(n).
// Average Case Complexity - It occurs when the array elements are in jumbled order that is not properly ascending and not properly descending. The average case time complexity of bubble sort is O(n2).
// Worst Case Complexity - It occurs when the array elements are required to be sorted in reverse order. That means suppose you have to sort the array elements in ascending order, but its elements are in descending order. The worst-case time complexity of bubble sort is O(n2).
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
using namespace std;
int main()
{
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
    return 0;
}