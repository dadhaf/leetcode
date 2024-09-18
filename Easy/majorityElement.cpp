#include<vector>
#include<iostream>

using namespace std;


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /* Sort nums, then count each element */
        mergeSort(nums);
        
        int maxVal  = nums[0]; // update when the count > prevCount
        int prevCount = 1, currCount = 1;
        int i=1;
        while(i<nums.size())
        {
            if(nums[i] == nums[i-1])
            {
                currCount++;
                if(prevCount < currCount)
                {
                    prevCount = currCount;
                    maxVal = nums[i];
                }
            } else
            {
                currCount = 1;
            }
            i++;
            
        }

    return maxVal;

    }
private:

    void mergeSort(vector<int> &nums)
    {
        int length = nums.size();
        if(length <= 1){return;}

        vector<int> left(nums.begin(), nums.begin() + length/2);
        vector<int> right(nums.begin() + length/2, nums.end());

        mergeSort(left);
        mergeSort(right);
        merge(left, right, nums);

    }

    void merge(vector<int> left,vector<int> right, vector<int> &nums)
    {
        int l=0, r=0, s=0;
        while(l < left.size() && r < right.size())
        {
            if(left[l] > right[r])
            {
                nums[s] = right[r];
                s++;
                r++;
            } else
            {
                nums[s] = left[l];
                s++;
                l++;
            }
        }
        
        while(l < left.size())
        {
            
            
            nums[s] = left[l];
            s++;
            l++;
            
        }
        while(r < right.size())
        {
            
            nums[s] = right[r];
            s++;
            r++;
            
        }


    }
};


int main()
{

    Solution sol;
    vector<int> v{1};
    cout << sol.majorityElement(v) << endl;



}