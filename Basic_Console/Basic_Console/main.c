#include <stdio.h>

#pragma warning(disable : 4996)

int main() {
	/*printf("Hello World!");

	int myNum;

	printf("\nType a number: ");

	scanf_s("%d", &myNum);

	printf("Your number is: %d", myNum);*/

	printf("Calculation: ");
	int a;
	char type;
	int b;

	scanf("%d %c %d", &a, &type, &b);

	if (type == '+') printf("%d", Add(a, b));
	if (type == '-') printf("%d", Takeaway(a, b));
	if (type == '*') printf("%d", Times(a, b));
	if (type == "/") printf("%d", Divide(a, b));

	return 0;
}

int Add(int a, int b) { return a + b; }

int Takeaway(int a, int b) { return a - b; }

int Divide(int a, int b) { return a / b; }

int Times(int a, int b) { return a * b; }