#include<iostream>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        // int lenHaystk = haystack.size();
        // int lenNeedle = needle.size();
        size_t index;
        // if(lenHaystk == 0 || lenNeedle == 0 || lenNeedle > lenHaystk)
        // {
        //     index = -1;
        // } else 
        {
            index = haystack.find(needle);
        }

        return index;
    }
};


int main()
{
    Solution sol;
    cout << sol.strStr("badsadbad","sad") << endl;
    cout << sol.strStr("badsadbad","sd") << endl;

    return 0;
}