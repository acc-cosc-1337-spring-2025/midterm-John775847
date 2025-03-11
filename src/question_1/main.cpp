#include <iostream>
#include "question1.h"

using std::cout;
using std::cin;

int main()
{
    while(true){
        int choice;
        cout << "\n1. Get letter grade\n2. Exit\n";
        cin >> choice;
        switch(choice){
            case 1:
                double gpa;
                cout << "\nEnter a student's gpa\n";
                cin >> gpa;
                if(gpa >= 0 && gpa <= 4){
                    cout << "\n--- The letter grade is " << gpa_to_letter_grade(gpa) << " ---";
                }else{
                    cout << "\nWRONG NUMBER";
                }
                break;
            case 2:
                return 0;
            default:
                cout << "WRONG NUMBER";
        }
    }
    return 0;
}
