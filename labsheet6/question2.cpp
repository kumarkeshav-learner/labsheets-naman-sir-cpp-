#include <iostream>
using namespace std;
int main() {
    int n, arr[10], sum = 0;
    cout << "Enter number of elements: "; cin >> n;
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of elements: " << sum;
    return 0;
}