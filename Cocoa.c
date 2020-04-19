/*
 ============================================================================
 Name        : Cocoa.c
 Author      : Cocoa
 Version     :
 Copyright   : Cocoa.inc
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int add(int a, int b) {
	return a + b;
}
void swap(char *x, char *y) {
	char t;
	t = *x;
	*x = *y;
	*y = t;
}
int fun(char *s) {
	char *t = s;
	while (*t++)
		;
	return (t - s);
}
int f(int n) {
	static int a = 1;
	n += a++;
	return n;
}
int main() {
	/*
	printf("\n!!!Hello Cocoa!!!\n"); // prints !!!Hello Cocoa!!!

	int y = 9;
	for (; y > 0; y--) {
		if (y % 3 == 0)
			printf("%d", --y);
	}
	printf("\n");

	int i, j, m = 1;
	for (i = 1; i < 3; i++) {
		for (j = 3; j > 0; j--) {
			if (i * j > 3)
				break;
			m *= i * j;
		}
	}
	printf("m=%d\n", m);

	int k, (*f)(),a = 5, b = 10, *p;
	f = add;
	k = add(a, b);
	k = f(a, b);
	k = (*f)(a, b);
	printf("%d\n", k);

	char *s1 = "abc", *s2 = "123";
	swap(s1, s2);
	printf("%s,%s\n", s1, s2);

	int a = 3,s;
	s = f(a);
	s = s + f(a);
	printf("%d\n", s);

	FILE *fp;
	int a[10]={1,2,3},i,n;
	fp=fopen("d1.log","w");
	for(i=0;i<3;i++)
		fprintf(fp,"%d",a[i]);
	fprintf(fp,"\n");
	fclose(fp);
	fp=fopen("d1.log","r");
	fscanf(fp,"%d",&n);
	fclose(fp);
	printf("%d",n);
	*/
	int i=5;
	do{
		if(i%3==1)
			if(i%5==2){
				printf("*%d",i);
				break;
			}
		i++;
	}while(i!=0);
	printf("\n");
	return 0;
}
