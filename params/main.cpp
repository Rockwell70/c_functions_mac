#include <iostream>

using namespace std;

string ConnectNames(string first, string second)
{
    return first + " " + second;
}

int main() {
    cout << ConnectNames("William", "B") << std::endl;
    return 0;
}
