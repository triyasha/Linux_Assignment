#include<stdio.h>
#include<fcntl.h>

int main()
{
	int fd1, fd2;
	int len;

	char write_buff[] = "This is copy file";

	fd1 = open("f1.txt", O_CREAT | O_RDWR, 7777);
	len = write(fd1, write_buff, sizeof(write_buff));
	printf("length of data in file.txt: %d & fd1: %d\n",len,fd1);


	lseek(fd1, 0, SEEK_SET);

	char read_buff[len];
	read(fd1, read_buff, len);
	printf("Content of f1.txt is: %s\n",read_buff);
	close(fd1);

	fd2 = open("f2.txt", O_CREAT | O_RDWR, 7777);
	write(fd1, read_buff, sizeof(read_buff));
	printf("length of data in f1.txt: %d & fd2: %d\n",len,fd2);
	close(fd2);


	return 0;
}
