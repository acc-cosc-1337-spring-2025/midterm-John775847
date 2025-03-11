#include "question3.h"
#include <string>
#include <iostream>
#include <bits/stdc++.h>

using std::string;
using std::round;

bool test_config()
{
    return true;
}

double get_dna_p_distance(const string &parameter1, const string &parameter2){
    // if (parameter1.length() = parameter2.length() && parameter1.length() != 0){}
    double numerator = 0;
    for(int letter = parameter1.length() - 1; letter >= 0; letter--){
        // std::cout << letter << "meow " << parameter1[letter] << parameter2[letter] << "\n";
        if (parameter1[letter] != parameter2[letter]){
            // std::cout << "bam\n";
            numerator++;
        }
    }
    return std::ceil((numerator/parameter1.length()) * 10000.0) / 10000.0;; //Rounding in C++ is weird.
}
