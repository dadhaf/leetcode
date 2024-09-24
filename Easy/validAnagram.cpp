#include<iostream>
#include<string>
#include<set>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        set<char> s1{s.begin(),s.end()};
        set<char> s2{t.begin(),t.end()};

        if(!(s1 == s2) || s.size() != t.size())
        {
            return false;
        }
        int j =0, k=0;
        unordered_map<char, int> mp, np;
        for(auto i : s)
        {
            mp[i] = mp[i]+1;
        }

        for(auto i : t)
        {
            np[i] = np[i]+1;
        }

        for(auto i:s1)
        {
            if(mp[i] != np[i])
            {
                return false;
            }
        }
        return true;
    }
};


int main(){

    Solution sol;

    cout << sol.isAnagram("a", "ba") << endl;
}