
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    int a[]= {34,32,72,101,52,23};
    int n=(sizeof(a)/sizeof(*a));
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
        for(int i=0;i<n;i++)
    
    {
        cout<<a[i]<<" ";
    }
}
 
