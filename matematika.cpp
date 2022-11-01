#include <iostream>
#include <string>

using namespace std;

int x, result;

void addNumber();


int main() {

    addNumber();

    if(x == 5){
        result = x + 1;
    } else if (x < 5){
        result = 2 * x + 3;
    } else {
        result = x * x + 2 * x - 1;
    }

    cout << "\n\nThe result is " << result;

    // Kjo nuk e lejon Terminal te mbyllet automatikisht
    int closeProgramAuto = 0;
    cin >> closeProgramAuto;

    return 0;
}

void addNumber() {
    cout << "\n\nPlease enter a number!";
    cin >> x;
}