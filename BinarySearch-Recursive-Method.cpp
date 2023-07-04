
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

int main()
{
    int arr[] = { -4,-1,3,7,10,11 };
    int k=10 ;
    int high=sizeof(arr) / sizeof(arr[0])-1;
    int low=0;
    //cout<<high<<endl;
    cout << "Element location:" <<binarysort(arr,k,high,low)<<endl;
    return 0;
}

 
    
    
