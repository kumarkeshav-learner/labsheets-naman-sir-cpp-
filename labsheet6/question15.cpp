#include <iostream>
using namespace std;
int binarySearch(int arr[], int left, int right, int target) {
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == target) return mid;
        if(arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
int main() {
    int n, arr[100], target;
    cout << "Enter number of SORTED elements: "; cin >> n;
    cout << "Enter elements:\n";
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << "Enter element to search: "; cin >> target;
    int index = binarySearch(arr, 0, n-1, target);
    if(index != -1) cout << "Element found at index " << index;
    else cout << "Element not found.";
    return 0;
}