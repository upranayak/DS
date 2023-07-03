
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
    int a[]= {34,32,72,111,5};
    int n=(sizeof(a)/sizeof(*a));
    for(int i=0;i<n;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(a[j+1]<a[j])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapped=true;
            }
        }
        if(!swapped)
        {
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
}
 
