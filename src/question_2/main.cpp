#include "question2.h"
#include <iostream>

using std::cout;
using std::cin;

int main(){
    while(true){
        int choice;
        cout << "\n1. Convert celsius to fahrenheit\n2. Exit\n";
        cin >> choice;
        switch(choice){
            case 1:
                double celsius;
                cout << "\nEnter a celsius\n";
                cin >> celsius;
                cout << "\n--- The fahrenheit is " << get_fahrenheit(celsius) << " ---";
                break;
            case 2:
                return 0;
            default:
                cout << "WRONG NUMBER";
        }
    }

    return 0;
}
