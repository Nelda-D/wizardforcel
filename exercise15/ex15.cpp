#include <stdio.h> 
int main(int argc, char *argv[]){
	int ages[] = {1, 2, 3, 4};
	char *name[] = {"Alden", "Ben", "Candy", "David"};
	
	int count = sizeof(ages) / sizeof(int);
	for(int i=0; i < count; i++){
		printf("%s is %d years old. \n", name[i], ages[i]);
//		printf("%s size is %d \n", name[i], sizeof(name[i]));
//		printf("%d is %d years old. \n", &name[i], ages[i]);
//		printf("%s %d char is %c, adress is %d \n", name[i], i, *((&name[i])) + i, ((&name[i]) + i));
		char **address = &name[i];
//		int address = 1;
		printf("%s address is %d, %d \n", name[i], &name[i], address);
		printf("%s \n", *address);
	}
	
}
