// area of circle
#include <stdio.h>
int main(){

    float radius, area;
    float pi =3.14;

    printf("enter radius : ");
    scanf("%f", &radius);

    area = pi * radius * radius;

    printf ("area of circle is : %.2f",area);

    return 0;
}

