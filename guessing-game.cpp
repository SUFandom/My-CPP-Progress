#include <iostream>

using namespace std;


int main() {
    int hiddenNum = 9;
    int guess;
    int timesguess = 0;
    int limit = 3;

    bool outGuess = false;

    while(hiddenNum != guess && !outGuess) {
        if(timesguess < limit) { 
        cout << "Enter Number!: ";
        cin >> guess;
        timesguess++;
        } else {
            outGuess = true;
        }

    }
if (outGuess) {
    cout << "Lose the game!" << endl;
} else {
cout << "Correct! the answer is " << guess << "!" << endl;
}
return 0;
}
