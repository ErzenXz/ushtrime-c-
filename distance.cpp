#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>

using namespace std;

double distanceBetwenTwoPoints(double x, double y, double z, double t);

long double x1, x2, y, y2, d;
string line = "------------------------------------------------------------";

int main(){

    cout << line << endl << endl;

    cout << "Welcome to Distance Calculator\n\n";

    cout << "Please enter the values for X1, Y1, X2 and Y2 in order. (cm)\n\n" << line << endl;

    cin >> x1 >> y >> x2 >> y2;

    d = distanceBetwenTwoPoints(x1, x2, y, y2);

    cout << line << endl << endl;

    cout << line << endl << endl << fixed << setprecision(3) << "The distance betwen point A(" << x1 << "," << x2 << ") and B(" << y << "," << y2 << ") is \n\n" << d << "cm" << endl << endl << line;

    // Kjo nuk e lejon Terminal te mbyllet automatikisht

    cout << "\n\n\nThe program has finished running.\nPress 1 to re-run this program, else press any other number!\n";

    int closeProgramAuto = 0;
    cin >> closeProgramAuto;

    if(closeProgramAuto == 1){
        system("color b");
        system("CLS");
        main();
    }
    cout << "\n\nEnding program.";
    return 0;
}

double distanceBetwenTwoPoints(double x, double y, double z, double t){
    return sqrt(pow(y - x, 2) + pow(t- z, 2) * 1.0);
}