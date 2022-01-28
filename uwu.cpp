#include <iostream>
using namespace std;

int main(){

    for(int Core = 1; Core <=100; ++Core)
    {
        if(Core % 3 == 0) {
            cout << "Fizz" << endl;
        }
        else if(Core % 5 == 0) {
            cout << "Buzz" << endl;
        }
        else {
            cout << Core << endl;
        }
    }
}