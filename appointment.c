#include "appointment.h"

Appointment createAppointment(Patient patient, const char* date, const char* time) {
    Appointment appointment;
    appointment.patient = patient;
    snprintf(appointment.date, sizeof(appointment.date), "%s", date);
    snprintf(appointment.time, sizeof(appointment.time), "%s", time);
    return appointment;
}
