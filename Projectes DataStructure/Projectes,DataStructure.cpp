
#include<iostream>
#include"clsQueueLine.h"
using namespace std;
int main()
{
	clsQueueLine PayBillsQueue("A0", 10);

	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();

	cout << "\nPay Bills Queue Info:\n";
	PayBillsQueue.PrintInfo();

	PayBillsQueue.PrintTicketsLineRTL();
	PayBillsQueue.PrintTicketsLineLTR();

	PayBillsQueue.PrintAllTickets();

	PayBillsQueue.ServeNextClient();
	cout << "\nPay Bills After Serving" << " " << PayBillsQueue.ServedClients() << " " << "Client\n";
	PayBillsQueue.PrintInfo();

	PayBillsQueue.ServeNextClient();
	cout << "\nPay Bills After Serving" << " " << PayBillsQueue.ServedClients() << " " << "Clients\n";
	PayBillsQueue.PrintInfo();

	PayBillsQueue.ServeNextClient();
	cout << "\nPay Bills After Serving" << " " << PayBillsQueue.ServedClients() << " " << "Clients\n";
	PayBillsQueue.PrintInfo();

	PayBillsQueue.ServeNextClient();
	cout << "\nPay Bills After Serving" << " " << PayBillsQueue.ServedClients() << " " << "Clients\n";
	PayBillsQueue.PrintInfo();

	PayBillsQueue.ServeNextClient();
	cout << "\nPay Bills After Serving" << " " << PayBillsQueue.ServedClients()<<" " << "Clients\n";
	PayBillsQueue.PrintInfo();



	return 0;
}



