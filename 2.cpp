#include <iostream>
#include <vector>
using namespace std;
int searchInsertPosition(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left;
}
int main() {
    int n;
    cout << "Enter the size of the sorted array: ";
    cin >> n;
    vector<int> sortedArray(n);
    cout << "Enter the elements of the sorted array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> sortedArray[i];
    }
    int target;
    cout << "Enter the target value: ";
    cin >> target;
   
    int index = searchInsertPosition(sortedArray, target);
    cout << "Target " << target << " should be inserted at index: " << index << endl;
    return 0;
}