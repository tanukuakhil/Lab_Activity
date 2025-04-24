#include "user.h"

User  createUser (const char* username, const char* password) {
    User user;
    snprintf(user.username, sizeof(user.username), "%s", username);
    snprintf(user.password, sizeof(user.password), "%s", password);
    return user;
}
