#include "Donor.h"
#include "Organizer.h"
#include "Staff.h"
#define SIZE1 2
#define SIZE2 2
class BloodCamp
{
private:
char bloodCampID;
char bloodCampLoctaion[50];
char bloodCampDate[10];
char bloodCampTime[10];
char bloodCampVenue[20];
int count = 0;
Donor* donor;
Organizer* organizer;
Staff* staff;
public:
BloodCamp();
BloodCamp(Organizer* porganizer, Donor* pdonor,Staff* pstaff);
void bloodCampDetails(char bcID, const char bcLocation, const char bcTime, const char bcDate, const char bcVenue , Organizer* porganizer , Donor* pdonor , Staff* pstaff);
void BloodCampDetails();
void deleteBloodCampDetails();
void updateBloodCampDetails();
void addBloodCampDetails();
void displayBloodCampDetails();
~BloodCamp();
};

