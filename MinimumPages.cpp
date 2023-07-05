
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
bool isfeasible(int a[],int k,int res,int n)
{
    int student=1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+a[i]>res)
        {
            student++;
            sum=a[i];
        }
        else
        {
            sum +=a[i];
        }
    }
    return student<=k;
}

 int MinPages(int a[],int key,int n)
 {
    
    int min= *max_element(a, a + n);
    int max= accumulate(a, a+n, max);
    int res=0;
    while(min<=max)
    {
        int mid=(min+max)/2;
        if(isfeasible(a,key,mid,n))
        {
            res=mid;
            max=mid-1;
        }
        else
        {
            min=mid+1;
        }
    }
    return res;
 }

int main()
{
    
    int arr[] = { 10,10,20,30 };
    int n = sizeof arr / sizeof arr[0];
    int k = 2; // No. of students
 
    cout << "Minimum number of pages = "
         << MinPages(arr,k,n) << endl;
    return 0;
}
 
    
    
