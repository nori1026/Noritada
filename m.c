#include <stdio.h>
#define MAXLINE 1000

int getlines(char line[], int maxline);
void copy(char to[], char from[]);
char* reverse(char c[]);

int main(int argc, char * argv[])
{
	argc = 2;
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getlines(line, MAXLINE)) > 0)
		if(len > max){
			max = len;
			copy(longest, line);
		}	
	if (max > 0)
		printf("\n%s %d\n", longest, max);

	char a[] = argv[1];
	reverse(a);
	printf("%s\n", reverse(a));	
	
	return 0;

}

int getlines(char s[], int lim)
{
	int c, i;
	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		if(c == '\t' || c == ' ')
			--i;
		else
			s[i] = c;
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;

	i=0;
	while ( (to[i]=from[i]) != '\0' )
		++i;
}

char * reverse(char s[]){
	int i;
	i=0;
	while( s[i] != '\0' ){
		++i;
	}

	char a[i];
	int n=0;

	while(i >= 0){
		a[n] = s[i];
		n++;
		i--;
	} 
	printf("\n");
	
	return s;	
}
