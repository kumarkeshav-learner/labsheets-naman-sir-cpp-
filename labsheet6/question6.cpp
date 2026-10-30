#include <iostream>
using namespace std;
int main() {
    int n, arr[10], target, found = 0;
    cout << "Enter number of elements: "; cin >> n;
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter element to search: "; cin >> target;
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            cout << "Element found at index " << i;
            found = 1;
            break;
        }
    }
    if(!found) cout << "Element not found.";
    return 0;
}