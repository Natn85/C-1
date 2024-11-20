#include <math.h>
#include <stdio.h>

float lerp(float k0, float k1, float t) { return k0 + t * (k1 - k0); }

float lerp_precise(int k0, int k1, float t) { return (1 - t) * k0 + t * k1; }

int main()
{
    float finish, steps, start = 0;

    printf("Input a number, this is the bigger bound of the lerp:");
    scanf("%f", &finish);

    printf("Input a number, this is in how many steps you want to divide the lerp:");
    scanf("%f", &steps);

    for (int i = 0; i < steps + 1; i++)
    {
        printf("%f\n", lerp(start, finish, i / steps));
    }

    return 0;
}
