#include <stdio.h>
#include <math.h>

int main()
 {
    double m1, m2, vf, k, mu;

double wavelength, wave_number;

double speed_of_light = 3.00e+8;
    // Input mass of atom 1 in atomic mass units (amu)
    printf("Enter the mass of atom 1 (in kg): ");
    scanf("%lf", &m1);

    // Input mass of atom 2 in atomic mass units (amu)
    printf("Enter the mass of atom 2 (in kg): ");
    scanf("%lf", &m2);

    // Input vibrational frequency in cm^-1
    printf("Enter the vibrational frequency (in Hz) or enter 0 (if you want to find): ");
    scanf("%lf", &vf);

    // Input force constant (k) in dyn/cm or enter 0 (if you want to find)
    printf("Enter the value of Force Constant (K) (in N/m) or enter 0 (if you want to find): ");
    scanf("%lf", &k);

    // Convert mass to kg
    m1 *= 1.66054e-27;  // 1 amu = 1.66054e-27 kg
    m2 *= 1.66054e-27;

    // Convert force constant to N/m
    k *= 1.0e4;  // 1 dyn/cm = 1.0e-4 N/m

    // Calculate reduced mass in kg
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
 wavelength = speed_of_light / vf;
wave_number = 1.0 / wavelength;

        printf("\nResults:\n");
        printf("\nReduced Mass (μ): %.4e kg\n", mu);
        printf("Force Constant (k): %.4e N/m\n", k);
        printf("Vibrational Frequency (v): %.4e cm-1\n", wave_number);
    }

    return 0;
}
