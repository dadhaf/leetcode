#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l=0, r=0, s=0;
       
        while (l < m && r < n)
        {
            if(nums1[l+s] > nums2[r])
            {
                nums1.insert(nums1.begin()+s, nums2[r]);
                // insert value to nums1
                // increment r and s
                r++;
                s++;
           
            } 
            else
            {
                nums1.insert(nums1.begin()+s, nums1[l+s]);
                l++;
                s++;
            }
        }

        while (l < m)
        {
                nums1.insert(nums1.begin()+s, nums1[l+s]);
                l++;
                s++;
        }
        
        while (r < n)
        {
                nums1.insert(nums1.begin()+s, nums2[r]);
                r++;
                s++;
        }

        nums1.resize(m+n);
    }
};


int main()
{

    Solution sol;
    vector<int> v1{1,2,3,0,0,0};
    vector<int> v2{2, 5, 6};

    sol.merge(v1,3,v2,3);

    for (auto i : v1)
        cout<< i << endl;

}