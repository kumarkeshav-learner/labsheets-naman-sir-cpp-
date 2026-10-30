#include <iostream>
using namespace std;
int main() {
    int n, arr[100], target;
    bool isPresent = false;
    cout << "Enter number of elements: "; cin >> n;
    cout << "Enter elements:\n";
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << "Enter number to check: "; cin >> target;
    for(int i=0; i<n; i++) {
        if(arr[i] == target) {
            isPresent = true;
            break;
        }
    }
    if(isPresent) cout << "The number is present in the array.";
    else cout << "The number is not present.";
    return 0;
}