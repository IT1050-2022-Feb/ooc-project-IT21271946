#include "Staff.h"
#include<cstring>
Staff::Staff()
{
staffID = 0;
strcpy(staffName, "");
strcpy(staffEmail, "");
strcpy(staffContact, "0000000000");
strcpy(staffUsername, "");
strcpy(staffPassword, "");
}
Staff::Staff(char pstaffID, const char pstaffName[], const char
pstaffEmail[], const char pstaffContact[], const char pstaffUsername[], const char pstaffPassword[])
{
staffID = pstaffID;
strcpy(staffName, pstaffName);
strcpy(staffEmail, pstaffEmail);
strcpy(staffContact, pstaffContact);
strcpy(staffUsername, pstaffUsername);
strcpy(staffPassword, pstaffPassword);
}
void Staff::login(const char stfUsername, const char stfPsword)
{
}
void Staff::manage(BloodCamp* pBC)
{
}
void Staff::checkReport(Report*pRP)
{
}
Staff::~Staff()
{
//Destructor 
}

