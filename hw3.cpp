#include <iostream>
#include <vector>

using namespace std;

// Compute the sum of a list of numbers
float compute_sum(vector<float> list)
{
    float sum = 0;
    for (int i = 0; i < list.size(); i++)   {sum += list[i];}

    return sum;
}