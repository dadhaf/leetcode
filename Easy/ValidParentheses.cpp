#include<iostream>
#include<string>


using namespace std;

class Solution {
public:
    bool isValid(string s) {
        bool val = true;
        int count = 0;
        int mask = 0xFF;
        int len = s.length();
        if(len % 2 == 0){
            for(int i=0; i<len;i++)
            {
                if(s[i] == '{')
                {
                    if((mask & (1<<1)) == 0){
                        val = false;
                        break;
                    }
                    count+=2;
                    mask = 1<<0 | 1<<1 | 1<<2 | 0<<3 | 1<<4 | 0<<5 ;
                    // next possible 1,2,3,-2
                } else if (s[i] == '}')
                {
                    if((mask & (1<<4)) == 0){
                        val = false;
                        break;
                    }
                    count-=2;
                    // next possible any
                } else if (s[i] == '[')
                {
                    if((mask & (1<<2)) == 0){
                        val = false;
                        break;
                    }
                    
                    count+=3;
                    mask = 1<<0 | 1<<1 | 1<<2 | 0<<3 | 0<<4 | 1<<5 ;
                    // next possible 1,2,3,-3
                } else if (s[i] == ']')
                {
                    if((mask & (1<<5)) == 0){
                        val = false;
                        break;
                    }
                    count-=3;
                } else if (s[i] == '(')
                {
                    if((mask & (1<<0)) == 0){
                        val = false;
                        break;
                    }
                    count+=1;
                    mask = 1<<0 | 1<<1 | 1<<2 | 1<<3 | 0<<4 | 0<<5 ;
                    // next possible 1,2,3,-1
                } else 
                {
                    if((mask & (1<<3)) == 0){
                        val = false;
                        break;
                    }
                    count-=1;
                }
                if(count < 0)
                {
                    break;
                }
                cout << count << endl;
                
            }

            if(count != 0)
            {
                val = false;
            } 
        } else 
        {
            val = false;
        }

        return val;

    }
};

int main(){

    Solution sol;
    cout << sol.isValid("([])") << endl;
    return 0;
}