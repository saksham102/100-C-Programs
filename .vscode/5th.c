/*program of subtracting of two numbers */
# include <stdio.h>
int main(){
    int a, b, difference;

    printf("enter two numbers : ");
    scanf("%d %d", &a, &b);

    difference = a-b;
    printf("difference = %d", difference);
    return 0;
}
