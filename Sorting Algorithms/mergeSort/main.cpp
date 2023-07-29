#include <iostream>
#include<iostream>
using namespace std;
void merge(int arr[],int l,int m,int r)
{
    int i,j,k;
    int n1=m-l+1; //[l...m]
    int n2=r-m; //[r..m]
    int *L=new int[n1],*R=new int[n2];
    for(i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(j=0;j<n2;j++)
        R[j]=arr[m+1+j];
    i=j=0;
    k=l;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " <<endl;
    }
}

int main() {
    int arr[]={50,40,66,90,22,1,5,6};
    int s=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,s-1);
    print(arr,s);
    return 0;
}
