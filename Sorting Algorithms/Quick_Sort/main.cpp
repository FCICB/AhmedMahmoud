#include <iostream>
#include <vector>

using namespace std;
void quickSort(vector<int>& arr, int left, int right) {
    if (left >= right) {
        return;
    }
    // Select the pivot (middle element)
    int pivot = arr[(left + right) / 2];
    // Step 3: Initialize pointers i and j
    int i = left;
    int j = right;
    // Partitioning the array
    while (i <= j) {
        // Finding elements to swap (move i to the right)
        while (arr[i] < pivot) {
            i++;
        }
        // Finding elements to swap (move j to the left)
        while (arr[j] > pivot) {
            j--;
        }
        //  Swap elements if needed
        if (i <= j) {
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    quickSort(arr, left, j);
    quickSort(arr, i, right);
}
void print (vector<int> &arr,int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" "<<endl;
}
int main() {
    vector<int> ahmed={5,9,2,4,1,3};
    int s=ahmed.size();
    cout<<"Before :\n";
    print(ahmed,s);
    quickSort(ahmed,0,s-1);
    cout<<"After :\n";
    print(ahmed,s);
    return 0;
}
