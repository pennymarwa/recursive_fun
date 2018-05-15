/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int mult = 1;

int fact(int n)
{
    mult = mult*(n);
    return n;
}

int main()
{
    int num;
    
    cout << "enter the value for factorial " ;
    cin >> num ;
    cout << endl << " your entered value is " << num  << endl ;
    
    for (int a=num; a > 0; a--)
    {
        fact(a);
    }
    
    cout << "the factorial of " << num << "is " << mult ;

}



