#include<stdio.h>
#include<math.h>

int main() {
    double ma, mb;
    double mu;
    double vf, k;
    double c = 3e8;

    printf("\t\tCHEMISTRY CALCULATOR FOR REDUCED MASS, VIBRATIONAL FREQUENCY, AND FORCE CONSTANT OF TWO ATOMS\n\n\n");

    while (1) {
        printf("\nEnter the value of mass numbers for both elements in amu (0 to exit).\n");
        scanf("%lf %lf", &ma, &mb);

        if (ma == 0 || mb == 0) {
            printf("\tTo calculate any of the values, both elements must have non-zero masses. CALCULATION DENIED\n\n\n");
            break;
        } else {
            double mu1 = ((ma * mb) / (ma + mb)) * 1.66*pow(10,-27);
            mu = mu1 * pow(10, -27);

            printf("\nEnter the value of vibrational frequency in per meter (if to find then enter 0)=");
            scanf("%lf", &vf);

            printf("Enter the value of force constant in newton per meter (if to find then enter 0)=");
            scanf("%lf", &k);

            if (vf == 0 && k == 0) {
                printf("\n\tReduced mass = %e kg", mu1);
                printf("\n\tInsufficient data for the calculation of vibrational frequency and force constant.\n\n\n");
            } else {
                if (vf == 0 && k != 0) {
                    vf = (1 / (2 * M_PI * c)) * sqrt(k / mu);
                    printf("\n\tReduced mass = %e kg", mu1);
                    printf("\n\tVibrational frequency = %e per meter", vf);
                    printf("\n\tForce constant = %e newton per meter\n\n\n", k);
                } else if (k == 0 && vf != 0) {
                    k = vf * vf * 4 * M_PI * M_PI * c * c * mu;
                    printf("\n\tReduced mass = %e kg", mu1);
                    printf("\n\tVibrational frequency = %e per meter", vf);
                    printf("\n\tForce constant = %e newton per meter\n\n\n", k);
                } else if (k != 0 && vf != 0) {
                    printf("\n\tReduced mass = %e kg", mu1);
                    printf("\n\tValues of vibrational frequency and force constant are already given\n\n\n");
                }
            }
        }
    }

    return 0;
}
