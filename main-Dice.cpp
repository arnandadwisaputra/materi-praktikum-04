#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));
	int diceRoll = rand() % 6 + 1;
	int guess;
	cout << "guest a number between 1 and 6:";
	cin >> guess;
	if (guess == diceRoll) {
		cout << "correct!" << endl;
	}
	else {
		cout << "Sorry, The correct number was " << diceRoll << "." << endl;
	}

	return 0;

}
