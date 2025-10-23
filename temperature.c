 //simple C program (Hello world)
 /*
 Name: Alexander kipkorir
 Reg No:CT101/G/21719/24
 Date:19/10/2025
 Description: c program based on functions 
 */
 #include <stdio.h>

// Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = convertToCelsius(fahrenheit);
    printf("Temperature in Celsius = %.2f°C\n", celsius);

    return 0;
}