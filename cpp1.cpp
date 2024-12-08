#include <iostream>
using namespace std;

class calculator
{
public:

    int floor(double num)
    {
            return floor;
    }

    int add(int a , int b)

    {
        return a + b;
    }

    double Max1(double x , double y)
    {
        if(x>y)
        {
            return x;
        }
        else
        {
            return y;
        }
    }

    bool find1(const std::string& str,char w)
    {
       for(char g : str)
       {
         if(g == w)
        {
            return true;
        }
       }
        return false;
    }

    int Max2(const std::vector<int>& arr)
    {
        int max = arr[0];
        for (int num : arr)
        {
            if (num>max)
            {
                max = num;
            }
        }
        return max;
    }
};