#include "geometry.h"
#include <stdio.h>
#include <stdlib.h>

//function for printing the hull points
void print_points(struct point* hull,int n) {

    //printf("\nx---------------------------------------x");
    printf("\n\nPoints in convex hull are:\n");

    for (int i = 0; i < (int)hull[n].x; i++){
        printf("\n\t\t\t  (%.2f,%.2f)\n",hull[i].x,hull[i].y);
    };
    printf("\n");
}


//function for checking the orientation of point
int orientation(struct point p,struct point q,struct point r) {

    //calculating orientation determinant(for checking the orientation of a point)
    int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);

    //returning the value based on orientation
    if (val == 0) { // collinear
        return 0;
    } else if (val > 0) {// clock or counterclock wise
        return 1;
    } else {
        return 2;
    }
    
}


struct point* convex_hull_jarvis_march(struct point points[], int n) {
    
    if (n < 1) {
        exit(1);
    }
    
    // Allocating memory dynamically to store the hull points
    struct point* hull = (struct point*)malloc(n+1 * sizeof(struct point));

    // Counter for the number of selected hull points
    int hullPointCount = 0;


    if (hull == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    
    // Find the lowest point index
    int l = 0;
    for (int i = 0; i < n; i++) {
        if (points[i].y < points[l].y) {
            l = i;
	}
    }

    int p = l;
    int q;
    do {
        hull[hullPointCount] = points[p];
        hullPointCount += 1;
        
        q = (p+1)%n;
        for (int i = 0; i < n; i++) {
           // If i is more counterclockwise than current q, then update q
           if (orientation(points[p], points[i], points[q]) == 2)
               q = i;
        }
        
        p = q;
        
        
    } while (p != l);
    
    // Storing the total number of hull points as a struct point x (coudn't figure out any other way than this)
    hull[n].x = hullPointCount;
    return hull;
}
