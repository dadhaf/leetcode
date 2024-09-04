#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    

    int text2dec(string a)
    {
        int ret;
        int len = a.length();
        for(int i = len-1;i>=0;i--)
        {
            
            if(a[i] == '1')
            {
                ret += (1<<(len - i - 1));
            }
        }

        return ret;
    }

    string dec2text(int a)
    {
        string s = "";
        while(a>1)
        {
            if(a%2 == 0)
            {
                s.insert(0,"0");
            } else
            {
                s.insert(0,"1");
            }
            a=a/2;
        }

        if(a==1)
        {
            s.insert(0,"1");
        } else
        {
            s.insert(0,"0");
        }

        return s;
        
        
    }

    string addBinary(string a, string b) {
        int val = text2dec(a) + text2dec(b);

        

       return dec2text(val);

    }
};


int main()
{

    Solution sol;

    cout << sol.addBinary("11", "1") << endl;

    return 0;
}

