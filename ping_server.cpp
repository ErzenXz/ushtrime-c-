#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string line = "------------------------------------------------------------";


int main(){

    string ip;
    string command = "ping ";

    cout << line << endl << endl;

    cout << "Welcome to Ping Website\n\n";

    cout << "Please enter the domain name or IP address.\n\n" << line << endl;

    cin >> ip;
    ip = ip + " >> ping_server_output.log";

    string full = command.append(ip);

    int n = full.length();
 
    // declaring character array
    char char_array[n + 1];
 
    // copying the contents of the
    // string to char array
    strcpy(char_array, full.c_str());
    cout << "\n\nPinging server...\n\n";
    system(char_array);
    cout << line << "\n\nThe output has been writter in ping_server_output.txt\n\n";

    // Kjo nuk e lejon Terminal te mbyllet automatikisht

    cout << "\n\n\nThe program has finished running.\nPress 1 to re-run this program, else press any other number!\n";

    int closeProgramAuto = 0;
    cin >> closeProgramAuto;

    if(closeProgramAuto == 1){
        system("CLS");
        main();
    }
    return 0;
}