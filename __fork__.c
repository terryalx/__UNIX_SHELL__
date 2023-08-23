#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	pid_t pp;

	printf("Start..\n");
	printf("before call..\n");

	fork();

	pp = fork();

	if (pp == -1)
	{
		printf("failed\n");
		return -1;
	}
	printf("success\n");

	if (pp == 0)
	{
		sleep(7);
		printf("Child proccess..\n");
	}
	else
	{
		printf("Parent proccess..\n");
	}

	printf("End..\n");

	return 0;
}
