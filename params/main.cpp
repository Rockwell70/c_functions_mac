#include <iostream>
#include "importer.h"
#include "duplicator.h"
using namespace std;

string ConnectNames(string first, string second)
{
    return first + " " + second;
}

int main() {

    cout << ConnectNames("William", "B Williams") << std::endl;
    cout << Multiplier() << endl;
    cout << Duplicator() << endl;
    return 0;


}
