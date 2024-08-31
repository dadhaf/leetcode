#include<vector>
#include<iostream>


using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        int k= 0, l = 0;
        for (int i=0; i < len;i++)
        {
            
            if(nums[i-l] != val)
            {
                k++;
            } else 
            {
                nums.erase(nums.begin()+i-l);
                l++;
            }
            
            
        }

        return k;
    }
};

int main()
{
    vector<int> v ({3,2,1,2,3,1,2,3});
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