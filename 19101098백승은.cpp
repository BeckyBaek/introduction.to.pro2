#include <iostream>
using namespace std;

class Temperature {
public:
    void setTempKelvin(double temp);
    void setTempFahrenheit(double temp);
    void setTempCelsius(double temp);
    double getTempKelvin();
    double getTempFahrenheit(); // Corrected the function name
    double getTempCelsius();

private:
    double kelvin;
};

void Temperature::setTempKelvin(double temp) {
    kelvin = temp;
}

void Temperature::setTempFahrenheit(double temp) {
    kelvin = (5.0 * (temp - 32) / 9) + 273.15;
}

void Temperature::setTempCelsius(double temp) {
    kelvin = temp + 273.15;
}

double Temperature::getTempKelvin() {
    return kelvin;
}

double Temperature::getTempCelsius() {
    return kelvin - 273.15;
}

double Temperature::getTempFahrenheit() {
    return (getTempCelsius() * 9.0 / 5) + 32; // Corrected the function name
}

int main() {
    Temperature temp;

    temp.setTempFahrenheit(32);
    cout << "In Celsius: " << temp.getTempCelsius() << endl;
    cout << "In Fahrenheit: " << temp.getTempFahrenheit() << endl;
    cout << "In Kelvin: " << temp.getTempKelvin() << endl;
    cout << endl;

    temp.setTempCelsius(100);
    cout << "In Celsius: " << temp.getTempCelsius() << endl;
    cout << "In Fahrenheit: " << temp.getTempFahrenheit() << endl;
    cout << "In Kelvin: " << temp.getTempKelvin() << endl;
    cout << endl;

    temp.setTempKelvin(0);
    cout << "In Celsius: " << temp.getTempCelsius() << endl;
    cout << "In Fahrenheit: " << temp.getTempFahrenheit() << endl;
    cout << "In Kelvin: " << temp.getTempKelvin() << endl;
    cout << endl;

    cout << "Enter a character to exit" << endl;
    char wait;
    cin >> wait;
    return 0;
}