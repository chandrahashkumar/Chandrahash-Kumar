#include <stdio.h>
#include <math.h>

#define PI 3.14159265

void printCircle(int radius, int numStars) {
    for (int i = 0; i < numStars; i++) {
        // Calculate the angle for each star
        double angle = 2 * PI * i / numStars;
        
        // Calculate the x and y coordinates
        int x = (int)(radius * cos(angle));
        int y = (int)(radius * sin(angle));

        // Print the star at the calculated position
        printf("Star %d: (%d, %d)\n", i + 1, x, y);
    }
}

int main() {
    int radius = 5; // Radius of the circle
    int numStars = 5; // Number of stars to print

    printCircle(radius, numStars);

    return 0;
}