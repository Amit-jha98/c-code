
#include <stdio.h>
#include <math.h>

double calculateReducedMass(double mass1, double mass2) {
    return (mass1 * mass2) / (mass1 + mass2);
}

double calculateVibrationalFrequency(double forceConstant, double reducedMass) {
    return sqrt(forceConstant / reducedMass) / (2 * M_PI);
}

int main() {

    const double atomicMassUnitToKg = pow(10, -27) * 1.66053906660; 
    const double planckConstant = pow(10, -34) * 6.62607015;         
    const double speedOfLight = pow(10, 8) * 3;                      

    printf("\t\tCHEMISTRY CALCULATOR FOR REDUCED MASS, VIBRATIONAL FREQUENCY, AND FORCE CONSTANT OF TWO ATOMS\n\n\n");

    while (1) {
    
        double massAtom1, massAtom2;
        printf("Enter mass of Atom 1 (u): ");
        scanf("%lf", &massAtom1);
        printf("Enter mass of Atom 2 (u): ");
        scanf("%lf", &massAtom2);

    
        massAtom1 *= atomicMassUnitToKg;
        massAtom2 *= atomicMassUnitToKg;

        double reducedMass = calculateReducedMass(massAtom1, massAtom2);
        printf("Reduced Mass: %.4lf kg\n", reducedMass);

        double forceConstant;
        printf("Enter force constant (N/m): ");
        scanf("%lf", &forceConstant);

        double vibrationalFrequency = calculateVibrationalFrequency(forceConstant, reducedMass);
        printf("Vibrational Frequency: %.4lf Hz\n", vibrationalFrequency);

        double zeroPointEnergy = 0.5 * planckConstant * pow(vibrationalFrequency, 2);
        printf("Zero-Point Energy: %.4lf J\n", zeroPointEnergy);

        char choice;
        printf("\nDo you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);

        if (choice != 'y' && choice != 'Y') {
            break; 
        }
    }

    return 0;
}
