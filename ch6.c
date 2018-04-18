#include <stdio.h>
#include <stdlib.h>
#define XMAX 10
#define YMAX 2i
#define NKEYS (sizeof(keytab / sizeof(struct key))
#define MAXWORD 100

struct point{
	int x;
	int y;
};

struct rect {
	struct point pt1;
	struct point pt2;
};

/*make a point from x and y components */
struct point makepoint(int x, int y){
	struct point temp;
	
	temp.x = x;
	temp.y = y;
	return temp;
}

/*addpoint: add two point */
struct point addpoint(struct point p1, struct point p2){
	p1.x += p2.x;
	p1.y += p2.y;
	return p1;
}

/*ptinrect: return 1 if p in r, 0 if not */
int ptinrect(struct point p, struct rect r){
	return p.x >= r.pt1.x && p.x < r.pt2.x
		&& p.y >= r.pt1.y && p.y < r.pt2.y;
}

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

/*canonrect: canonicalize coordinates of rectangle*/
struct rect canonrect(struct rect r){
	struct rect temp;

	temp.pt1.x = min(r.pt1.x, r.pt2.x);
	temp.pt1.y = min(r.pt1.y, r.pt2.y);
	temp.pt2.x = max(r.pt1.x, r.pt2.x);
	temp.pt2.y = max(r.pt1.y, r.pt2.y);

	return temp;
}

struct {	
	int len;
	char *str;
} *p;

struct key {
	char * word;
	int count;
}keytab[NKEYS];
/*
struct key{
	char *word;
	int count
}keytab[] = {
	"auto", 0,
	"break", 0,
	"case", 0;
	"char", 0,
	"const", 0,
	"continue", 0,
	"default", 0,
	
	"unsigned", 0,
	"void", 0,
	"volatile", 0,
	"while", 0	
};
*/

/*getword: get next word or character from input*/
int getword(char *word, int lim){
	int c, getch(void);
	void ungetch(int)
	char * w = word;
	
	while(isspace(c=getch))
		;
	if(c!=EOF)
		*w++ = c;
	if(!isalpha(c)){
		*w = '\0';
		return c;
	}
	for(; --lim>0; w++)
		if(!isalphanum(*w = getch())){
		ungetch(*w);
		break;
		}
		*w = '\0';
		return word[0];
	}
}

/*binsearch: find word in tab[0]...tab[n-1]*/
int binsearch(char *word, struct key tab[], int n){
	int cond;
	int low, high, mid;

	low = 0;
	high = n-1;
	while(low <= high){
		mid = (low+high) / 2;
		if((cond = strcmp(word, tab[mid].word)) < 0)
			high = mid-1;
		else if(cond > 0)
			low = mid+1;
		else
			return mid;
	}
	return -1;
}

int main(){
	struct point pt;
	struct point maxpt = {320, 230};
	printf("%d, %d", pt.x, pt.y);
	double dist, sqrt(double);
	dist = sqrt((double)pt.x*pt.x+(double)pt.y*pt.y);
	struct rect screen;
	screen.pt1.x;

	struct point middle;
	struct point makepoint(int, int);
	screen.pt1 = makepoint(0, 0);
	screen.pt2 = makepoint(XMAX, YMAX);
	middle = makepoint((screen.pt1.x + screen.pt2.x)/2,
		(screen.pt1.y + screen.pt2.y)/2);
	
	struct point origin, *pp;

	pp = &origin;
	printf("origin is (%d, %d)\n", (*pp).x, (*pp).y);
	printf("origin is (%d, %d)\n", pp->x, pp->y);
	struct rect r, *rp = &r;

	/* ch 6.3 */
	int n;
	char word[MAXWORD]
	while(getword(word, MAXWORD) != EOF)
		if(isalpha(word[0]))
			if(n = binsearch(word, keytab, NKEYS) >= 0)
				keytab[n].count++;
	for(n=0;n<NKEYS;n++)
		printf("%4d %s\n", keytab[n].count, keytab[n].word);
	
	return 0;
}
