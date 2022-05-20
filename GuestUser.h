#include "BloodCamp.h"
class GuestUser
{
protected:
char userID;
char userName[20];
char userAddress[30];
char userEmail[30];
char userContact[10];
public:
GuestUser();
GuestUser(char puserid, const char puserName[], const char
puserAddress[], const char puserEmail[] ,const char puserContact[]);
void searchBloodCamp(BloodCamp* pBC);
void registerUser();
virtual void displayDetails();
~GuestUser();
};
