#include <stdio.h>

int main() {
    // Declare and initialize an array of countries
    char *countries[] = {"Nigeria", "Canada", "Brazil", "Japan", "Germany"};
    
    // Print the countries array
    for (int i = 0; i < 5; i++) {
        printf("%s\n", countries[i]);
    }

     // Traverse and print the countries array
    for (int i = 0; i < 5; i++) {
        printf("%s\n", countries[i]);
    }

    // Concatenate the strings of the countries array
    char concatenatedCountries[100] = "";
    for (int i = 0; i < 5; i++) {
        strcat(concatenatedCountries, countries[i]);
        strcat(concatenatedCountries, " ");
    }
    
    // Print the concatenated string
    printf("%s\n", concatenatedCountries);

    return 0;
}


#include <stdio.h>

int main() {
    // Declare and initialize a two-dimensional array of names
    char names[3][10] = {
        "Alice",
        "Bob",
        "Charlie"
    };
    
    // Print the names array
    for (int i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
