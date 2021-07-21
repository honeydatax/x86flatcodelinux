#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc,char *argv[]){
	char c[300];
	char cc[300];
	char *ccc;
	char *cccc;
	char ccccc[2];
	strcpy(ccccc,".");
	cccc=ccccc;
	int i;
	strcpy(cc,argv[1]);
	ccc=strstr(cc,cccc);
	ccc[0]=0;
	strcpy(c,"clang ");
	strcat(c,argv[1]);
	strcat(c," -emit-llvm -S");
	printf("%s \r\n",c);
	system(c);
	strcpy(c,"opt ");
	strcat(c,cc);
	strcat(c,".ll  -o ");
	strcat(c,cc);
	strcat(c,".bc -f");
	printf("%s \r\n",c);
	system(c);
	strcpy(c,"to test code \"lli ");
	strcat(c,cc);
	strcat(c,".bc\"");
	printf("%s \r\n",c);
	return 0;
}
