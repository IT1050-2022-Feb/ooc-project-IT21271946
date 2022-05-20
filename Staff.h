#include "BloodCamp.h"
#include "Report.h"
#define SIZE 5
class Staff
{
private:
char staffID;
char staffName[20];
char staffEmail[20];
char staffNumber[10];
char staffUsername[20];
char staffPassword[20];
BloodCamp* BC[SIZE];
public:
Staff();
Staff(char pstaffID, const char pstaffName[], const char
pstaffEmail[], const char pstaffNumber[], const char
pstaffUsername[], const char pstaffPassword[]);
void login(const char stfUsername, const char stfPsword );
void checkReport(Report* pRP);
void manage(BloodCamp*pBC);
~Staff();
};

