#include "main.h"

/**
 * 
*/

void generate_password(char *password) {
	srand(time(NULL));

	for (int i = 0; i < PASSWORD_LENGTH; i++) 
	{
		password[i] = (char)rand() % 128;
	}
}
int main() {
	char password[PASSWORD_LENGTH];

	generate_password(password);

	printf("The password is: %s\n", password);

	return 0;
}
