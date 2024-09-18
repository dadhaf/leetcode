#include<iostream>
#include<vector>
#include<set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s{nums.begin(),nums.end()};

        if(s.size() == nums.size())
        {
            return false;
        }

        return true;
    }

};


int main()
{
    vector<int> v{1,2,3,3};
    Solution sol;
    cout << sol.containsDuplicate(v) << endl;
    
}