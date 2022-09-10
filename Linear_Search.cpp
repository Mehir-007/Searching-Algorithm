#include<bits/stdc++.h>
using namespace std;

int Linear_Search(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        return i;
    }
    return -1;
}
int main(){
    int arr[]={1,5,7,8,9,2,10,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<Linear_Search(arr,n,6);
}