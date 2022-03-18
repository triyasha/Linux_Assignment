///home/triyasha/Documents/Assignment/Linux_Assignment_02

#include<stdio.h>
#include<unistd.h>

int main()
{
	execl("/home/triyasha/Documents/Assignment/Linux_Assignment_02/test1","./test1", "test file", "discriptor", 0);

	return 0;
}
