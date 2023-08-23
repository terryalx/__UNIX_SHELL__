#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int a = 9;
	int b = 3;
	int sum = a + b;
	printf("Added %d + %d: =  %d\n", a, b, sum);

	/* get program pid */
	pid_t pid;
	pid = getpid();
	printf("pid of this instance is: %u\n", pid);

	/* get program ppid */
	pid_t ppid;
	ppid = getppid();
	printf("ppid of this instance is: %u\n", ppid);

	return (0);
}
