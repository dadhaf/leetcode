#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Solution {
public:


    string addBinary(string a, string b) {
        int lena = a.size();
        int lenb = b.size();
        int i = 0;
        if(lena > lenb)
        {
            for(int j = 0; j < (lena - lenb); j++)
            {
                b.insert(0,"0");
                i = lena-1;
            }
        } else if (lenb > lena) {
            for(int j = 0; j < (lenb - lena); j++)
            {
                a.insert(0,"0");
                i = lenb-1;
            }
        } else {
            i = lena-1;
        }

        string s = "";


        
        int carry = 0;
        while(i>=0)
        {
            if(a[i] == '0' && b[i] == '0' )
            {
                if(carry == 1)
                {
                    s.insert(0,"1");
                } else 
                {
                    s.insert(0,"0");
                }

                carry = 0;
            } else if(a[i] == '1' && b[i] == '0' )
            {
                if(carry == 1)
                {
                    s.insert(0,"0");
                    carry = 1;
                } else 
                {
                    s.insert(0,"1");
                    carry = 0;
                }
            } else if(a[i] == '0' && b[i] == '1' )
            {
                if(carry == 1)
                {
                    s.insert(0,"0");
                    carry = 1;
                } else 
                {
                    s.insert(0,"1");
                    carry = 0;
                }
            } else {
                if(carry == 1)
                {
                    s.insert(0,"1");
                } else 
                {
                    s.insert(0,"0");
                }
                carry = 1;
            }
            i--;

        }

        if(carry == 1){
            
                {
                    s.insert(0, "1");
                } 
            
        }



        return s;
        
    }
};


int main()
{

    Solution sol;
    cout << sol.addBinary("11", "1") << endl;
    cout << sol.addBinary("1010", "1011") << endl;
    cout << sol.addBinary("10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101", "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011") << endl;

    return 0;
}

