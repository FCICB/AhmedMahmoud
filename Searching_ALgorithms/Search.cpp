//
// Created by ahmed on 29/07/23.
//
#include <iostream>
#include "Search.h"
using namespace std;
int Search::seqSearch(int arr[],int item)
{
    int i;
    bool found=false;
    int s=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<s;i++)
    {
        if(item==arr[i]){
            found=true;
            break;
        }
    }
    if(found)
        return i;
    else
        return -1;
}

int Search::binarySearch(int arr[], int item) {
    int n=sizeof(arr)/sizeof (arr[0]);
    int first=0;
    int last=n-1;
    int mid;
    bool found = false;
    while(first <=last && !found)
    {
        mid=(first + last )/2;
        if(item==arr[mid])
        {
            found = true;
            break;
        }
        else if(item > arr[mid])
            first=mid+1;
        else
            last=mid-1;
    }
    if(found)
        return mid;
    else
        return -1;
}

void Search::print(int *arr) {
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" "<<endl;
}
