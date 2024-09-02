#include<iostream>
#include<vector>


using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int rem = 1;
        for (vector<int>::reverse_iterator rit = digits.rbegin(); rit != digits.rend(); rit++)
        {
            if(rem == 1)
            {
                *rit = *rit + 1;
                if(*rit > 9)
                {
                    rem = 1;
                    
                    // *rit = *rit + 1;

                } else
                {
                    rem = 0;
                }
            }
            /* code */
            
            *rit=(*rit)%10;
        }

        if(rem == 1)
        {

            {
                digits.insert(digits.begin(), 1);
            }
        }

        return digits;

        
    }

    
};



int main()
{
    Solution sol;
    vector<int> v1 ({1,2,3});
    vector<int> v2 ({9});
    vector<int> v3 ({4,3,2,1});
    sol.plusOne(v1);
    sol.plusOne(v2);
    sol.plusOne(v3);

    for (auto i: v1)
    {
        cout << i << " ";
    }
    cout <<  endl;

    for (auto i: v2)
    {
        cout << i << " ";
    }
    cout <<  endl;

    for (auto i: v3)
    {
        cout << i << " ";
    }
    cout <<  endl;


    return 0;
}