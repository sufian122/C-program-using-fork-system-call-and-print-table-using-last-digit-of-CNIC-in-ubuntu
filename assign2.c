#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
	int pid, status;
	pid = fork();
	if (pid==0){
		int num =3;
		for (int i=1; i<=10; i++){
			printf("%d * %d = %d\n", num,i,num*i);
		}
	}
	else {
		wait(&status);
		printf("Parent Process Name is:\n");
		printf("Muhammad Sufian \n");
		printf("CNIC is:\n");
		printf("36402-6747649-3\n");
	}
	return 0;
