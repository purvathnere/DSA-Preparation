#include<iostream>
using namespace std;

void merge(int *arr, int s, int mid, int e) {
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values
    int k = s;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++) {
        second[i] = arr[k++];
    }

    // Merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    int mainArrayIndex = s;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        } else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // Copy the remaining elements of the first array, if any
    while (index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    // Copy the remaining elements of the second array, if any
    while (index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    // Free the allocated memory
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e) {
    // Base case
    if (s >= e) {
        return;
    }

    // Find the middle point
    int mid = s + (e - s) / 2;

    // Sort the first and second halves
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    // Merge the sorted halves
    merge(arr, s, mid, e);
}

int main() {
    int arr[5] = {2, 1, 5, 6, 9};
    int n = 5;

    mergeSort(arr, 0, n - 1);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
