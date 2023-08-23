#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int a = 8, b = 4, sum = a + b;
	printf("sum of %d + %d = %d\n", a, b, sum);

	/* print program pid */
	pid_t pid;
	pid = getpid();
	printf("program pid is - %u\n", pid);

	/* print program pid */
	pid_t ppid;
	ppid = getppid();
	printf("program ppid is - %u\n", ppid);

	return (0);
}
