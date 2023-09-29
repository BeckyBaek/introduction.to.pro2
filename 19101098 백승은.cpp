//
//  19101098 백승은.cpp
//  intro (2) _19101098
//
//  Created by 백승은 on 9/12/23.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n;
    double lastGuess, currentGuess;
    cout << "Enter a number: " << endl;
    cin >> n;
    
    lastGuess = n / 2;
    bool done = false;
    
    do
    {
        double r = n / lastGuess;
        currentGuess = (lastGuess + r) / 2;
        
        // Calculate percent difference
        double diff = lastGuess - currentGuess;
        if (diff < 0)
            diff = diff * -1;
        double percentDiff = diff / lastGuess;
        lastGuess = currentGuess;
        cout << " loop " << endl;
        if (percentDiff < 0.01)
            done = true;
    }   while (!done);
    
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
}
