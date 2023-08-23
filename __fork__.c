#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pp;

	printf("before call..\n");

	fork();

	pp = fork();

	if (pp == 0)
	{
		printf("failed\n");
		return -1;
	}
	printf("success\n");

	printf("End..\n");

	return 0;
}
