#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int grades[8][1], pass = 0, failed = 0, out_range = 0;
	int row = 0, col = 0, counter = 0;
	string remarks;
	char letter_grade;
	system("COLOR F0");
	cout << "\n\n";
	cout << "\tGrades Evaluator Using 2D Array";
	cout << "\n\n";
	for (row = 0; row < 8; row++) {
		for (col = 0; col < 1; col++) {
			cout << "\tEnter grade Number " << counter + 1 << ": ";
			cin >> grades[row][col];
			counter++;
		}
	}
	//Code to check for remarks
	cout << "\n" << setw(5) << "GRADES" << setw(7) << " EQUIV " << setw(10) << "REMARKS";
	cout << "\n\n";
	for (row = 0; row < 8; row++) {
		for (col = 0; col < 1; col++) {
			if (grades[row][col] >= 75) {
				remarks = "PASSED";
				pass++;
			}
			else if (grades[row][col] < 50) {
				remarks = "Error Out of Range ";
				out_range++;
			}
			else if (grades[row][col] < 75) {
				remarks = "FAILED";
				failed++;
			}


			//Letter Grade Equivalent
			if (grades[row][col] >= 90 && grades[row][col] <= 100) {
				letter_grade = 'A';
			}
			else if (grades[row][col] >= 80 && grades[row][col] <= 89) {
				letter_grade = 'B';
			}
			else if (grades[row][col] >= 70 && grades[row][col] <= 79) {
				letter_grade = 'C';
			}
			else if (grades[row][col] >= 60 && grades[row][col] <= 69) {
				letter_grade = 'D';
			}
			else if (grades[row][col] >= 50 && grades[row][col] <= 59) {
				letter_grade = 'F';
			}
			else if (grades[row][col] < 50) {
				letter_grade = 'X';
			}
			cout << "\n" << setw(5) << grades[row][col] << setw(6) << letter_grade << setw(12) << remarks;
		}
	}


	cout << "\n\n";
	cout << "\t====DISPLAY RESULT====";
	cout << "\n\n";
	cout << "\n\tNumber of Passed Grades " << pass << ".";
	cout << "\n\tNumber of Failed Grades " << failed << ".";
	cout << "\n\tNumber of Out of Range Grades " << out_range << ".";
	cout << "\n\n";
	system("PAUSE");
}