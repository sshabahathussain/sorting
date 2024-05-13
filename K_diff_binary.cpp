#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int binarySearch(vector<int> &nums, int start, int x)
{
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == x)
        {
            return mid;
        }
        else if (x > nums[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int findPairs(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    set<pair<int, int> > ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (binarySearch(nums, i + 1, nums[i] + k) != -1)
        {
            ans.insert({nums[i], nums[i] + k});
        }
    }

    return ans.size();
}
int main()
{
    // vector<int> nums{1, 1, 3, 4, 5};
    vector<int> nums{1, 2, 3, 4, 5};
    int k = 2;
    int numOfPairs = findPairs(nums, k);
    cout << numOfPairs << endl;
    return 0;
}