#include <iostream>
using namespace std;

int main() {
    const int months = 12;
    int daysArray[months] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int counter = 0; counter < months; counter++) //loops 12 times.
    {
        cout << "month " << counter + 1 << " has " << daysArray[counter] << " days." << endl;
        //need to add 1 each time to counter to get actual number of month.
        //then we use the index starting from 0 to get corresponding elements.
        //counter < months means the loop will only run 12 times.
    }
    return 0;
}
