#include <iostream>
#include <vector>
#include <stack>

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

vector<float> reverse(vector<float> list)
{
    vector<float> rev;
    stack<float> temp;

    for (int i = 0; i < list.size(); i++)   {temp.push(list[i]);}   // Add elements of list to a stack

    // Add elements of stack to new list
    for (int i = 0; i < list.size(); i++)
    {
        rev.push_back(temp.top());
        temp.pop();
    }

    return rev;
}

int main()
{
    cout << "Enter numbers (q to quit):" << endl;
    vector<float> list;
    string input;
    cin >> input;

    // Loop for input until input is q
    while (input != "q")
    {
        float num = stof(input);    // Convert string to floating-point
        list.push_back(num);
        cin >> input;
    }

    // Print the sum and product of the list
    cout << "Sum of list: " << compute_sum(list) << endl;
    cout << "Product of list: " << compute_prod(list) << endl;

    // Print the reversed list
    cout << "Reversed list:" << endl;
    vector<float> rev = reverse(list);
    for (int i = 0; i < rev.size(); i++)    {cout << rev[i] << ' ';}
    cout <<endl;
}