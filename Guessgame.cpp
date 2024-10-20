#include "main.h"

int main()
{
	cout << "This is a guess game, you can only enter a number from 1 to 100." << endl;
	cout << "Youu have 10 tries in total to guess the correct number." << endl;
	int guess;
		for (int i = 9; i >= 0; i--)
		{
			cout << "Choose a number from 1 to 100: " << endl;
			cin >> guess;

			if (guess == 66) {
				cout << " You guess the correct number!";
				break;
			}
			else if (guess > 66) {
				cout << "Your guess is too high" << endl;
			}
			else {
				cout << "Your guess is too low" << endl;
			}
		}
}

			if (i == 0)
			{
				cout << "You have no more chance to guess." << endl;
			}