//cpp code for multiplication table

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "The multiplication table for:  "; //enter positive integer
    cin >> n;
    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    
    return 0;
}
