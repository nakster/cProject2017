#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct login
{
	char userName[20];
	char password[20];

}login_t;

void main()
{
	
		char str[20], c = ' ';
		char b = '/';
		char name[20];
		int i=0;

		printf("Enter User name: ");
		scanf("%s",name);
		printf("Please Enter the password: ");

		while (i <= 19) {
			str[i] = getch();//getting the input from the user
			c = str[i];// the char c is given the value of the string input from the user
			if (c == 13) {
				break;//set a rule that doesnt happen 
			}		
			else {
				printf("*");//will always print the * value cos the c == 13 willl never be true
			}
			i++;//i++ increments
		}
		printf("\nuser created\n");
		
		//displaying the password
		/*str[i] = '\0';
		i = 0;
		printf("\n");
		printf("\n Your password is : %s", str);*/

	
		getch();


}