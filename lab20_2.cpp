#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *r1, Rect *r2){

	double xdistance = abs(r1->x - r2->x);
	if(xdistance <= r1->w){
		
		double xmax;
		if (r1->x > r2->x) xmax = r1->x;
		else xmax = r2->x;
		
		double xmin;
		if((r1->x + r1->w) < (r2->x + r2->w)) xmin = (r1->x + r1->w);
		else xmin = (r2->x + r2->w);

		
		double ymin;
		if (r1->y < r2->y) ymin = r1->y;
		else ymin = r2->y;
		
		double ymax;
		if((r1->y - r1->h) > (r2->y - r2->h)) ymax = (r1->y - r1->h);
		else ymax = (r2->y - r2->h);

		
		double x1 = xmax;
		double x2 = xmin;
		
		double y1 = ymin;
		double y2 = ymax;

		double lx = abs(x1 - x2);
		double ly = abs(y2 - y1);
		return lx*ly;
	}
	return 0;
	
}
