#include <stdio.h>
#include <math.h>

int main()

{
    double m1, m2, vf, k, mu;
    double speed_of_light = 3.00e+8;

    printf("Enter the mass of atom 1 (in kg): ");
    scanf("%lf", &m1);

    printf("Enter the mass of atom 2 (in kg): ");
    scanf("%lf", &m2);

    printf("Enter the vibrational frequency (in Hz) or enter 0 (if you want to find): ");
    scanf("%lf", &vf);

    printf("Enter the value of Force Constant (K) (in N/m) or enter 0 (if you want to find): ");
    scanf("%lf", &k);

    mu = (m1 * m2) / (m1 + m2);

    if (k == 0 && vf == 0) {
        printf("\nResults:\n");
        printf("Enter valid Value\n");
    } else if (k == 0) {
        k = mu * pow(vf, 2) * pow(2 * M_PI, 2);
        printf("\nResults:\n");
        printf("Reduced Mass (μ): %.4e kg\n", mu);
        printf("Force Constant (k): %.4e N/m\n", k);
        printf("Vibrational Frequency (v): %.4e Hz\n", vf);
    } else {
        vf = (1.0 / (2 * M_PI)) * sqrt(k / mu);
        printf("\nResults:\n");
        printf("\nReduced Mass (μ): %.4e kg\n", mu);
        printf("Force Constant (k): %.4e N/m\n", k);
        printf("Vibrational Frequency (v): %.4e Hz\n", vf);
    }

    return 0;
}