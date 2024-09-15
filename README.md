# convex_hull
Solving convex hull problem in C and making library module from it

Program will find convex hull for a given set of points using Jarvis March algorithm.


Files and folders in the directory - 

1)app.c - main C file in which we are calling the library functions
2)geometry.c -  convex hull ,print points and other functions are defined in this file
3)test.c - all different type of test cases are defined here. 
4)geometry.h - all functions and point structure is declared here.
5)Makefile - to build complete system.
6)bin - This folder contains all the executable files
7)lib - This folder contains all the .o files


How to run this the program?

There are 2 ways to run this code - 

1)If user wants to input points
- Run the command - "make"
- Then run executable file which is in /bin directory by using command - "./bin/a.out"

2) Run code on predefined testcases
- Run the command - "make testcase"(executable file will be run automatically through command I included in Makefile)

3) To remove the .o and executable files use command "make clean"


Functions in geometry.c - 

1)print_points() - Takes set of points as an input and print those points

2)orientation() - Takes 3 points as an input and check the orientation of point(helper function for finding convex hull) and gives us 0 or 1 or 2 as an output depending upon the orientation of a point.

3)convex_hull_jarvis_march() - this function will take points as an input and give us the set of convex hull points.

