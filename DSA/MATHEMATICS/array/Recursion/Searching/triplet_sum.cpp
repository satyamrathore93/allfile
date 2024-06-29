#include<iostream>
using namespace std;

bool is_pair(int arr[], int left, int right, int x) {
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == x) {
            return true;
        } else if (sum < x) {
            left++;
        } else {
            right--;
        }
    }
    return false;
}

bool has_pair(int arr[], int n, int x) {
    for (int i = 0; i < n; ++i) {
        if (is_pair(arr, i + 1, n - 1, x - arr[i])) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {2, 3, 4, 8, 9, 20, 40};
    int x = 32;
    cout << has_pair(arr, 7, x);

    return 0;
}
