/**************************************************
 * Author : Karnveer Singh ************************
**************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char buffer[128] = {0};
	FILE *fp = NULL;

	// Using curl to get public IP from ipify API
	fp = popen("curl -s https://api.ipify.org", "r");
	if (fp == NULL) {
		perror("Failed to run curl command");
		return 1;
	}

	if (fgets(buffer, sizeof(buffer), fp) != NULL) {
		printf("Your Public IP Address is: %s\n", buffer);
	}

	pclose(fp);
	return 0;
}
