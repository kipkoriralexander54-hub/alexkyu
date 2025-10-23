 //simple C program (Hello world)
 /*
 Name: Alexander kipkorir 
 Reg No:CT101/G/21719/24
 Date:19/10/2025
 Description: c program based on loops 
 */
 #include <stdio.h>

// Function to calculate total fare
float calculateFare(float distance) {
    float rate = 50; // KSh per kilometer
    return distance * rate;
}

int main() {
    float distance;
    printf("Enter distance traveled (in kilometers): ");
    scanf("%f", &distance);

    float totalFare = calculateFare(distance);
    printf("Total Fare = KSh. %.2f\n", totalFare);

    return 0;
}