#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a, b, c;

    scanf("%f%f%f", &a, &b, &c);

    double underRoot = b * b - 4 * a * c;

    if(a == 0 || underRoot < 0)
    {
        printf("Impossivel calcular\n");

        return 0;
    }

    double r1 = (0 - b + sqrt(underRoot)) / (2 * a);
    double r2 = (0 - b - sqrt(underRoot)) / (2 * a);

    printf("R1 = %.5f\nR2 = %.5f", r1, r2);

    return 0;
}
