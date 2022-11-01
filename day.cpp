#include <iostream>
#include <string>

using namespace std;

int main() {

    int day;
    string mesazhi = "Today is ";

    cout << "Welcome to the day of the week!\n\n";

    cout << "Enter a number 1-7\n";

    cin >> day;

    if (day <= 0 || day > 7){
        cout << "You have entered a number that is not valid.";
    } else {
    switch (day) {
    case 1:
        cout << mesazhi << "Monday";
        break;
    case 2:
        cout << mesazhi << "Tuesday";
        break;
    case 3:
        cout << mesazhi << "Wednesday";
        break;
    case 4:
        cout << mesazhi << "Thursday";
        break;
    case 5:
        cout << mesazhi << "Friday";
        break;
    case 6:
        cout << mesazhi << "Saturday";
        break;
    case 7:
        cout << mesazhi << "Sunday";
        break;
    }
    }


    struct user { // Sikur object ne JS
        int age;
        string name;
        string surname;
        string country;
    };

    user user1;

    user1.name = "Erzen";
    
    
    // Kjo nuk e lejon Terminal te mbyllet automatikisht
    int closeProgramAuto = 0;
    cin >> closeProgramAuto;

    return 0;
}