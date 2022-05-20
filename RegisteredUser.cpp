#include "RegisteredUser.h"
#include <cstring>
RegisteredUser::RegisteredUser()
{
strcpy(userUsername, "");
strcpy(userPassword, "");
}
RegisteredUser::RegisteredUser(const char puserUsername[], 
const char puserPassword[], char puserid, const char puserName[], 
const char puserAddress[], const char puserEmail[], const char
puserContact[]) : GuestUser(puserid, puserName, puserAddress, puserEmail, puserContact)
{
strcpy(userUsername, puserUsername);
strcpy(userPassword, puserPassword);
}
void RegisteredUser::displayDetails()
{
}
void RegisteredUser::login()
{
}
void RegisteredUser::logout()
{
}
char RegisteredUser::checkLoginDetails()
{
return 0;
}
RegisteredUser::~RegisteredUser()
{
//Destructor 
}

