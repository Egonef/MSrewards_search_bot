#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;

int main() {
    for (int i = 0; i < 30; ++i) { // create 5 processes

        srand(time(0) + i); // use current time as seed for random generator, add i to get different seeds

        string script = "./mozillaSBot.sh";
        std::string random_string;
        for (int i = 0; i < 10; ++i) { // generate a string of length 10
            int random_char = rand() % 62;
            if (random_char < 10){
                random_string += '0' + random_char;
            }
            else if (random_char < 36){
                random_string += 'A' + random_char - 10;
            }
            else{
                random_string += 'a' + random_char - 36;
            }
        }
        string finalString = script + " " + random_string;
        system(finalString.c_str());

        sleep(6);

    }

    return 0;
}