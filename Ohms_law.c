#include <stdio.h>

int main() {
    int choice;
    float voltage, current, resistance;

     
        printf("\nChoose an option:\n");
        printf("1. Calculate Voltage (V)\n");
        printf("2. Calculate Current (I)\n");
        printf("3. Calculate Resistance (R)\n");
        printf("4. Exit\n");

        printf("Enter your choice (1/2/3/4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the current (in amperes): ");
                scanf("%f", &current);
                printf("Enter the resistance (in ohms): ");
                scanf("%f", &resistance);
                voltage = current * resistance;
                printf("The voltage is: %.2f volts\n", voltage);
                break;

            case 2:
                printf("Enter the voltage (in volts): ");
                scanf("%f", &voltage);
                printf("Enter the resistance (in ohms): ");
                scanf("%f", &resistance);
                current = voltage / resistance;
                printf("The current is: %.2f amperes\n", current);
                break;

            case 3:
                printf("Enter the voltage (in volts): ");
                scanf("%f", &voltage);
                printf("Enter the current (in amperes): ");
                scanf("%f", &current);
                resistance = voltage / current;
                printf("The resistance is: %.2f ohms\n", resistance);
                break;

            case 4:
                printf("Exiting the calculator.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

/* OUTPUT
Choose an option:
1. Calculate Voltage (V)
2. Calculate Current (I)
3. Calculate Resistance (R)
4. Exit
Enter your choice (1/2/3/4): 1
Enter the current (in amperes): 2.5
Enter the resistance (in ohms): 4.0
The voltage is: 10.00 volts */

