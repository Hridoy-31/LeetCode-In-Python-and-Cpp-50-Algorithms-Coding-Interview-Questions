#include <bits/stdc++.h>
using namespace std;

int BinarySearch (int arr[], int sz, int target) {
    int left = 0;
    int right = sz - 1;

    while (left <= right) {
        int mid = (left + right)/2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else if (arr[mid] > target) {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int target = 20;
    int sz = sizeof(arr)/sizeof(arr[0]);

    int result = BinarySearch (arr, sz, target);

    if (result == -1) {
        cout << "Target not found !" << endl;
    }
    else {
        cout << "Target found at the index : " << result << endl;
    }

    return 0;
}
