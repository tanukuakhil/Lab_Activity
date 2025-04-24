CC = gcc
CFLAGS = -Wall -g
OBJ = main.o patient.o appointment.o user.o utils.o

healthcare_management_system: $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ) healthcare_management_system
