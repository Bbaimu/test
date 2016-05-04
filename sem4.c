#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <errno.h>
#include <time.h>
#include <linux/sem.h>

int empty;
int apple;
int orange;
int mutex;

int main()
{
	struct sembuf P, V;
	union semun arg;
	
	empty = semget(IPC_PRIVATE, 1, IPC_CREAT|0666);
	apple = semget(IPC_PRIVATE, 1, IPC_CREAT|0666);
	orange = semget(IPC_PRIVATE, 1, IPC_CREAT|0666);
	mutex = semget(IPC_PRIVATE, 1, IPC_CREAT|0666);

	arg.val = 1;
	if (semctl(empty, 0, SETVAL, arg) == -1)
		perror("semctl setval error");
	arg.val = 0;
	if (semctl(apple, 0, SETVAL ,arg) == -1)
		perror("semctl setval error");
	arg.val = 0;
	if (semctl(orange, 0, SETVAL, arg) == -1)
		perror("semctl setval error");
	arg.val = 1;
	if (semctl(mutex, 0, SETVAL, arg) == -1)
		perror("semctl setval error");

	P.sem_num = 0;
	P.sem_op = -1;
	P.sem_flg = SEM_UNDO;
	V.sem_num = 0;
	V.sem_op = 1;
	V.sem_flg = SEM_UNDO;

	if (fork() == 0) {
		int i = 0;
		for (; i < 3; i++) {
			semop(empty, &P, 1);
			semop(mutex, &P, 1);
			printf("Father put an apple \n");
			semop(mutex, &V, 1);
			semop(apple, &V, 1);
		}
		sleep(2);
		printf("Father is over!\n");
		exit(0);
	} else {
		if (fork() == 0) {
			int i = 0;
			for (; i < 3; i++) {
				semop(empty, &P, 1);
				semop(mutex, &P, 1);
				printf("Mother put an orange  \n");
				semop(mutex, &V, 1);
				semop(orange, &V, 1);
			}
			sleep(2);
			printf("Mother is over!\n");
			exit(0);
		} else {
			if (fork() == 0) {
				int i = 0;
				for (; i < 3; i++) {
					semop(apple, &P, 1);
					semop(mutex, &P, 1);
					printf("Daughter eat an apple\n");
					semop(mutex, &V, 1);
					semop(empty, &V, 1);
				}
				sleep(2);
				printf("Daughter get all \n");
				exit(0);
			} else {
				if (fork() == 0) {
					int i = 0;
					for (; i < 3; i++) {
						semop(orange, &P, 1);
						semop(mutex, &P, 1);
						printf("Son eat an  orange\n");
						semop(mutex, &V, 1);
						semop(empty, &V, 1);
					}
					sleep(2);
					printf("Son get all \n");
					exit(0);
				}
			}
		}
	}
	wait(0);
	wait(0);
	wait(0);
	wait(0);
	
	printf("All processor end!\n");
	
	semctl(empty, IPC_RMID, 0);
	semctl(apple, IPC_RMID, 0);
	semctl(orange, IPC_RMID, 0);
	semctl(mutex, IPC_RMID, 0);
	exit(0);
}
