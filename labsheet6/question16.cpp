#include <iostream>
using namespace std;
int main() {
    int n, arr[100], target, count = 0;
    cout << "Enter number of elements: "; cin >> n;
    cout << "Enter elements:\n";
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << "Enter element to count: "; cin >> target;
    for(int i=0; i<n; i++) {
        if(arr[i] == target) count++;
    }
    cout << "Element occurs " << count << " times.";
    return 0;
}