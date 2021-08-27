#include <stdio.h>
/*
 * A file that displays every type of preprocessor macro.
 */

/* Since I'm not compiling with repository-wide macros, I can't use:

#ifdef MACRO
   // conditional codes
#endif

to its intended purpose.
 */


#define PI 3.1415
#define circleArea(r) (PI*(r)*(r))



int main()
{
    float radius, area;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    area = circleArea(radius);
    printf("Area=%.2f\n",area);
    return 0;
}