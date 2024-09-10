#include<iostream>

class Solution
{
public:
    

    void bubbleSort(int* nums1, int num1Size)
    {
        
        int swap;
        for(int i = 0; i < num1Size-1; i++)
        {
            for (int j = i+1; j < num1Size; j++)
            {
                if(nums1[i] > nums1[j] )
                {
                    swap=nums1[i];
                    nums1[i] = nums1[j];
                    nums1[j] = swap;
                }
            }
        }
    }
};


int main()
{

    int a[] = {1,23,54,24,65,23,56,345,7};
    int l = sizeof(a)/sizeof(a[0]);

    Solution sol;

    sol.bubbleSort(a, l);
       for(auto i: a)
        std::cout << i << std::endl;


}