#include <iostream>
#include "importer.h"
using namespace std;

string ConnectNames(string first, string second)
{
    return first + " " + second;
}

int main() {

    cout << ConnectNames("William", "B Williams") << std::endl;
    Multiplier();
    return 0;


}
