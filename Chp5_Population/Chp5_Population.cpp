// Chp5_Population.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	// Introductory Statement
	cout << "This program will predict the population size of organisms over a specified number of days." << endl;
	cout << "Please provide the starting population size, daily increase percentage,and the number of days. " << endl;

	// Variables for user input 
	int startingPopulation;
	double dailyIncrease;
	int days;

	// Input Validation for Starting Population
	do {
		cout << "Enter the starting number of organisms (minimum 2):";
		cin >> startingPopulation;
		if (startingPopulation < 2) {
			cout << "Invalid input. Starting population must be at least 2." << endl;
		}
	} while (startingPopulation < 2);

	// Input Validation for Daily Increase
	do {
		cout << "Enter the average daily population increase (as a percentage):";
		cin >> dailyIncrease;
		if (dailyIncrease < 0) {
			cout << "Invalid input. Daily increase percentage cannot be negative." << endl;
		}
	} while (dailyIncrease < 0);

	// Input Validation for Number of Days
	do {
		cout << "Enter the number of days the organisms will multiply (minimum 1):";
		cin >> days;
		if (days < 1) {
			cout << "Invalid input. Number of days must be at least 1." << endl;
		}
	} while (days < 1);

	// Convert daily increase percentage to a decimal
	dailyIncrease = dailyIncrease / 100.0;

	// Display header for population results
	cout << "\nDay\tPopulation Size" << endl;
	cout << "------------------------" << endl;

	// Loop to calculate and display population for each day
	double population = startingPopulation;  // Use a double here for precision if population grows large
	for (int day = 1; day <= days; ++day) {
		cout << day << "\t" << population << endl;
		population += population * dailyIncrease;

	}

	return 0;

}

