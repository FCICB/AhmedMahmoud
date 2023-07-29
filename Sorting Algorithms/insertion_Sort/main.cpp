#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    int key, j; //99 15 | 55 30 10
    for (int i = 1; i < n; i++)
    {
        key = arr[i]; // 15
        j = i - 1; // 0

        while (j >= 0 && arr[j] > key) // 99 > 15
        {
            arr[j + 1] = arr[j]; //arr[1] --> 15 = arr[0]--> 99
            j = j - 1; //-1
        }
        arr[j + 1] = key; //arr[0]=15
    }
}
void print (int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" "<<endl;
}
int main() {
    int ahmed[6]={5,9,2,4,1,3};
    cout<<"Befor :\n";
    print(ahmed,6);
    insertionSort(ahmed,6);
    cout<<"After :\n";
    print(ahmed,6);
    return 0;
}
