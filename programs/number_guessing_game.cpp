#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// This is bit different than normal number guessing game
int main() {
	unsigned int guess, rand_num;
	string start;
	cout << "The number is between 0 to 10" << endl;
	do {
		cout << "Start[y/n]: ";
		cin >> start;
		if (start == "y") {
			rand_num = rand() % 10 + 1;
			cout << "\nGuess a number: ";
			cin >> guess;
			if (guess == rand_num) {
				cout << "You won!\nYou guessed the number correctly!" << endl;
				break;
			} else {
				cout << "Try again!\n" << endl;
				continue;
			}	
		} else if (start == "n") {
			break;
		} else {
			cout << "Invalid Input\n" << endl;
			continue;
		}
	} while (true);
	
	return 0;
}
