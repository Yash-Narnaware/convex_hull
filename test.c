#include<stdio.h>
#include "geometry.h"
#include <stdlib.h>

int main(){
	//random points
	
     struct point points1[6] = {{0, 3}, {2, 2}, {1, 1}, {2, 1}, {3, 0}, {3, 3}};
     printf("random points : (0, 3), (2, 2), (1, 1), (2, 1), (3, 0), (3, 3) \n");
     printf("expected convex hull :\n");
     printf("(3 , 0) , (3 , 3) , (0 , 3) , (1 , 1) \n");
     struct point* p1 = convex_hull_jarvis_march(points1 , 6);
     print_points(p1,6);

     free(p1);
     printf("\nx---------------------------------------x\n");
	
	//all points on Convex Hull
	 
     struct point points2[4] = {{0, 0}, {3, 0}, {3, 3}, {0, 3}};
     printf("all points on convex hull : (0, 0), (3, 0), (3, 3), (0, 3) \n");
     printf("expected convex hull :\n");
     printf("(0 , 0) , (3 , 0) , (3 , 3) , (0 , 3)\n");
     struct point* p2 = convex_hull_jarvis_march(points2 , 4);
     print_points(p2,4);

     free(p2);
     printf("\nx---------------------------------------x\n");
	
	//collinear points

     struct point points3[4] = {{0, 0}, {1, 1}, {2, 2}, {3, 3}};
     printf("collinear points : (0, 0), (1, 1), (2, 2), (3, 3) \n");
     printf("expected convex hull :\n");
     printf("(0 , 0) , (1 , 1) , (2 , 2) , (3 , 3) \n");
    struct point* p3 = convex_hull_jarvis_march(points3 , 4);
    print_points(p3,4);
     free(p3);
     printf("\nx---------------------------------------x\n");
	//duplicate points
        //Convex hull can contain duplicate points
        //https://math.stackexchange.com/questions/474666/can-convex-hulls-contain-duplicate-points
        //
		 
     struct point points4[6] = {{0, 0},  {1, 1}, {2, 2}, {0, 0}, {3, 3}, {1,1}};
     printf("duplicate points : (0, 0),  (1, 1), (2, 2), (0, 0), (3, 3), (1,1) \n");
     printf("expected convex hull :\n");
     printf("(0 , 0) ,(1 , 1) , (2 , 2) ,  (0 , 0) , (3 , 3) , (1 , 1)\n");
     printf("Convex hull can contain duplicate points\n");
     printf("https://math.stackexchange.com/questions/474666/can-convex-hulls-contain-duplicate-points\n");
    struct point* p4 = convex_hull_jarvis_march(points4 , 6);
    print_points(p4,6);

     free(p4);
     printf("\nx---------------------------------------x\n");
	
	//all points form a traingle
	
     struct point points5[3] = {{0, 0}, {2, 2}, {4, 0}};
     printf("all points form a triangle : (0, 0), (2, 2), (4, 0) \n");
     printf("expected convex hull :\n");
     printf("(0 , 0) , (4 , 0) , (2 , 2)\n");
     struct point* p5 = convex_hull_jarvis_march(points5 , 3);
     print_points(p5,3);
     free(p5);
     printf("\nx---------------------------------------x\n");
	
	//multiple points on Convex Hull (Concave Shape)
		 
     struct point points6[4] = {{0, 0}, {2, 2}, {4, 0}, {2, 1}};
     printf("multiple points on convex hull (concave shape) : (0, 0), (2, 2), (4, 0), (2, 1)\n");
     printf("expected convex hull :\n");
     printf("(0 , 0) , (4 , 0) , (2 , 2)");
     struct point* p6 = convex_hull_jarvis_march(points6 , 4);
     print_points(p6,4);

     free(p6);
     printf("\nx---------------------------------------x\n");
	
	//Minimal Input (Three Points)
		 
     struct point points7[6] = {{0, 0},  {1, 1}, {0, 2}};
     printf("minimal input (three points) : (0, 0),  (1, 1), (0, 2) \n");
     printf("expected convex hull :\n");
     printf("(0 , 0) , (1 , 1) , (0 , 2) \n");
    struct point* p7 =  convex_hull_jarvis_march(points7 , 3);
    print_points(p7,3);

     free(p7);
     printf("\nx---------------------------------------x\n");
	
	//Single Point
	 
     struct point points8[6] = {{0, 0}};
     printf("single point : (0, 0) \n");
     printf("expected convex hull :\n");
     printf("(0 , 0)");
      struct point* p8 = convex_hull_jarvis_march(points8 , 1);
      print_points(p8,1);
     
     free(p8);
     printf("\nx---------------------------------------x\n");
	
	//Two Points
		
     struct point points9[6] = {{0, 0}, {1, 1}};
     printf("two  points : (0, 0), (1, 1) \n");
     printf("expected convex hull :\n");
     printf("(0 , 0) , (1 , 1) \n");
       struct point* p9 = convex_hull_jarvis_march(points9 , 2);
       print_points(p9,2);

     free(p9);	
     printf("\nx---------------------------------------x\n");

	//Points forming a Convex Polygon
     struct point points10[6] = {{0, 0}, {2, 0}, {3, 1}, {2, 3},  {0, 3}};
     printf("points forming a convex polygon : (0, 0), (2, 0), (3, 1), (2, 3),  (0, 3) \n");
     printf("expected convex hull :\n");
     printf("(0 , 0) , (2 , 0) , (3 , 1) , (2 , 3) , (0 , 3) \n");
      struct point* p10 = convex_hull_jarvis_march(points10 , 5);
      print_points(p10,5);
	
     free(p10);
     printf("\nx---------------------------------------x\n");

	//Points Forming a cirle 
		
     struct point points11[6] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
     printf("points forming a circle : (1, 0), (0, 1), (-1, 0), (0, -1) \n");
     printf("expected convex hull :\n");
     printf("(0 , -1) , (1 , 0) , (0 , 1) , (-1 , 0) \n");
      struct point* p11 = convex_hull_jarvis_march(points11 , 4);
      print_points(p11,4);
	
     free(p11);
     printf("\nx---------------------------------------x\n");
	
    
}
