#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include "patient.h"

typedef struct {
    Patient patient;
    char date[11]; // YYYY-MM-DD
    char time[6];  // HH:MM
} Appointment;

Appointment createAppointment(Patient patient, const char* date, const char* time);

#endif // APPOINTMENT_H
