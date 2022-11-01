#include <iostream>
#include <string>

using namespace std;

int main() {

    int year, age;

    cout << "\n\nWelcome to Age Calculator!\n\n";
    cout << "Enter your birth year.\n\n";
    cin >> year;

    // Zbret vitin e tanishem me vitin qe perdoruesi e ka vendosur
    age = 2022 - year;

    cout << "\nYou are " << age << " years old!\n\n";

    // Kjo nuk e lejon Terminal te mbyllet automatikisht
    string closeProgramAuto = 0;
    cin >> closeProgramAuto;

    return 0;
}