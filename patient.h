#ifndef PATIENT_H
#define PATIENT_H

typedef struct {
    char name[100];
    int age;
    char condition[100];
} Patient;

Patient createPatient(const char* name, int age, const char* condition);

#endif // PATIENT_H
