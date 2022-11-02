//Include statments 
#include "stdio.h"
#include "stdlib.h"
#include <string.h>
/*
* Course: BIT1400
* Description: This program is fully functional and has no issues. When entering username and password enter barzin for username and barzin1 for password
* The program will check if value is negative or not, is prime, and will let you learn about me, this program will loop if the username and password are incorrect 
* Name: Barzin Farahani
* Date: 10/18/2022
*/
int main() {
	//Variables
	char password[100] = "barzin1";
	char username[100] = "barzin";
	char gestUsername[100];
	char geustPassword[100];
	int userSwitch = 0;
	int x = 0;
	int userIn = 0;
	//Get user inputs 
	printf("\n## Switch Name ##\nSelect one of the following options :\n1. displays my name\n2. displays my year of birth\n3. displays my favorite ice cream flavor");
	printf("\nWhat is your selection: ");
	scanf_s("%i", &userSwitch);
	//Switch statment 
	switch (userSwitch) {
		case 1:
			printf("My name is Barzin Farahni\n");
			break;
		case 2:
			printf("I was born in 2000\n");
			break;
		case 3:
			printf("My favourite ice cream flavour is choclate chip\n");
			break;
		//Default stament for any other inputs
		default:
			printf("Error inccorect value\n");
	}
	printf("Enter a integer: ");
	scanf_s("%i", &userIn);
	//while statment to look through username and password
	while(x==0){
		//User inputs
		printf("\nPlease enter the UserName: ");
		scanf_s("%s", gestUsername, 99);
		printf("Please enter the Password: ");
		scanf_s("%s", geustPassword, 99);
		//Checks password and username to ones inputed
		int checkUsername = strcmp(gestUsername, username);
		int checkPassword = strcmp(password,geustPassword);
		//Checks if they both are 0
		if (checkUsername == 0 && checkPassword == 0) {
			//If correct do not loop 
			x = 1;
			printf("User Name and passwords match\n");
			if (userIn < 0) {
				//Checks if number is Negative
				printf("That was a negative number\n");
				//Checking Prime Number
				if (userIn % 2 == 0) {
					printf("It is devisble by 2.");
				}
				else if (userIn % 3 == 0) {
					printf("It is devisble by 3.");

				}
				else if (userIn % 5 == 0) {
					printf("It is devisble by 5.");
				}
				else if (userIn % 7 == 0) {
					printf("It is devisble by 7.");
				}
				else {
					printf("Cannot be devided by a prime number under 10");
				}
			}
			//Checks if number is positve
			else if (userIn > 0) {
				printf("Number is positive\n");
				//Checking Prime Number
				if (userIn % 2 == 0) {
					printf("It is devisble by 2.");
				}
				else if (userIn % 3 == 0) {
					printf("It is devisble by 3.");

				}
				else if (userIn % 5 == 0) {
					printf("It is devisble by 5.");
				}
				else if (userIn % 7 == 0) {
					printf("It is devisble by 7.");
				}
				else {
					printf("Cannot be devided by a prime number under 10");
				}
			}
		}
		//Else statment for loop
		else {
			x = 0;
			printf("Inccorect combination");
		}
	}
}//end of main
