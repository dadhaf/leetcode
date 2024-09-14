#include<iostream>
#include<vector>

using namespace std;

class Sorting
{
    public:
        void bubbleSort(vector<int> &num)
        {
            int length = num.size();
            for (int i = 0; i < length; i++)
            {
                for (int temp, j = 0; j < length - i -1 ; j++)
                {
                    if(num[j+1]<num[j])
                    {
                        // swap
                        temp = num[j];
                        num[j] = num[j+1];
                        num[j+1] = temp;
                    }
                }
            }
        }


        void selectionSort(vector<int> &num)
        {
            int length = num.size();

            for(int temp, min, i = 0;i<length;i++)
            {
                min = i;
                for (int j = i+1; j<length; j++)
                {
                    if(num[min] > num[j])
                    {
                        min = j;
                    }
                }
                temp = num[min];
                num[min] = num[i];
                num[i] = temp;
            }
        }

        void insertionSort(vector<int> &num)
        {
            int length = num.size();
            for (int temp, i = 1; i<length; i++)
            {
                temp = num[i];
                for (int j = i-1; j>=0; j--)
                {
                    if(temp < num[j])
                    {
                        num[j+1] = num[j];
                        num[j] = temp;
                    } else
                    {
                        num[j] = temp;
                        break;
                    }
                }
            }
        }
};



int main()
{
    vector<int> v {4,3,2,1};

    Sorting sorting;
    sorting.bubbleSort(v);

    for(auto i:v)
        cout << i << endl;
    
    v = {4,3,2,1};
    sorting.selectionSort(v);

    for(auto i:v)
        cout << i << endl;

    v = {4,3,2,1};
    sorting.insertionSort(v);

    for(auto i:v)
        cout << i << endl;


}