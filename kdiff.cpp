#include <iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
// typedef pair<int, int> pairs; 

using namespace std;
int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>> ans;
        int i = 0, j = 1;
        while(j<nums.size()){
            int diff = nums[j] - nums[i];
            if(diff == k) {
                ans.insert({nums[i],nums[j]});
                i++,j++;
            }
            else if(diff > k) {
                i++;
            }
            else{
                j++;
            }
            if(i == j) {
                j++;
            }
        }
     return ans.size();
    }

    int main() {
        // vector<int> nums{1,1,3,4,5};
        vector<int> nums{1,2,3,4,5};
        int k = 1;
        int numOfPairs = findPairs(nums,k);
        cout<<numOfPairs<<endl;
        return 0;
    }