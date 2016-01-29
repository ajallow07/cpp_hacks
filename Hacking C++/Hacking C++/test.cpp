//
//  main.cpp
//  Hacking C++
//
//  Created by Alieu Jallow on 1/26/16.
//  Copyright © 2016 Alieu Jallow. All rights reserved.
//

#include <iostream>
using namespace std;

int Fibonacci (int n);
long factorial (int val);

int main (int argc, const char * argv[]) {
    // insert code here...
    //cout << "First C++ program on Mac\n";
    //cout << "Welcome to C++ development using Mac";
    
    cout << "The Fibonacci of 20 is " << Fibonacci(10) <<"\n";
    
    cout << "The factorial of 20 is: "<< factorial(20) << "\n";
    
    return 0;
}

int Fibonacci (int n)
{
    
    if (n == 1)
        return 1;
    if (n==2)
        return 1;
    
    return Fibonacci(n-1)+ Fibonacci(n-2);
    
    
}

long factorial(int val)
{
    long result = 1;
    
    while (val > 1) {
        result = result * val;
        val--;
    }
    
    return result;
}
    