#include <iostream>
using namespace std;
int main() {
    int n, arr[10];
    cout << "Enter number of elements: "; cin >> n;
    cout << "Enter elements:\n";
    cin >> arr[0];
    int maxEl = arr[0], minEl = arr[0];
    for(int i = 1; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > maxEl) maxEl = arr[i];
        if(arr[i] < minEl) minEl = arr[i];
    }
    cout << "Maximum: " << maxEl << ", Minimum: " << minEl;
    return 0;
}