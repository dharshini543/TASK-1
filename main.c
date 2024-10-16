#include <stdio.h>
#include<math.h>

int main()
{
    double a;
    double b;
    double c;

    printf("Enter two sides of a right angled triangle\n");
    scanf("%lf %lf",&a,&b);

    c = sqrt((a*a)+(b*b));

    printf("Hypotenous of the right angled triangle is %lf\n",c);
    return 0;
}
