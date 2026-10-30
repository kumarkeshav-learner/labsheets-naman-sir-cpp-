#include <iostream>
using namespace std;
int main() {
    int n, arr[100], target;
    cout << "Enter number of SORTED integer elements: "; cin >> n;
    cout << "Enter elements:\n";
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << "Enter integer to search: "; cin >> target;
    int left = 0, right = n - 1, mid, found = -1;
    while(left <= right) {
        mid = left + (right - left) / 2;
        if(arr[mid] == target) { found = mid; break; }
        if(arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    if(found != -1) cout << "Integer found at index " << found;
    else cout << "Integer not found.";
    return 0;
}