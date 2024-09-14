#include<iostream>



class RecursionExample
{
public:
    void walk(int steps)
    {
        while (steps > 0 )
        {
            std::cout << "You take a step" <<  std::endl;
            steps--;
        }
    }

    void walkWithReccursion(int steps)
    {
        if(steps < 1)
        { return;}
        std::cout << "You take a step in reccursion" <<  std::endl;
        walkWithReccursion(steps-1);
    }

    unsigned long long factorial(int num)
    {
        if(num==1 || num == 0)
        { return 1;}
        if(num<0)
            return num*factorial(num+1);
        return num*factorial(num-1);
    }

};

int main()
{

    RecursionExample re;
    re.walk(5);
    re.walkWithReccursion(5);
    std::cout << re.factorial(66) << std::endl;
}