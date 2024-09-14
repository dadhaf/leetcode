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

};

int main()
{

    RecursionExample re;
    re.walk(5);
    re.walkWithReccursion(5);
}