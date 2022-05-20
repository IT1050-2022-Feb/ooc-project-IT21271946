#include"GuestUser.h"
class RegisteredUser :public GuestUser
{
protected:
char userUsername[10];
char userPassword[10];
public:
RegisteredUser();
RegisteredUser(const char puserUsername[], const char
puserPassword[], char puserid, const char puserName[], const char
puserAddress[], const char puserEmail[], const char puserNo[]);
void displayDetails();
void login();
void logout();
char checkLoginDetails();
~RegisteredUser();
};
