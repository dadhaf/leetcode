#include<iostream>
#include<math.h>


using namespace std;

class Solution
{
    public:
        int climbStairs(int n) 
        {
            int t0 = 1;
            int t1  = 1;
            int tn, tnm;
            tnm = t0 +t1;
            for(int i=1; i<n ;i++)
            {
                
                t1 = t1+t0;
                t0 = t1-t0;
            }

            return t1;
        } 
};

int main()
{
    Solution sol;

    cout << sol.climbStairs(5) << endl;


    return 0;
}