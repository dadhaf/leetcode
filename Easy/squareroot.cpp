#include<iostream>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        long long i = 1;
        while(i*i <= x)
        {
            i++;
        }

        return i-1;
    }
};

int main ()
{
    Solution sol;
    cout << sol.mySqrt(9) << endl;
    cout << sol.mySqrt(4) << endl;
    cout << sol.mySqrt(8) << endl;

    return 0;
}