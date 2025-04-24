#include "patient.h"

Patient createPatient(const char* name, int age, const char* condition) {
    Patient patient;
    snprintf(patient.name, sizeof(patient.name), "%s", name);
    patient.age = age;
    snprintf(patient.condition, sizeof(patient.condition), "%s", condition);
    return patient;
}
