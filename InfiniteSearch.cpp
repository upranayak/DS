
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
 int binarysort(int a[],int key,int high,int low)
 {
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        if(key>a[mid])
        {
            return binarysort(a,key,high,mid+1);
        }
        return binarysort(a,key,mid-1,low);
    } return -1;
 }
int SearchInfinite(int a[],int key)
{
    int low=0;
    int high=1;
    while(a[high]<key)
    {
        low=high;
        high=2*high;
    }
    return binarysort(a,key,high,low);
}

int main()
{
    int arr[] = { -4,-1,3,7,10,11,44,63,477,490,3456,5678,7342,100004 };
    int k=5678 ;
    int high=sizeof(arr) / sizeof(arr[0])-1;
    int low=0;
    cout << "Element location:" <<SearchInfinite(arr,k)<<endl;
    return 0;
}

 
    
    
