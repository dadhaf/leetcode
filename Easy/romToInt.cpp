#include<iostream>
#include<string>

using namespace std;

int main(void){

    string s;
    s="MCMXCIV";
    int i = 0;
    int sum=0;
    char p = '\0';
    while(i<s.size())
    {
        char n = s[i];
        if(n == 'M')
        {
            
            sum+=1000;
            if(p=='C'){
                sum-=200;
            }
        } else if (n == 'D')
        {
            sum+=500;
            if(p=='C'){
                sum-=200;
            }
        } else if (n == 'L')
        {
            sum+=50;
            if(p=='X')
            {
                sum-=20;
            }
        } else if (n == 'V')
        {
            sum+=5;
            if(p=='I')
            {
                sum-=2;
            }
            
        } else if (n == 'C')
        {
            sum+=100;
            if(p=='X')
            {
                sum-=20;
            }
        } else if (n == 'X')
        {
            sum+=10;
            if(p=='I')
            {
                sum-=2;
            }
        } else 
        {
            // 'I'
            sum+=1;
        }
        p=n;
        i++;
    }

    cout<<sum<<endl;

    return 0;
}