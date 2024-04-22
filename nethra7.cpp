#include <iostream>
#include <cmath>
using namespace std;

class Conversions
{
    public:
    float lengthInMeters, weightInKilograms, timeInSeconds, temperatureInKelvin, currentInAmperes;

    void one()
    {
        cout << "Enter length in meters: ";
        cin >> lengthInMeters;
        cout << "Length in centimeters: " << lengthInMeters * 100.0f <<endl;
    }

    void two()
    {
        cout << "Enter weight in kilograms: ";
        cin >> weightInKilograms;
        cout << "Weight in grams: " << weightInKilograms * 1000.0f <<endl;
    }

    void three()
    {

        cout << "Enter time in seconds: ";
        cin >> timeInSeconds;
        cout << "Time in centiseconds: " << timeInSeconds * 100.0f << endl;
    }

    void four()
    {
        cout << "Enter temperature in kelvin: ";
        cin >> temperatureInKelvin;
        cout << "Temperature in celsius: " << (temperatureInKelvin - 273.15f) << endl;
    }

    void five()
    {
        cout << "Enter current in amperes: ";
        cin >> currentInAmperes;
        cout << "Current in amperes: " << currentInAmperes * 10.0f << endl;
    }

    void six()
    {
        cout << "Enter radians: ";
        float radians;
        cin >> radians;
        cout << "Degrees: " << radians * 180.0f / M_PI <<endl;

    }

};
int main() {

    Conversions C;
    int choice;
    while (1)
    {
    cout << "MENU" << endl;
    cout << "PRESS 1.TO CONVERT m TO cm. PRESS 2.TO CONVERT kg TO g." << endl;
    cout << "PRESS 3.TO CONVERT s TO cs. PRESS 4.TO CONVERT Kelvin TO celsius" << endl;
    cout << "PRESS 5.TO CONVERT amperes . PRESS 6.TO CONVERT radians TO degree" << endl;
    cout << "PRESS 7.TO EXIT" << endl;
    cout << "\nEnter Your Choice: ";
    cin >> choice;


    if (choice==1)
    {
        C.one();
    }

    else if(choice==2)
    {
        C.two();
    }
    else if(choice==3)
    {
        C.three();
    }
    else if(choice==4)
    {
        C.four();
    }
    else if(choice==5)
    {
        C.five();
    }
    else if(choice==6)
    {
        C.six();
    }
    else if(choice==7)
    {
        exit(0);
    }


    }
    return 0;
}