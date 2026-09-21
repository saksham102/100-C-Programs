// area of ractangle
# include <stdio.h>
int main(){
    float length, width, area;
    printf ("enter length : ");
    scanf("%f", &length);
    printf ("enter width : ");
    scanf("%f", &width);

    area = length * width;
    printf ("area of ractangle is : %.2f", area);
    return 0;
}