#include "RegisteredUser.h"
#include "BloodCamp.h"
#define SIZE 5
class Oraganizer : public RegisteredUser
{
private:
 char organizerID
public:
 Organizer();
 Organizer(const char userName[], const char userPwd[], char organizerID, const char name[], const char address[], const char email[], const char contact[]);
 void updateUserDetails;
 void login();
 void organizeBloodCamps();
 ~Organizer();
};

