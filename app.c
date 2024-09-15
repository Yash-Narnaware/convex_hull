#include<stdio.h>
#include "geometry.h"
#include <stdlib.h>

void main() {

    int n;
    printf("\nEnter the number of points: ");
    scanf("%d",&n);

    if (n < 1){
	printf("\nNumber of points can't be negative or zero\n");
	exit(1);

    }

    struct point points[n];

    // Taking input points from user
    for(int i=0;i<n;i++){

	float x_cord;
	float y_cord;

        printf("\nEnter the X co-ordinate of point %d : ",i+1);
	scanf("%f",&x_cord);
        printf("\nEnter the Y co-ordinate of point %d: ",i+1);
	scanf("%f",&y_cord);

	points[i].x = x_cord;
	points[i].y = y_cord;

    }

    printf("\nx---------------------------------------x");

    // Calculating convex hull points
    struct point* hull = convex_hull_jarvis_march(points, n);

    // Printing convex hull points
    print_points(hull,n);

    // Free the dynamically alloted memory
    free(hull);

}
