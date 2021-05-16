#include <iostream>
#include <string>
using namespace std;

int main() {
    string input1, input2, prompt = "Input an integer: ";
    cout << prompt;
    cin >> input1;
    cout << prompt;
    cin >> input2;
    cout << "The sum of the numbers " << input1 << " and " 
    << input2 << " is: " << stoi(input1) + stoi(input2)
    << endl;
    return 0;
}