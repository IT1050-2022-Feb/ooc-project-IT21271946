#include "Donor.h"
#include "Organizer.h"
#include "Staff.h"
#include "BloodCamp.h"
#include "GuestUser.h"
#include "RegisteredUser.h"
#include "Report.h"
#include <iostream>
using namespace std;
int main()
{
	//---- Object creation ------
	GuestUser* rg = new RegisteredUser(); // Object - RegisteredUser class
	RegisteredUser* donor = new Donor(); // Object - Donor class
	RegisteredUser* organizer = new Organizer(); // Object - Organizer class
	BloodCamp* BC = new BloodCamp(); // Object - BloodCamp class
	Staff* staff = new Staff(); // Object - Staff class
	Report* report = new Report(); // Object - Report class

	//----Method Calling------
	rg->login();
	rg->displayDetails();
	donor->login();
	donor->displayDonorDetails();
	organizer->login();
	organizer->displayOrganizerDetails();
	BC->updateBloodCampDetails();
	BC->deleteBloodCampDetails();              
	BC->displayBloodCampDetails();
	report->donorReports();
	report->bloodCampReports();
	report->staffReports();
	report->organizerReports();

	//----Delete Dynamic objects------
	delete rg;
	delete donor;
	delete organizer;
	delete BC;
	delete report;
	return 0;
}

