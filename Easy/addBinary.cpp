#include<iostream>
#include<string>

using namespace std;

class Solution {
public:


    string addBinary(string a, string b) {
        unsigned long long vala = 0, valb = 0, valc = 0;// = text2dec(a) + text2dec(b);
        int len = a.length();
        for(int i = len-1;i>=0;i--)
        {
            
            if(a[i] == '1')
            {
                vala += (1<<(len - i - 1));
            }
        }

        len = b.length();
        for(int i = len-1;i>=0;i--)
        {
            
            if(b[i] == '1')
            {
                valb += (1<<(len - i - 1));
            }
        }

        valc = vala + valb;

        string s = "";
        while(valc>1)
        {
            if(valc%2 == 0)
            {
                s.insert(0,"0");
            } else
            {
                s.insert(0,"1");
            }
            valc=valc/2;
        }

        if(valc==1)
        {
            s.insert(0,"1");
        } else
        {
            s.insert(0,"0");
        }

        return s;
        
    }
};


int main()
{

    Solution sol;

    cout << sol.addBinary("10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101", "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011") << endl;

    return 0;
}

