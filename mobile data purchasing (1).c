 //simple C program (Hello world)
 /*
 Name: Alexander kipkorir
 Reg No:CT101/G/21719/24
 Date: 18/09/2025
 Description: semester units 
 */
 #include<stdio.h> // preprocessor directive scan (). printf()//main function 
 //main function 
int main(){
    int choice;

    // Display menu
    printf("Select data bundle:\n");
    printf("1. 100MB @ 50 KES\n");
    printf("2. 500MB @ 200 KES\n");
    printf("3. 1GB   @ 350 KES\n");
    printf("4. 2GB   @ 600 KES\n");

    // Input choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Switch-case for bundle selection
    switch (choice) {
        case 1:
            printf("You selected 100MB. Cost = 50 KES\n");
            break;
        case 2:
            printf("You selected 500MB. Cost = 200 KES\n");
            break;
        case 3:
            printf("You selected 1GB. Cost = 350 KES\n");
            break;
        case 4:
            printf("You selected 2GB. Cost = 600 KES\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}