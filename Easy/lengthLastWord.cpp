#include<iostream>
#include <string>

using namespace std;


class Solution {
public:
    int lengthOfLastWord(string s) {
        int lenS = s.size();
        int b = s.find_last_not_of(' ');
        // int lastSpaceIndex = s.find_last_of(' ');
        if ((lenS - 1) == b)
        {
            return s.size() - s.find_last_of(' ') - 1;
        } else 
        {
            string substr = s.substr(0, b+1);
            return substr.size() - substr.find_last_of(' ') - 1;
        }
        
        
    }
};

int main()
{

    Solution sol;
    cout << sol.lengthOfLastWord("Hello World") << endl;
    cout << sol.lengthOfLastWord("Hello   World   c  ") << endl;
    cout << sol.lengthOfLastWord("c") << endl;
    cout << sol.lengthOfLastWord("c   ") << endl;


    return 0;
}