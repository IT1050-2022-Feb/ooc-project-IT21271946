#include"Donor.h"
#include"BloodCamp.h"
#include"Staff.h"
#include"Organizer.h"
#define SIZE1 5
#define SIZE2 5
#define SIZE3 5
#define SIZE4 5
class Report
{
private:
char reportID;
public:
Report();
Report(BloodCamp*pBC[], Staff*pstaff, Organizer*pOR[], Donor*pDO);
void donorReports();
void bloodCampReports();
void staffReports();
void organizerReports();
~Report();
};

