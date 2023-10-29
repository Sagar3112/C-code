#include <stdio.h>
#include <string.h>

// Define arrays for the periodic table data
const char* elements[] = {
    "Hydrogen", "Helium", "Lithium", "Beryllium", "Boron", "Carbon", "Nitrogen", "Oxygen", "Fluorine", "Neon", // Add more elements
};
const float atomicMass[] = {
    1.008, 4.0026, 6.94, 9.0122, 10.81, 12.01, 14.01, 16.00, 19.00, 20.18, // Add more atomic masses
};
const int electrons[] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, // Add more electron counts
};

int main() {
    int atomicNumber;
    printf("Enter the atomic number: ");
    scanf("%d", &atomicNumber);

    if (atomicNumber >= 1 && atomicNumber <= 10) { // Update the range as needed
        // Retrieve data based on atomic number
        int index = atomicNumber - 1;
        printf("Element: %s\n", elements[index]);
        printf("Atomic Mass: %.3f amu\n", atomicMass[index]);
        printf("Number of Electrons: %d\n", electrons[index]);
    } else {
        printf("Invalid atomic number.\n");
    }

    return 0;
}
