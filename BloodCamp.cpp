#include "BloodCamp.h"
#define SIZE1 2
#define SIZE2 2
BloodCamp::BloodCamp()
{
}
BloodCamp::BloodCamp(Organizer* porganizer, Donor* pdonor,Staff* pstaff)
{
donor = pdonor;
organizer = porganizer;
staff = pstaff;
}
void BloodCamp::bloodCampDetails(char bcID, const char bcLocation, const char bcTime, const char bcDate, const char bcVenue , Organizer* porganizer , Donor* pdonor , Staff* pstaff)
{
}
void BloodCamp::deleteBloodCampDetails()
{
}
void BloodCamp::updateBloodCampDetails()
{
}
void BloodCamp::displayBloodCampDetails()
{
}
void BloodCamp::addBloodCampDetails()
{
}
BloodCamp::~BloodCamp()
{
//Destructor 
}

