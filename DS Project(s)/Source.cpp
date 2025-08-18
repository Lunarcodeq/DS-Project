#include <iostream>
#include "clsQueueLine.h"

using namespace std;

int main() {

	clsQueueLine PayBillTickets("A0", 5);

	PayBillTickets.IssueTicket();
	PayBillTickets.IssueTicket();
	PayBillTickets.IssueTicket();
	PayBillTickets.IssueTicket();
	PayBillTickets.IssueTicket();

	cout << "\nQueue Info: \n";
	PayBillTickets.PrintInfo();

	PayBillTickets.PrintTicketsLineRTL();
	PayBillTickets.PrintTicketsLineLTR();

	PayBillTickets.PrintAllTickets();

	system("pause>0");

	return 0;
}