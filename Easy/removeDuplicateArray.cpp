#include<iostream>
#include<vector>
#include <iterator>
#include<set>
#include <algorithm>


using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        set<int> s;
        
        for(int i=0;i<len;i++)
        {
            s.insert(nums[i]);
        }

        
        int setlen = s.size();
        vector<int> v;
        set<int, greater<int> >::iterator itr;
        cout << "\nThe set s1 is : \n";
        for (itr = s.begin(); itr != s.end(); itr++) {
            cout << *itr << " ";
            v.insert(v.begin(), *itr);
        }
        cout << endl;

        sort(v.begin(), v.end());
        
        nums.insert(nums.begin(), v.begin(), v.end());
        cout << setlen << endl;
        len = nums.size();
        for(int i=0;i<len;i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
        


        
        // v.reserve (s.size ());
        // copy (s.begin (), s.end (), back_inserter (v));
        // nums = v;

        return s.size ();
    }
};

int main(){

    vector<int> v ({1,2,4,5,3,2,5,6});
    vector<int> v1 ({1,1,2});
    vector<int> v2 ({0,0,1,1,1,2,2,3,3,4});
    Solution sol;
    sol.removeDuplicates(v);
    sol.removeDuplicates(v1);
    sol.removeDuplicates(v2);



    return 0;
}