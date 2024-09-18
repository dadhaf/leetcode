#include<iostream>
#include<vector>
#include<set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        mergeSort(nums);
        bool val = false;
        int count = 1;
        for(int i =1; i<nums.size(); i++)
        {
            if(nums[i] != nums[i-1])
            {
                count++;
            } else
            {
                return true;
            }
        }

        return val;
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
    vector<int> v{1,2,3,3};
    
    
    Solution sol;
    cout << sol.containsDuplicate(v) << endl;
    
}