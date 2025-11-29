#include <stdio.h>
#include <string.h>
#include <stdlib.h> 


#define MAX_SLOTS 10


typedef struct {
    int slot_number;        
    int is_occupied;        
    char vehicle_number[15]; 
    char vehicle_type[20];   
} ParkingSlot;


ParkingSlot lot[MAX_SLOTS];


void initialize_parking_lot();
void park_vehicle();
void unpark_vehicle();
void display_status();


int main() {
    int choice;

    
    initialize_parking_lot();

    printf(" Simple Parking Management System\n");

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Park Vehicle\n");
        printf("2. Unpark Vehicle\n");
        printf("3. Display Parking Status\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            
            while (getchar() != '\n');
            continue;
        }

        
        switch (choice) {
            case 1:
                park_vehicle();
                break;
            case 2:
                unpark_vehicle();
                break;
            case 3:
                display_status();
                break;
            case 4:
                printf("Exiting system. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please select a number between 1 and 4.\n");
        }
    }

    return 0;
}

void initialize_parking_lot()
 {
    for (int i = 0; i < MAX_SLOTS; i++) {
        lot[i].slot_number = i + 1;
        lot[i].is_occupied = 0;
        
        strcpy(lot[i].vehicle_number, "N/A");
        strcpy(lot[i].vehicle_type, "N/A");
    }
    printf("Parking lot initialized with %d slots.\n", MAX_SLOTS);
}

void park_vehicle() {
    int i;
    int slot_found = -1;

    
    for (i = 0; i < MAX_SLOTS; i++) {
        if (lot[i].is_occupied == 0) {
            slot_found = i;
            break;
        }
    }

    if (slot_found != -1) {
        
        printf("\n--- Parking Vehicle ---\n");
        printf("Enter Vehicle Number : ");
        scanf("%s", lot[slot_found].vehicle_number);

        printf("Enter Vehicle Type : ");
        scanf("%s", lot[slot_found].vehicle_type);

        
        lot[slot_found].is_occupied = 1;

        printf("\n Successfully parked vehicle *%s* (%s) in Slot *%d*.\n",
               lot[slot_found].vehicle_number,
               lot[slot_found].vehicle_type,
               lot[slot_found].slot_number);
    } else {
        
        printf("\nSorry, the parking lot is *FULL*.\n");
    }
}

void unpark_vehicle()
 {
    char search_number[15];
    int slot_found = -1;

    printf("\n--- Unparking Vehicle ---\n");
    printf("Enter the Vehicle Number to unpark: ");
    scanf("%s", search_number);

    
    for (int i = 0; i < MAX_SLOTS; i++) {
        if (lot[i].is_occupied == 1 && strcmp(lot[i].vehicle_number, search_number) == 0) {
            slot_found = i;
            break;
        }
    }

    if (slot_found != -1) {
        
        printf("\n Vehicle *%s* (%s) from Slot *%d* has been unparked.\n",
               lot[slot_found].vehicle_number,
               lot[slot_found].vehicle_type,
               lot[slot_found].slot_number);

        lot[slot_found].is_occupied = 0;
        strcpy(lot[slot_found].vehicle_number, "N/A");
        strcpy(lot[slot_found].vehicle_type, "N/A");
    } else {
        
        printf("\n Vehicle *%s* not found or is already unparked.\n", search_number);
    }
}

void display_status()
 {
    printf("\n--- Current Parking Status ---\n");
    printf("| Slot | Status      | Vehicle Number | Vehicle Type |\n");
    printf("|------|--------     |----------------|--------------|\n");

    for (int i = 0; i < MAX_SLOTS; i++) {
        printf("| %-4d | %-6s | %-14s | %-12s |\n",
               lot[i].slot_number,
               lot[i].is_occupied ? "*OCCUPIED*" : "EMPTY",
               lot[i].vehicle_number,
               lot[i].vehicle_type);
    }
    printf("----------------------------------------------\n");
}
