/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int fib(int a , int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int value1, value2 ;
    cout<<"Enter the first number :";
    cin >> value1 ;
    cout << "Enter the second number :";
    cin >> value2 ;
    
    cout << "The two numbers entered are :" << value1 << " and " << value2 << endl ;
    cout << "The fibonacci series is " << value1 << ", " << value2 ;
    
    for (int i = 0; i <= 9; i++)
    {
        int value3 = fib (value1 , value2);
        cout << ", " << value3 ; 
        value1 = value2;
        value2 = value3;
    }

    return 0;
}


