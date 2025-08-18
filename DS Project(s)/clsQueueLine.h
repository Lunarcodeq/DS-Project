#pragma once
#pragma warning(disable : 4996)

#include <queue>
#include <stack>
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

using namespace std;

class clsQueueLine
{
private:

	string _Prefix;
	short _TimeToServe;

	int _ServedClients = 0;
	int _WaitingClients = 0;
	int _TotalTickets = 0;

	struct stClient {

		string _TicketDate = _GetSystemDateTimeString();
		string _TicketPrefix;
		short _ServeTime;
		short _ClientsToWait = 0;

	};

	queue <stClient> _QueueLine;
	queue <stClient> _TempQueue;

	static string _GetSystemDateTimeString() {

		time_t t = time(0);
		tm* now = localtime(&t);

		short Day, Month, Year, Hour, Minute, Second;

		Day = now->tm_mday;
		Month = now->tm_mon + 1;
		Year = now->tm_year + 1900;

		Hour = now->tm_hour;
		Minute = now->tm_min;
		Second = now->tm_sec;

		return (to_string(Day) + "/" + to_string(Month) + "/" + to_string(Year)
			+ " - " + to_string(Hour) + ":" + to_string(Minute) + ":" + to_string(Second));

	}

	void _PrintTicket(stClient Client) {

		cout << setw(36) << left << "" << "________________________\n\n";

		cout << setw(41) << left << "" << "\t" << Client._TicketPrefix << "\n\n";
		cout << setw(41) << left << "" << Client._TicketDate << "\n";
		cout << setw(41) << left << "" << "Waiting Clients: " << Client._ClientsToWait << "\n";
		cout << setw(41) << left << "" << "Serve Time In\n";
		cout << setw(41) << left << "" << Client._ServeTime << " Minute(s).\n";

		cout << setw(36) << left << "" << "________________________\n\n";

	}

public:

	clsQueueLine(string Prefix, short TimeToServe) {

		_Prefix = Prefix;
		_TimeToServe = TimeToServe;

	}

	void IssueTicket() {

		stClient Client;

		Client._TicketPrefix = _Prefix + to_string(_QueueLine.size() + 1);
		Client._ServeTime = _TimeToServe * (_QueueLine.size());
		Client._ClientsToWait = _QueueLine.size();
		_QueueLine.push(Client);

		_TotalTickets++;
		_WaitingClients++;

	}

	void PrintInfo() {

		cout << setw(33) << left << "" << "__________________________________\n\n";
		cout << setw(37) << left << "" << "\t\tQueue Line" << endl;
		cout << setw(33) << left << "" << "__________________________________\n\n";

		cout << setw(37) << left << "" << "Prefix          : " << _Prefix << endl;
		cout << setw(37) << left << "" << "Total Tickets   : " << _TotalTickets << endl;
		cout << setw(37) << left << "" << "Served Clients  : " << _ServedClients << endl;
		cout << setw(37) << left << "" << "Waiting Clients : " << _WaitingClients << endl << endl;

		cout << setw(33) << left << "" << "__________________________________\n";

	}

	void PrintTicketsLineRTL() {

		cout << "\n\n" << setw(27) << left << "" << "Tickets: ";

		for (int i = 1; i <= _QueueLine.size(); i++) {

			cout << (_Prefix + to_string(i)) + " <-- ";

		}

	}

	void PrintTicketsLineLTR() {


		cout << "\n\n" << setw(27) << left << "" << "Tickets: ";

		for (int i = _QueueLine.size(); i > 0; i--) {

			cout << (_Prefix + to_string(i)) + " --> ";

		}

	}

	void PrintAllTickets() {

		_TempQueue = _QueueLine;

		cout << "\n\n\n\n" << setw(41) << left << "" << " ---Tickets---\n";

		while (!_TempQueue.empty()) {

			_PrintTicket(_TempQueue.front());
			_TempQueue.pop();

		}

	}

};

