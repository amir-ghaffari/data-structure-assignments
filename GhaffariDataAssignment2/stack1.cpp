#include<iostream>
#include<string.h>

int main () {
	char authorized = 0x66;
	char user_pass [16];
	
	strcpy(user_pass,"passwordwilbeok                1");//16 charecters of spaces

	std::cout<<user_pass;
	printf("\n%c",authorized);

	if (authorized=='1') {
		printf("\npassword is correct\n");
	}
	else {
		printf("\nincorrect password\n");
	}
	
}
