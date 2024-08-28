#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(void){
    string s,r;
    int k=0;
    cin >> s;
    // sort(s.begin(), s.end());
    int i = 0;
    r=s[i];
    int count;
    while(i<s.size()){
        i++;
        if(r[k] == s[i]){
            r=s[i];
            count=1;
        } else {
            r+=s[i];
            count++;
        }
        k++;

    }
    cout << r << endl;

    return 0;
}