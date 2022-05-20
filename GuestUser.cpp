#include "GuestUser.h"
#include <cstring>
GuestUser::GuestUser()
{
userID = 0;
strcpy(userName, "");
strcpy(userAddress, "");
strcpy(userEmail, "");
strcpy(userContact, "0000000000");
}
GuestUser::GuestUser(char puserid, const char puserName[], const char
puserAddress[], const char puserEmail[], const char puserContact[])
{
userID = puserid;
strcpy(userName, puserName);
strcpy(userAddress, puserAddress);
strcpy(userEmail, puserEmail);
strcpy(userContact, puserContact);
}
void GuestUser::searchBloodCamp(BloodCamp* pBC)
{
}
void GuestUser::registeredUser()
{
}
void GuestUser::displayDetails()
{
}
GuestUser::~GuestUser()
{
//Destructor 
}

