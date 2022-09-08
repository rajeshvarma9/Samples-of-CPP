#include <iostream>
using namespace std;
 
// function to print a row
void printn(int num)
{
    // base case
    if (num == 0)
        return;
    cout << "* ";
 
    // recursively calling printn()
    printn(num - 1);
}
 
void pattern(int n, int i)
{
    // base case
    if (n == 0)
        return;
    printn(i);
    cout << endl;
 
    // recursively calling pattern()
    pattern(n - 1, i + 1);
}
 
int main()
{
    int n = 9;
    pattern(n, 1);
    return 0;
}