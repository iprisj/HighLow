// came based on example in 3.3 of learncpp, https://www.learncpp.com/cpp-tutorial/a-strategy-for-debugging/

#include <iostream>
#include <cstdlib>
#include <conio.h>

void game_start(int* secret_number, int* guesses)
{
	int max;
	std::cout << "Max Number: ";
	std::cin >> max;
	int secret{ rand() % max + 1 };
	int guess_count = 0;
	int guess = 0;

	std::cout << "Guess the Number!\n";
	while (guess != secret) {
		std::cout << "Input: ";
		std::cin >> guess;
		guess_count++;
		if (guess == secret)
		{
			std::cout << "\nCorrect!!\n";
		}
		else if (guess > secret)
		{
			std::cout << "Too High!!\n";
		}
		else if (guess << secret)
		{
			std::cout << "Too Low!!\n";
		}
	}
	*secret_number = secret;
	*guesses = guess_count;
}

int main() {
	while (true)
	{
		int secret_number, guesses;
		game_start(&secret_number, &guesses);
		std::cout << "Number: " << secret_number;
		std::cout << "\nGuesses: " << guesses;
		std::cout << "\nNew game? (y/n) ";
		char new_game{};
		std::cin >> new_game;
		if (new_game == 'n')
		{
			break;
		}
	}
	std::cout << "Exiting...";
	return 0;
}