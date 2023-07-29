#include <iostream>

using namespace std;
void selection(int arr[],int size) {
    int min;
    for (int i = 0; i < size; i++) {
        min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[min] > arr[j])
                min = j;
        }
        swap(arr[min], arr[i]);
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
    selection(ahmed,6);
    cout<<"After :";
    print(ahmed,6);


}
