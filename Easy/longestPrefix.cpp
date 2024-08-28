#include<string>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    vector<string> strs({"flower","flo","flower","flower"});
    string s = "";
    sort(strs.begin(),strs.end());
    int size_v=strs.size();
    int len = strs[0].length();
    int res = 0;
    int temp = 1;
    
    if(size_v > 1){
        for (int j=0;j<len;j++)
        {
            int i;
            for(i = 0; i<size_v; i++)
            {
                {
                    if(strs[i][j] != strs[0][j]){
                        temp = 0;
                        break;
                    }

                } 
            }

            if(temp == 0)
            {
                res = j;
                break;
            } 

        }
        if (temp == 1){
            res = len;
        }
    } else {
        res = len;
    } 
    
    s.assign(strs[0],0,res);
    cout << s << endl;
    

}