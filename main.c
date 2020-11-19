#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {

	char src[] = "The worst things to eat before you sleep";
	char dst[100];
	char str[30] = "happy C programming";

	strcpy(dst, src);

	printf("copied string : %s\n", dst);
	printf("문자열\"%s\"의 길이 : %i\n", str, strlen(str));
	
	return 0;
}

