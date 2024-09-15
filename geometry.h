
// Structure for storing a point 
struct point {
    float x;
    float y;
};

// Function to calculate convex hull points
struct point* convex_hull_jarvis_march(struct point points[], int n);

// Function to print convex hull points
void print_points(struct point* hull,int n);
