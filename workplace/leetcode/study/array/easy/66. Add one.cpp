#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int carry = 0;
    for (int i = digits.size() - 1; i >= 0; i--)
    {

        int num = (digits[i] + +carry);
        carry = num / 10;
        digits[i] = num % 10;
    }
    if (carry == 1)
        digits.insert(digits.begin(), 1);
    return digits;
}

int main()
{

    return 0;
}
