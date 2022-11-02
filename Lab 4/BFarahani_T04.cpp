//Include statments 
#include "time.h"
#include "stdlib.h"
#include "stdio.h"
//Function declerations
int printTime(int time);
int addTime(int time, int newHours, int newMinutes, int newSeconds);
int printTime24Hr(int time);
//Main func
int main() {
	//randomizes time from 0 - 86400
	srand(time(NULL));
	int	clockSec  = rand() % (86400 + 1 - 0) + 0;
	//Member variables
	int userTimeMins;
	int userTimeHrs;
	int userTimeSeconds;
	printTime(clockSec);
	printTime24Hr(clockSec);
	//User inputs 
	printf("\nPlease enter a duration thats passed\nHours: ");
	scanf_s("%i", &userTimeHrs);
	printf("Minutes: ");
	scanf_s("%i", &userTimeMins);
	printf("Seconds: ");
	scanf_s("%i", &userTimeSeconds);
	addTime(clockSec,userTimeHrs, userTimeMins, userTimeSeconds);
	return 0;
}//end of main
//PrintTime Function
int printTime(int time) {
	//Math for mins seconds houts
	int leftMins = time / 60;
	int seconds = time % 60;
	int hours = leftMins / 60;
	int mins = leftMins % 60;
	//prints time in normal hrs mins seconds
	printf("Time: %i : %i : %i",hours,mins,seconds);
	return 0;
}
//24hr time function
int printTime24Hr(int time) {
	//Math for mins seconds hours
	int leftMins = time / 60;
	int seconds = time % 60;
	int hours = leftMins / 60;
	int mins = leftMins % 60;
	//checks if hr is 13
	if (hours > 13) {
		hours = 12;
	}
	//Checks if is 0
	else if (hours == 0) {
		hours = 0;
	}
	//if anything add 12 making it a 24 clock
	else {
		hours += 12;
	}
	//Prints 24 clock
	printf("\nTime 24hr: %i : %i : %i", hours, mins, seconds);
	return 0;
}
//Add time function
int addTime(int time, int newHours,int newMinutes, int newSeconds) {
	//Clock math
	int leftMins = time / 60;
	int seconds = time % 60;
	int hours = leftMins / 60;
	int mins = leftMins % 60;
	//Adds time to base clock
	printf("Time passed: %i : %i : %i",hours+=newHours , mins+=newMinutes, seconds+=newSeconds);
	return 0;
}