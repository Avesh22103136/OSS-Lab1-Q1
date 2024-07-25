#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter number of elements: ";
    int n;cin>>n;
    vector<double>a;
    for(int i=0;i<n;i++)
    {
        a.push_back(rand()%100);
    }
    double sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    double avg = sum/n;
    cout<<"Elements are :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nAverage is "<<avg;
}
