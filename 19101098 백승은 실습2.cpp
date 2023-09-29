//
//  main.cpp
//  f
//
//  Created by 백승은 on 9/19/23.
//
#include <iostream>
using namespace std;

double calculateHatSize(double weight, double height)
{
    return (weight / height )*2.9;
}

double calculateJacketSize(double height, double weight, int age)
{
    double hwSize = (height * weight)/288.0;
    double ageAdjustment = 0.0;
    
    if (age > 30) {
        int ageDifference = (age-30);
        int ageAdjustment = (ageDifference/10)*0.125;
    }
    return hwSize + ageAdjustment;
}

double calculateWaistSize(double weight , int age)
{
    double hwSize = weight / 5.7;
    double ageAdjustment = 0.0;
    
    if (age > 28){
        int ageDifference = (age-28);
        int ageAdjustment = (ageDifference/2.0)*0.1;
    }
    return hwSize + ageAdjustment;
}

int main(){
char repeat;
    
    do {
        double height, weight;
        int age;
        
        cout << "Give me your height in inches, weight in pounds, and age in years and I will give you your hat size, jacket size(inches at chest) and your waist size in inches." << endl;
        cin >> height >> weight >> age ;
        
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout << "hat size = " << calculateHatSize(weight, height)<<endl;
        cout << "jacket size = " << calculateJacketSize(height, weight, age) <<endl;
        cout << "waist size = " << calculateWaistSize(weight, age)<<endl;
        
        cout <<"enter Y or y to repeat, any other character ends." <<endl;
        cin >> repeat;
    } while (repeat == 'Y' || repeat == 'y');
    
    return 0;
}
