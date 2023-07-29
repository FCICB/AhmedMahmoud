#include <vector>
#include <iostream>
using namespace std;

// Function to heapify a subtree rooted at index i
void heapify(vector<int>& arr, int n, int i) {
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1; // Left child
    int     right = 2 * i + 2; // Right child

    // If the left child is larger than the root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If the right child is larger than the root
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If the largest element is not the root
    if (largest != i) {
        swap(arr[i], arr[largest]);
        // Recursively heapify the affected subtree
        heapify(arr, n, largest);
    }
}

// Function to perform Heap Sort
void heapSort(vector<int>& arr) {
    int n = arr.size();

    // Build max heap from the array
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extract elements from the heap in sorted order
    for (int i = n - 1; i >= 0; i--) {
        std::swap(arr[0], arr[i]); // Move current root to end
        heapify(arr, i, 0); // Max heapify the reduced heap
    }
}

int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    heapSort(arr);

    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
