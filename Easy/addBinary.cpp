#include<iostream>
#include<string>

using namespace std;

class Solution {
public:


    string addBinary(string a, string b) {
        int la = a.size();
        int lb = b.size();
        int carry = 0;
        string s = "";
        int len = (la > lb) ? lb : la;
        int maska = (la > lb) ? (la - lb) : 0;
        int maskb = (la > lb) ? 0 : (lb - la);
        // int s[(const int)len];
        for (int i = len - 1; i >=0; i--)
        {
            if(b[i + maskb] == '0' && a[i + maska] == '0'  )
            {
                if (carry == 1)
                {
                    s.insert(0,"1");
                } else 
                {
                    s.insert(0,"0");
                }
                
            } else if(b[i + maskb] == '1' && a[i + maska] == '0'  )
            {
                if (carry == 1)
                {
                    s.insert(0,"0");
                    carry = 1;
                } else 
                {
                    s.insert(0,"1");
                }
            } else if (b[i + maskb] == '0' && a[i + maska] == '1'  )
            {
                if (carry == 1)
                {
                    s.insert(0,"0");
                    carry = 1;
                } else 
                {
                    s.insert(0,"1");
                    carry = 1;
                }
            } else if (b[i + maskb] == '1' && a[i + maska] == '1'  )
            {
                if (carry == 1)
                {
                    s.insert(0,"1");
                } else 
                {
                    s.insert(0,"0");
                }
                carry = 1;
            } 
            
        }
        if (carry == 1)
        {
            if(la > lb)
            {
                if(a[len] == '0')
                {
                    s.insert(0,"1");
                } else
                {
                    s.insert(0, a.substr(len,la-len));
                }

                
            } else if(lb > la)
            {
                if(b[len] == '0')
                {
                    s.insert(0,"1");
                } else
                {
                    s.insert(0, a.substr(len,lb-len-1));
                }

                
            }

        }



        return s;
        
    }
};


int main()
{

    Solution sol;
    cout << sol.addBinary("11", "1") << endl;
    cout << sol.addBinary("10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101", "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011") << endl;

    return 0;
}

