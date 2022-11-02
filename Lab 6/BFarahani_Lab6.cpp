//Include statments 
#include <stdio.h>
//Function declerations
int isPrime(unsigned int toTest);
int isPrimeWhile(unsigned int toTest);
void arraytest(int* arr, int size);
int findValue(int* arr, int size, int userIn);
void minVal(int* arr, int size);
void maxVal(int* arr, int size);
int findValueWhile(int* arr, int size, int userIn);
int main() {
	//Member Variables
	unsigned int test = 0;
	const int size = 10;
	int arr[size];
	int useIn, arrIn;
	//Calling the functions and user inputs
	printf("Please enter a number: ");
	scanf_s("%i", &test);
	printf("For loop -> %i",isPrime(test));
	printf("\nWhile loop -> %i\n", isPrimeWhile(test));
	//Taking in the array from user
	for (int i = 0; i < size; i++) {
		printf("Please enter a new element: ");
		scanf_s("%i", &useIn);
		arr[i] = useIn;
	}
	arraytest(arr,size);
	printf("\nPlease enter Element to find in the Array: ");
	scanf_s("%i", &arrIn);
	findValue(arr, size, arrIn);
	minVal(arr, size);
	maxVal(arr, size);
	findValueWhile(arr, size, arrIn);
	return 0;
}//EOM
//IsPrimeFunctionFor
int isPrime(unsigned int toTest) {
	for (int i = 2; i <= toTest / 2; i++) {
		if (toTest % i == 0) {
			return 0;
			break;
		}
		else {
			return 1;
			break;
		}
	}
}
//IsPrimeWhile
int isPrimeWhile(unsigned int toTest) {
	int i = 2;
	int count = 0;
	while (i <= toTest / 2){
		if (toTest % i == 0){
			count = 1;
			break;
		}i++;
	}
	if (count == 0)
		return 1;
	else
		return 0;
}
//Printing the array
void arraytest(int *arr, int size){
	for (int i = 0; i < size; i++) {
		printf("%i ", arr[i]);
	}
}
//Find value array for loop
int findValue(int* arr, int size, int userIn) {
	int x = 0;
	for (int i = 1; i < size; i++) {
		if (arr[i] == userIn)
			x = 1;
	}
	if (x == 1)
		printf("%i Was Found - For loop", userIn);
	else 
		printf("%i Was Not Found - For loop", userIn);
	return 0;
}
//Find value array while loop
int findValueWhile(int* arr, int size, int userIn) {
	int x = 0;
	int i = 0;
	while (i<size) {
		if (arr[i] == userIn){
			x = 1;
			break;
		}
		i++;
	}
	if (x == 1)
		printf("\n%i Was Found - While loop", userIn);
	else
		printf("\n%i Was Not Found - While loop", userIn);
	return 0;
}
//Max Value For loop
void maxVal(int* arr, int size) {
	int max = 0;
	for (int i = 1; i < size; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	printf("\nMax Value is %i", max);

}
//Min value For loop
void minVal(int *arr , int size) {
	int x = 0;
	for (int i = 1; i < size; i++) {
		if (arr[i] < arr[x])
			x = i;
	}
	printf("\nMinimum Value is %i", arr[x]);
}