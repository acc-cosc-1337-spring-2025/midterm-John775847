#include "question1.h"

bool test_config()
{
    return true;
}

char gpa_to_letter_grade(double gpa){
    if (gpa >= 0 && gpa <= 0.99){
        return 'F';
    }else if (gpa >= 1 && gpa <= 1.99){
        return 'D';
    }else if (gpa >= 2 && gpa <=  2.99){
        return 'C';
    }else if (gpa >= 3 && gpa <= 3.49){
        return 'B';
    }else if (gpa >= 3.5 && gpa <= 4){
        return 'A';
    }else{
        return 'n';
    }
}
