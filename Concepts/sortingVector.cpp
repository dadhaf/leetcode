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

        void mergeSort(vector<int> &num)
        {
            int length = num.size();

            if(length == 1){return;}
            // left
            vector<int> left(num.begin(), num.begin() + length/2 );
            vector<int> right(num.begin() + length/2, num.end() );
            mergeSort(left);
            //right
            mergeSort(right);
            // merge
            merge(left, right, num);

        }

private:
        void merge(vector<int> left, vector<int> right, vector<int> &num)
        {
            int l=0, r=0, s = 0;
            while(l<left.size() && r < right.size())
            {
                if(left[l] > right[r])
                {
                    num[s] = right[r];
                    r++;
                    s++;
                } else
                {
                    num[s] = left[l];
                    l++;
                    s++;
                }
            }

            while(l<left.size())
            {
                num[s] = left[l];
                l++;
                s++;
            }

            while (r<right.size())
            {
                /* code */
                num[s] = right[r];
                r++;
                s++;
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
    v = {4,3,2,1};
    sorting.mergeSort(v);

    for(auto i:v)
        cout << i << endl;


}