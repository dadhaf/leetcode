#include<vector>
#include<iostream>


using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        int k;
        vector<int> v1;
        for (int i; i < len;i++)
        {
            if(nums[i] != val)
            {
                v1.insert(v1.begin(), nums[i]);
            }
            
        }

        len = v1.size();
        nums.insert(nums.begin(), v1.begin(), v1.end());
        return len;
    }

    
};

int main()
{
    vector<int> v ({3,2,2,3});
    Solution sol;
    int k;
    k = sol.removeElement(v, 3);
    for(int i=0;i<k;i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    return 0;
}