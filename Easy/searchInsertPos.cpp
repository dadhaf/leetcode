#include<iostream>
#include<vector>
#include<iterator> // for iterators
#include<algorithm>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = -1;
        int count = 0;
      
        for (int it : nums)
            {
            if (it == target){
                index = count;
                break;
            } else if (it > target)
            {
                index = count;
                break;
            } else 
            {
                // break;
            }

            count++;
        }
        if(index == -1 && nums.back() < target)
        {
            index = count;
        }

        return index;
    }
};


int main(){

    Solution sol;
    vector<int> v ({1,2,2,5,5,5,6,9,10});
    cout << sol.searchInsert(v,4) << endl;
    cout << sol.searchInsert(v,12) << endl;

    return 0;
}