//
//  main.cpp
//  intro(2) parameter
//
//  Created by 백승은 on 9/26/23.
//

#include <iostream>
using namespace std;
double converToMPH(int minutes, int seconds){
    double totalHours = static_cast<double>(minutes) / 60.0 + static_cast<double>(seconds)/3600.0;
    double mph = 1.0/ totalHours;
    return mph;
}
double converToMPH(double kph){
    double mph = kph / 1.61;
    return mph;
}
int main(){
    cout << " 5:30 pace is " << converToMPH(5,30)<< "MPH" << endl;
    cout << " 7:30 pace is " << converToMPH (7,30)<< "MPH"<< endl;
    cout << " 8:00 pace is " << converToMPH(8,00)<< "MPH" << endl;
    cout << " 10kph is " << converToMPH(10)<< "MPH"<< endl;
    cout << " 20kph is " << converToMPH(20)<< "MPH"<< endl;
    cout << " 120kph is " << converToMPH(120)<< "MPH"<< endl;

    return 0;
}
