#include <stdio.h>
int main() {
    int x, y;
    printf("Enter the coordinates of the point  ");
    scanf_s("%d %d", &x, &y);
    if (x>0 && y>0) {
        printf("\n The point is in the first quarter");
    }
    else if (x<0 && y>0) {
        printf("\n The point is in the second quarter");
    }
    else if (x<0 && y<0) {
        printf("\n The point is in the third quarter");
    }
    else if (x>0 && y<0) {
        printf("\nThe point is in the fourth quarter");
    }
    else if (x==0 && y!=0) {
        printf("\n The point lies on the y axis");
    }
    else if (x!= 0 && y==0) {
        printf("\n The point lies on the x axis");
    }
    else {
        printf("\n The point is at the origin of the coordinates");
    }
   



    return 0;
}
