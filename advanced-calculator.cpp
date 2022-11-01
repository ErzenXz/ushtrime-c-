#include <iostream>
#include <string>
using namespace std;

int addN(int x, int y);
int subtractN(int x, int y);
int multiplyN(int x, int y);
int divideN(int x, int y);
int cPerimeter(int x);
int cCircumference(int x);
void selectOperator();
void operatorSelection();

long long int x , y;
int result, method, metoda;

const float PI = 3.141592653;

string line = "[------------------------------]";

int main() {

    cout << line << endl << endl << endl << endl;

    cout << "Welcome to Calculator!\n\n\n\n";
    cout << line << endl << endl << endl << endl;
    cout << "What do you want to do?\n\n";
    cout << "Add numbers (1)\n";
    cout << "Subtract numbers (2)\n";
    cout << "Multiply numbers (3)\n";
    cout << "Divide numbers (4)\n";
    cout << "Circle Perimeter (5)\n";
    cout << "Circle Circumference (6)\n\n\n";

    cout << "\n\nPlease enter a valid number 1-6\n\n";

    selectOperator();

    cout << "\n\n\nPlease enter your first number!\n";
    cin >> x;
    
    if(metoda == 5 || metoda == 6){
        //
    } else {
        cout << "\n\n\nPlease enter your second number!\n";
        cin >> y;
    }

    switch (metoda) {
    case 1:
        result = addN(x , y);
        cout << line << "\n\n" << "\n\n";
        cout << "The result is " << result << endl << endl;
        cout << endl << line << "\n\n" << "\n\n";
        break;
    
    case 2:
        result = subtractN(x , y);
        cout << line << "\n\n" << "\n\n";
        cout << "The result is " << result << endl << endl;
        cout << endl << line << "\n\n" << "\n\n";
        break;
    case 3:
        result = multiplyN(x , y);
        cout << line << "\n\n" << "\n\n";
        cout << "The result is " << result << endl << endl;
        cout << endl << line << "\n\n" << "\n\n";
        break;
    case 4:
        result = divideN(x , y);
        cout << line << "\n\n" << "\n\n";
        cout << "The result is " << result << endl << endl;
        cout << endl << line << "\n\n" << "\n\n";
        break;
    case 5:
        result = cPerimeter(x);
        cout << line << "\n\n" << "\n\n";
        cout << "The result is " << result << "cm" << endl << endl;
        cout << endl << line << "\n\n" << "\n\n";
        break;
    case 6:
        result = cCircumference(x);
        cout << line << "\n\n" << "\n\n";
        cout << "The result is " << result << "cm2" << endl << endl;
        cout << endl << line << "\n\n" << "\n\n";
        break;
    default:
        cout << "An error has happened!";
        break;
    }

    // Kjo nuk e lejon Terminal te mbyllet automatikisht
    int closeProgramAuto = 0;
    cin >> closeProgramAuto;

    return 0;
}

int addN(int x, int y){
    return x + y;
}

int subtractN(int x, int y){
    return x - y;
}

int multiplyN(int x, int y){
    return x * y;
}

int divideN(int x, int y){
    return x / y;
}

int cPerimeter(int x){
    return 2 * PI * x;
}

int cCircumference(int x){
    return x * x * PI;
}

void operatorSelection(int number){

    if (number < 1 || number > 6){
        cout << "Please enter a valid number 1-6\n\n";
        selectOperator();
    } else {
        // Ok!
    }
}

void selectOperator(){
    cin >> method;
    metoda = method;
    operatorSelection(metoda);
}