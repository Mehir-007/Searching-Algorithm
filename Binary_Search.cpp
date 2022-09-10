#include<bits/stdc++.h>
using namespace std;

int Binary_Search(int arr[],int n,int x)
{
   int l=0,h=n-1;
   while(l<=h)
   {
     int mid=l+(h-l)/2;
     if(arr[mid]==x)
     return mid;
     else if(arr[mid]<x)
     l=mid+1;
     else
     h=mid-1;
   }
   return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<Binary_Search(arr,n,3);
}