#include <stdio.h>
#include "patient.h"
#include "appointment.h"
#include "user.h"

int main() {
    printf("Welcome to the Healthcare Management System\n");

    // Example usage
    User user = createUser ("admin", "password");
    Patient patient = createPatient("John Doe", 30, "Flu");
    Appointment appointment = createAppointment(patient, "2023-10-01", "10:00 AM");

    printf(":User  %s\n", user.username);
    printf("Patient: %s, Age: %d, Condition: %s\n", patient.name, patient.age, patient.condition);
    printf("Appointment: %s at %s\n", appointment.date, appointment.time);

    return 0;
}
