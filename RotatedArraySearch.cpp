
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
 int bsearch(int a[],int key,int high,int low)
 {
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        if(a[low]<a[mid])
        {
            if(key>=a[low]&&key<a[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        else
        {
            if(key>a[mid]&&key<a[high])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }

    } return -1;
 }

int main()
{
    int arr[] = { 9003,10119,15003,-4,-1,3,7,10,11,44,63,477,490,3456,5678,7342};
    int k=5678 ;
    int high=sizeof(arr) / sizeof(arr[0])-1;
    int low=0;
    cout << "Element location:" <<bsearch(arr,k,high,low)<<endl;
    return 0;
}

 
    
    
