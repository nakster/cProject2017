#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct log
{
	char userName[20];
	char password[20];

}login_t;

void signUp(login_t* signIn);
int search(login_t* signIn, char search[]);

void main()
{

		login_t* login; /// pointer to the book array


		/// Declare the array of books dynamically
		login = (login_t*)malloc(sizeof(login_t));

		
		signUp(login);

		getch();


}

void signUp(login_t* signIn) {


	FILE* file;
	char str[20], c = ' ';
	char name[20];
	int i = 0;

	printf("Enter User name: ");
	scanf("%s", signIn->userName);

	//(search(signIn, signIn->userName) == 0);

	file = fopen(signIn->userName, "w+");

	
	fprintf(file, "%s\n", signIn->userName);

	if (file == NULL)
	{
		printf("Can not open the file to write");
	}

	else
	{
		
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
		str[i] = '\0';
		fprintf(file, "%s\n", str);

		fclose(file);

	}
}

void LogIn(login_t* signIn) {

	FILE* file;
	int count;
	int result;

	printf("Enter User name: ");
	scanf("%s", signIn->userName);

	file = fopen(signIn->userName, "r");

	if (file == NULL)
	{
		printf("Can not open the file to read");
	}

	else
	{
		while (!feof(file))
		{
			//result = fscanf(myfile, "%s %d", name, &age);

			if (result > 0)
			{
				//printf("Entry %d is: %s %d\n", count, name, age);

				count++;
			}
		}

		fclose(file);
	}


}


int search(login_t* signIn, char search[]) {
	int i = 0;
	int found = 0;

	while (signIn != NULL)
	{
		i++;

		if (strcmp(search, signIn->userName) == 0)
			found = i;
		
	}

	return found;

}

