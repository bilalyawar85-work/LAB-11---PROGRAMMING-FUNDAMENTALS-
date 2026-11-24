
#include <stdio.h>

#define TOLL_RATE 50

void processVehicle(char vehicleType[])
{
    static int totalVehicles = 0;
    static int totalRevenue = 0;

    totalVehicles++;
    totalRevenue += TOLL_RATE;

    printf("\nVehicle Type: %s\n", vehicleType);
    printf("Toll Charged: %d PKR\n", TOLL_RATE);
    printf("Total Vehicles: %d\n", totalVehicles);
    printf("Total Revenue: %d PKR\n", totalRevenue);
}

int main()
{
    processVehicle("Car");
    processVehicle("Bike");
    processVehicle("Truck");
    processVehicle("Car");
    processVehicle("Bus");

    printf("\n--- Final Toll Plaza Report ---\n");

    printf("Total Vehicles Processed: 5\n");
    printf("Total Collection: %d PKR\n", 5 * TOLL_RATE);

    return 0;
}
