#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	FILE * read, * write;
	read = fopen("read.txt", "r");  // fopen_s(&read, "read.txt", "r");
	if(!read)
	{
		cout<<"cannot open the read file.\n";
		exit(0);
	}
	write = fopen("write.txt", "w");  // fopen_s(&write, "write.txt", "w");
	if(!write)
	{
		cout<<"cannot open the write file.\n";
		exit(0);
	}
	while(!feof(read))
		fputc(fgetc(read),write);
	fclose(read);
	fclose(write);
	
	return 0;
}