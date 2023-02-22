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

// Compute the product of a list of numbers
float compute_prod(vector<float> list)
{
    float prod = 1;
    for (int i = 0; i < list.size(); i++)   {prod *= list[i];}

    return prod;
}