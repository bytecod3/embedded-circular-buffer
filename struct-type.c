#include <stdio.h>


typedef struct SubPoint{
		int x;
		int y;
} SubPoint;


typedef struct Point{
	int x; 
	int y; 

	SubPoint sub;
} Point;

// functions
void calc(Point* p){
	printf("Struct info:");
	printf("x: %d", p->x);
}

Point coordinate(){
	// assign a value to x, y coordinate for origin
	Point org;
	Point* p_org = &org;

	p_org->x = 0;
	p_org->y = 0;

	return org;
}

int main(){
	// create a pointer to struct point
	Point* py;
	Point y;
	py = &y;

	py->x = 89;
	py->y = 90;
	
	// calc(py);
	Point origin = coordinate();

	py->sub.x = 78;

	printf("(%d, %d)\n", origin.x, origin.y);

	return 0;
}
