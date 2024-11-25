#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

//Iteration way

void CreateArrayWithRandomElements(int* t, int numberOfElements, int start, int end);
void PrintArray(int* t, const int numberOfElements);
int CountElements(int* t, int numberOfElements);
int SumElements(int* t, int numberOfElements);
void TurnToZero(int* t, int numberOfElements);

int main()
{
	srand((unsigned)time(NULL));

	const int n = 20;
	int t[n];

	int Low = -14;
	int High = 7;

	CreateArrayWithRandomElements(t, n, Low, High);
	cout << "Array with Random elements:" << endl;
	PrintArray(t, n);
	cout << "Number of right elements: " << setw(1) << CountElements(t, n) << endl;
	cout << "Sum of right elements: " << setw(1) << SumElements(t, n) << endl;
	TurnToZero(t, n);
	PrintArray(t, n);
}

void CreateArrayWithRandomElements(int* t, int numberOfElements, int start, int end) {

	for (int i = 0; i < numberOfElements; i++) {
		t[i] = start + rand() % (end - start + 1);
	}
}
void PrintArray(int* t, const int numberOfElements)
{
	for (int i = 0; i < numberOfElements; i++) {
		cout << "t[" << setw(1) << i << "] = " << setw(1) << t[i] << "; ";
	}
	cout << endl;
}

int CountElements(int* t, int numberOfElements) {
	int count = 0;
	for (int i = 0; i < numberOfElements; i++) {
		if (t[i] > 0 && i % 4 != 0) {
			count++;
		}
	}
	return count;
}

int SumElements(int* t, int numberOfElements) {
	int sum = 0;
	for (int i = 0; i < numberOfElements; i++) {
		if (t[i] > 0 && i % 4 != 0) {
			sum += t[i];
		}
	}
	return sum;
}

void TurnToZero(int* t, int numberOfElements) {
	for (int i = 0; i < numberOfElements; i++) {
		if (t[i] > 0 && i % 4 != 0) {
			t[i] = 0;
		}
	}
}