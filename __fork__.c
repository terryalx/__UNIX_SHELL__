#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pp;

	printf("before call..\n");

	fork();

	pp = fork();

	if (pp == -1)
	{
		printf("failed");
		return -1;
	}
	printf("success");

	return 0;
}
