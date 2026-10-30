#include <iostream>
using namespace std;
int main() {
    int n; float arr[100], target;
    cout << "Enter number of SORTED float elements: "; cin >> n;
    cout << "Enter elements:\n";
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << "Enter float to search: "; cin >> target;
    int left = 0, right = n - 1, mid, found = -1;
    while(left <= right) {
        mid = left + (right - left) / 2;
        if(arr[mid] == target) { found = mid; break; }
        if(arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    if(found != -1) cout << "Float found at index " << found;
    else cout << "Float not found.";
    return 0;
}