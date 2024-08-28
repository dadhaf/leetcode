#include<iostream>
#include<string>
#include<stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {

        stack<char> st;
        char top, r;
        bool val = true;
        int count = 0;
        int len = s.length();
        if(len % 2 == 0){
            for(int i=0; i<len;i++)
            {
                if(s[i] == '{')
                {
                    top = '{';
                    st.push('{');
                    count+=2;
                    // next possible 1,2,3,-2
                } else if (s[i] == '}')
                {
                    count-=2;
                    if (count < 0){
                        val = false;
                        break;
                    }
                    if(top == '{')
                    {
                        st.pop();
                        if(!st.empty())
                        {
                            top = st.top();
                        }
                    } else {
                        val = false;
                    }
                    
                    
                    // next possible any
                } else if (s[i] == '[')
                {
                    top = '[';
                    st.push('[');
                    
                    
                    count+=3;
                    // next possible 1,2,3,-3
                } else if (s[i] == ']')
                {
                    count-=3;

                    if (count < 0){
                        val = false;
                        break;
                    }
                    if(top == '[')
                    {
                        st.pop();
                        if(!st.empty())
                        {top = st.top();}
                    } else {
                        val = false;
                    }
                } else if (s[i] == '(')
                {
                    top = '(';
                    st.push('(');
                    count+=1;
                } else 
                {
                    count-=1;

                    if (count < 0){
                        val = false;
                        break;
                    }
                    if(top == '(')
                    {
                        st.pop();
                        if(!st.empty())
                        {top = st.top();}
                    } else {
                        val = false;
                    }
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

            if(!st.empty())
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
    cout << sol.isValid("){") << endl;
    return 0;
}