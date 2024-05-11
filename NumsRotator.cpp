#include <iostream>
#include <vector>
using namespace std;

int search(const ::vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            return mid; // Found the target
        }

        // Check which half is sorted
        if (nums[left] <= nums[mid])
        {
            // Left half is sorted
            if (nums[left] <= target && target < nums[mid])
            {
                // Target is in the left half
                right = mid - 1;
            }
            else
            {
                // Target is in the right half
                left = mid + 1;
            }
        }
        else
        {
            // Right half is sorted
            if (nums[mid] < target && target <= nums[right])
            {
                // Target is in the right half
                left = mid + 1;
            }
            else
            {
                // Target is in the left half
                right = mid - 1;
            }
        }
    }

    return -1; // Target not found
}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2}; // Example rotated array
    int target = 5;

    int result = search(nums, target);
    if (result != -1)
    {
        cout << "Target " << target << " found at index " << result << std::endl;
    }
    else
    {
        cout << "Target " << target << " not found in the array." << std::endl;
    }

    return 0;
}
