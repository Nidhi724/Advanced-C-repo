#include <stdio.h>
#include <math.h>   // for power, sqrt, sin, cos, tan functions

int main() {
    double num1, num2, result;
    char operator;
    int choice;

    printf("=== COMMAND LINE CALCULATOR ===\n");
    printf("Choose the type of operation:\n");
    printf("1. Basic Arithmetic (+, -, *, /, %%)\n");
    printf("2. Power (x^y)\n");
    printf("3. Square Root (√x)\n");
    printf("4. Trigonometric Functions (sin, cos, tan)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nEnter an expression (e.g., 8 + 4): ");
            scanf("%lf %c %lf", &num1, &operator, &num2);

            switch (operator) {
                case '+':
                    result = num1 + num2;
                    printf("Result: %.2lf\n", result);
                    break;

                case '-':
                    result = num1 - num2;
                    printf("Result: %.2lf\n", result);
                    break;

                case '*':
                case 'x':
                    result = num1 * num2;
                    printf("Result: %.2lf\n", result);
                    break;

                case '/':
                    if (num2 == 0)
                        printf("Error: Division by zero not allowed.\n");
                    else {
                        result = num1 / num2;
                        printf("Result: %.2lf\n", result);
                    }
                    break;

                case '%':
                    if ((int)num2 == 0)
                        printf("Error: Modulus by zero not allowed.\n");
                    else {
                        result = (int)num1 % (int)num2;
                        printf("Result: %.0lf\n", result);
                    }
                    break;

                default:
                    printf("Error: Invalid operator! Use +, -, *, /, or %%.\n");
            }
            break;

        case 2:
            printf("\nEnter base and exponent (x y): ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("Result: %.2lf\n", result);
            break;

        case 3:
            printf("\nEnter number to find square root: ");
            scanf("%lf", &num1);
            if (num1 < 0)
                printf("Error: Square root of negative number not defined.\n");
            else {
                result = sqrt(num1);
                printf("Result: √%.2lf = %.2lf\n", num1, result);
            }
            break;

        case 4:
            printf("\nEnter angle in degrees: ");
            scanf("%lf", &num1);
            // Convert degrees to radians
            double radians = num1 * (M_PI / 180.0);
            printf("sin(%.2lf) = %.4lf\n", num1, sin(radians));
            printf("cos(%.2lf) = %.4lf\n", num1, cos(radians));
            printf("tan(%.2lf) = %.4lf\n", num1, tan(radians));
            break;

        default:
            printf("Invalid choice! Please select 1–4.\n");
    }

    printf("\nThank you for using the calculator!\n");
    return 0;
}