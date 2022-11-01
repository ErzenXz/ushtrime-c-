#include <iostream>
#include <string>

using namespace std;

int main() {

    int x, y, result;

    cout << "Welcome to Calculator" << endl;

    string name, surname;

    cout << "What is your name?" << endl;

    cin >> name;    

    cout << "What is your surname?" << endl;

    cin >> surname;

    string nameF1 = " "; //name.append(surname);

    string nameF2 = name + " " + surname;

    cout << "---------------------------------------------------\n";

    cout << "Your name is " << name << " and your surname is " << surname << "\nYour full name is " << nameF1 << "(" << nameF2 << ")" << endl;
    cout << "Your name has " << name.length() << " characters!\n";

    cout << "---------------------------------------------------\n";

    cout << "What is your first number?" << endl;
    
    cin >> x;

    cout << "What is your second number?" << endl;

    cin >> y;

    result = x + y;

    cout << "[----------------------] \n\n The result is " << result << "\n\n[----------------------]";

    if(result > 1000 && result < 10000){
        cout << "Your result is bigger that 1000!";
    } else if (result > 9999 && result < 100000){
        cout << "Your result is bigger than 10000!!";
    } else if (result > 99999){
        cout << "Your result is really big!!";
    } else {
        cout << "Your result is small!";
    }

    // Kjo nuk e lejon Terminal te mbyllet automatikisht
    int closeProgramAuto = 0;
    cin >> closeProgramAuto;


    return 0;
}