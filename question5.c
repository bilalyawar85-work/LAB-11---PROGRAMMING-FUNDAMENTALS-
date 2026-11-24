
#include <stdio.h>

struct HospitalRecord
{
    int RecordID;
    char Ward[30];

    struct PatientInfo
    {
        int PatientID;
        char Name[50];
        int Age;
    } patient;
};

int main()
{
    struct HospitalRecord h1 = {
        501,
        "Emergency",
        {101, "Ahmed", 35}
    };

    struct HospitalRecord *ptr;

    ptr = &h1;

    printf("--- Hospital Record ---\n");

    printf("Record ID: %d\n", ptr->RecordID);
    printf("Ward: %s\n", ptr->Ward);

    printf("\n--- Patient Information ---\n");

    printf("Patient ID: %d\n", ptr->patient.PatientID);
    printf("Name: %s\n", ptr->patient.Name);
    printf("Age: %d\n", ptr->patient.Age);

    return 0;
}
