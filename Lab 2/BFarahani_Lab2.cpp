/* Name: Barzin Farahani
* Student Number: 101256924 
* Date: 2022-09-20
* Description: This program takes in a users farenhite then converts it to celcuis as long as the number is less than 200.
*/
//Include statement 
#include <iostream>
//Main
void main() {
	//Variables
	int far = 0;
	bool loopVar = true;
	//While loop
	while(loopVar){
		printf("Please enter the tempature in ferenhit: ");
		int numChars = scanf_s("%i", &far);
		//Checks if input is less than 200
		if (far >= 200) {
			printf("please enter a number below 200\n");
			loopVar = true;
		}
		//If less than 200 break loop
		else {
			loopVar = false;
		}
	};
	//Calculations for results
	float result = (far - 32.0f) * 5.0f / 9.0f;
	printf("The tempature in celcius is: %f", result);
}
