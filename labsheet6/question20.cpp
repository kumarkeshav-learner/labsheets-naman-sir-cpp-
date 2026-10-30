#include <iostream>
using namespace std;
int main() {
    int n, arr[100];
    cout << "Enter number of SORTED elements (Ascending): "; cin >> n;
    cout << "Enter elements:\n";
    for(int i=0; i<n; i++) cin >> arr[i];  
    int target = arr[n-1];
    int left = 0, right = n - 1, mid, found = -1;
    
    while(left <= right) {
        mid = left + (right - left) / 2;
        if(arr[mid] == target) { 
                found = mid; 
            left = mid + 1; 
        }
        else if(arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
        cout << "Largest element is " << arr[found] << " located at index " << found;
    return 0;
}