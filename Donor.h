#include "RegisteredUser.h"
#include "BloodCamp.h"
#define SIZE 5
class Donor :public RegisteredUser
{
private:
 char donorID;
 char bloodGroup;
public:
 Donor();
 Donor(const char userName[], const char userPwd[], char donorID, const
char name[], const char address[], const char email[], const char
contact[]);
 void addDonationDetails();
 void login();
 void displayDonorDetails();
 ~Donor();
};


