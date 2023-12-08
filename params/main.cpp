#include <iostream>
#include <cstdlib>
#include "importer.h"
using namespace std;

string ConnectNames(string first, string second)
{
    return first + " " + second;
}

int main() {


    /* initialize random seed: */
    srand((unsigned) time(NULL));

    // Get a random number between 0 and 9
    int random = rand() % 10;



    if  (random == 5) {
        cout << ConnectNames("William", "B Williams") << std::endl;
        Multiplier();
        return 0;
    } else {
        cout << random << " is not 5" << std::endl;
    }




}
