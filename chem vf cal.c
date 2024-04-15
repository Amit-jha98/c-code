#include <stdio.h>
#include <math.h>

// Function to calculate the reduced mass
double calculate_reduced_mass(double m1, double m2) {
    return (m1 * m2) / (m1 + m2);
}

// Function to calculate the force constant
double calculate_force_constant(double mu, double vibrational_frequency) {
    return mu * pow(vibrational_frequency, 2) * pow(2 * M_PI, 2);
}

// Function to calculate the vibrational frequency
double calculate_vibrational_frequency(double mu, double force_constant) {
    return (1 / (2 * M_PI)) * sqrt(force_constant / mu);
}

int main() {
    // Input
    double m1, m2, vibrational_frequency;

    printf("Enter the mass of atom 1 (in amu): ");
    scanf("%lf", &m1);

    printf("Enter the mass of atom 2 (in amu): ");
    scanf("%lf", &m2);

    printf("Enter the vibrational frequency (in cm^-1): ");
    scanf("%lf", &vibrational_frequency);

    // Calculations
    double reduced_mass = calculate_reduced_mass(m1, m2);
    double force_constant = calculate_force_constant(reduced_mass, vibrational_frequency);
    double vibrational_frequency_calculated = calculate_vibrational_frequency(reduced_mass, force_constant);

    // Display Results
    printf("\nResults:\n");
    printf("Reduced Mass (μ): %.4lf amu\n", reduced_mass);
    printf("Force Constant (k): %.4lf dyn/cm\n", force_constant);
    printf("Vibrational Frequency (v): %.4lf cm^-1\n", vibrational_frequency_calculated);

    return 0;
}