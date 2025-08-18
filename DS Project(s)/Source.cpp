#include <iostream>
#include "clsQueueLine.h"

using namespace std;

int main() {

	clsQueueLine PayBillTickets("A0", 10);
	clsQueueLine SubscriptionsQueue("B0", 5);

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

	PayBillTickets.ServeNextClient();
	cout << "\nQueue line after serving one client: \n";
	PayBillTickets.PrintInfo();

	// Subscriptions --------------------------

	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();

	cout << "\nSubscriptions queue Info: \n";
	SubscriptionsQueue.PrintInfo();

	SubscriptionsQueue.PrintTicketsLineRTL();
	SubscriptionsQueue.PrintTicketsLineLTR();

	SubscriptionsQueue.PrintAllTickets();

	SubscriptionsQueue.ServeNextClient();
	cout << "\nSubscription Queue line after serving one client: \n";
	SubscriptionsQueue.PrintInfo();

	system("pause>0");

	return 0;
}