#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }

    int leftSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum) {
            return i; // Pivot index ditemukan
        }
        leftSum += nums[i]; // Update leftSum untuk indeks berikutnya
    }

    return -1; // Tidak ada pivot index
}

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int result = pivotIndex(nums);
    cout << "Pivot Index: " << result << endl;
    return 0;
}