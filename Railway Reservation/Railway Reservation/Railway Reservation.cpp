#include<iostream>
#include<sstream>
#include<string>
#include<fstream>
using namespace std;

float cnum2(string ans7)
{
	if (ans7 == "M-A1" || ans7 == "A1-M")
	{
		return 120.00;
	}
	else if (ans7 == "A-A1" || ans7 == "A1-A")
	{
		return 200.00;
	}
	else if (ans7 == "M-A" || ans7 == "A-M")
	{
		return 320.00;
	}
	else if (ans7 == "A1-M")
	{
		return 120.00;
	}
	else if (ans7 == "M-B1" || ans7 == "B1-M")
	{
		return 300.00;
	}
	else if (ans7 == "M-B" || ans7 == "B-M")
	{
		return 400.00;
	}
	else if (ans7 == "B-A1")
	{
		return 300.00;
	}
	else if (ans7 == "B1-A1")
	{
		return 110.00;
	}
	else if (ans7 == "B1-B" || ans7 == "B-B1")
	{
		return 100.00;
	}
	else if (ans7 == "M-C1" || ans7 == "C1-M")
	{
		return 160.00;
	}
	else if (ans7 == "M-C" || ans7 == "C-M")
	{
		return 340.00;
	}
	else if (ans7 == "C1-C" || ans7 == "C-C1")
	{
		return 180.00;
	}
	else
	{
		return NULL;
	}
}
float cnum3(string ans7)
{
	if (ans7 == "M-A1" || ans7 == "A1-M")
	{
		return 70.00;
	}
	else if (ans7 == "A-A1" || ans7 == "A1-A")
	{
		return 120.00;
	}
	else if (ans7 == "M-A" || ans7 == "A-M")
	{
		return 210.00;
	}
	else if (ans7 == "A1-M")
	{
		return 70.00;
	}
	else if (ans7 == "M-B1" || ans7 == "B1-M")
	{
		return 180.00;
	}
	else if (ans7 == "M-B" || ans7 == "B-M")
	{
		return 220.00;
	}
	else if (ans7 == "B-A1")
	{
		return 180.00;
	}
	else if (ans7 == "B1-A1")
	{
		return 110.00;
	}
	else if (ans7 == "B1-B" || ans7 == "B-B1")
	{
		return 55.00;
	}
	else if (ans7 == "M-C1" || ans7 == "C1-M")
	{
		return 90.00;
	}
	else if (ans7 == "M-C" || ans7 == "C-M")
	{
		return 180.00;
	}
	else if (ans7 == "C1-C" || ans7 == "C-C1")
	{
		return 100.00;
	}
	else
	{
		return NULL;
	}
}

int main()
{
	char arr[100];
	string date;
	string answer1, answer2, answer3, answer4, answer5, answer6, answer7, answer11, answer14, answer16;
	float answer9, answer15;
	int answer12, answer18, answer19, answer20;
	string answer8;

	cout << "*.Enter your name : ";
	cin.getline(arr, 100);

	cout << endl;

	cout << "*.Enter the date as date-month-year: ";
	getline(cin, date);

	cout << "\n\n" << endl;

	cout << "\t----------WELCOME TO RAILWAY TICKET RESERVATION SYSTEM.------------" << endl << endl;

	cout << "*.Do you want to know about time table(yes/no):";
	getline(cin, answer1);

	cout << endl;

	if (answer1 == "yes")
	{
		std::string line_;
		ifstream file_("time_table.txt");
		if (file_.is_open())
		{
			while (getline(file_, line_))
			{
				std::cout << line_ << "\n";
			}
			file_.close();
		}
		std::cin.get();

		cout << "*.Do you want to know about Ticket price table(yes/no):";
		getline(cin, answer2);

		cout << endl;

		if (answer2 == "yes")
		{
			std::string line_;
			ifstream file_("price_table.txt");
			if (file_.is_open())
			{
				while (getline(file_, line_))
				{
					std::cout << line_ << "\n";
				}
				file_.close();
			}
			std::cin.get();

		}
		else if (answer2 == "no")
		{
			cout << endl;
		}
		else
		{
			cout << endl;
		}
	}
	if (answer1 == "no")
	{

		cout << "*.Do you want to know about Ticket price table(yes/no):";
		getline(cin, answer2);

		cout << endl;

		if (answer2 == "yes")
		{
			std::string line_;
			ifstream file_("price_table.txt");
			if (file_.is_open())
			{
				while (getline(file_, line_))
				{
					std::cout << line_ << "\n";
				}
				file_.close();
			}
			std::cin.get();

		}
		else if (answer2 == "no")
		{
			cout << endl;
		}
		else
		{
			cout << endl;
		}
	}
	else
	{
		cout << "Invalid answer!";
	}
	cout << "*.Do you want to know about the time of your train???(yes/no): ";
	getline(cin, answer3);

	cout << endl;

	if (answer3 == "yes")
	{
		cout << "->Enter your route as(M-A or A-M or M-B or B-M or M-C or C-M): ";
		getline(cin, answer4);

		if (answer4 == "M-A")
		{
			cout << "Departure_Time" << "\t" << "Arrival_Time" << endl;
			cout << "06:00" << "\t\t" << "10:45" << endl;
			cout << "10:00" << "\t\t" << "14:30" << endl;
			cout << "16:00" << "\t\t" << "20:45" << endl;
		}
		else if (answer4 == "A-M")
		{
			cout << "Departure_Time" << "\t" << "Arrival_Time" << endl;
			cout << "05:45" << "\t\t" << "10:30" << endl;
			cout << "13:00" << "\t\t" << "16:30" << endl;
			cout << "16:00" << "\t\t" << "20:30" << endl;
		}
		else if (answer4 == "M-B")
		{
			cout << "Departure_Time" << "\t" << "Arrival_Time" << endl;
			cout << "16:10" << "\t\t" << "11:00" << endl;
			cout << "17:00" << "\t\t" << "22:00" << endl;
		}
		else if (answer4 == "B-M")
		{
			cout << "Departure_Time" << "\t" << "Arrival_Time" << endl;
			cout << "06:00" << "\t\t" << "10:45" << endl;
			cout << "17:00" << "\t\t" << "22:00" << endl;
		}
		else if (answer4 == "M-C")
		{
			cout << "Departure_Time" << "\t" << "Arrival_Time" << endl;
			cout << "05:00" << "\t\t" << "10:30" << endl;
			cout << "07:00" << "\t\t" << "12:30" << endl;
			cout << "12:00" << "\t\t" << "17:00" << endl;
			cout << "16:00" << "\t\t" << "21:00" << endl;
		}
		else if (answer4 == "C-M")
		{
			cout << "Departure_Time" << "\t" << "Arrival_Time" << endl;
			cout << "05:30" << "\t\t" << "11:00" << endl;
			cout << "07:00" << "\t\t" << "12:30" << endl;
			cout << "12:30" << "\t\t" << "17:30" << endl;
			cout << "16:20" << "\t\t" << "21:00" << endl;
		}

		else
		{
			cout << endl;
		}
	}
	else
	{
		cout << endl;
	}

	cout << endl;

	cout << "*.Do you want to know about the price of your ticket???(yes/no):";
	getline(cin, answer6);

	cout << endl;

	if (answer6 == "yes")
	{
		cout << "->Enter your stations as(M-A1 or A1-M or A-A1 or A1A or M-A or A-M or M-B1 or B1-M or M-B or B-M or B-A1 or B1-A1 or B1-B or B-B1 or M-C1 or C1-M or M-C or C-M or C1-C or C-C1) : ";
		getline(cin, answer7);

		if (answer7 == "M-A1" || answer7 == "A1-M")
		{
			cout << "2nd_class" << "\t" << "3rd_class" << endl;
			cout << "120.00" << "\t\t" << "70.00" << endl;
		}
		else if (answer7 == "A-A1" || answer7 == "A1-A")
		{
			cout << "2nd_class" << "\t" << "3rd_class" << endl;
			cout << "200.00" << "\t\t" << "120.00" << endl;
		}
		else if (answer7 == "M-A" || answer7 == "A-M")
		{
			cout << "2nd_class" << "\t" << "3rd_class" << endl;
			cout << "320.00" << "\t\t" << "210.00" << endl;
		}
		else if (answer7 == "A1-M")
		{
			cout << "2nd_class" << "\t" << "3rd_class" << endl;
			cout << "120.00" << "\t\t" << "70.00" << endl;
		}
		else if (answer7 == "M-B1" || answer7 == "B1-M")
		{
			cout << "2nd_class" << "\t" << "3rd_class" << endl;
			cout << "300.00" << "\t\t" << "180.00" << endl;
		}
		else if (answer7 == "M-B" || answer7 == "B-M")
		{
			cout << "2nd_class" << "\t" << "3rd_class" << endl;
			cout << "400.00" << "\t\t" << "220.00" << endl;
		}
		else if (answer7 == "B-A1")
		{
			cout << "2nd_class" << "\t" << "3rd_class" << endl;
			cout << "300.00" << "\t\t" << "180.00" << endl;
		}
		else if (answer7 == "B1-A1")
		{
			cout << "2nd_class" << "\t" << "3rd_class" << endl;
			cout << "110.00" << "\t\t" << "60.00" << endl;
		}
		else if (answer7 == "B1-B" || answer7 == "B-B1")
		{
			cout << "2nd_class" << "\t" << "3rd_class" << endl;
			cout << "100.00" << "\t\t" << "55.00" << endl;
		}
		else if (answer7 == "M-C1" || answer7 == "C1-M")
		{
			cout << "2nd_class" << "\t" << "3rd_class" << endl;
			cout << "160.00" << "\t\t" << "90.00" << endl;
		}
		else if (answer7 == "M-C" || answer7 == "C-M")
		{
			cout << "2nd_class" << "\t" << "3rd_class" << endl;
			cout << "340.00" << "\t\t" << "180.00" << endl;
		}
		else if (answer7 == "C1-C" || answer7 == "C-C1")
		{
			cout << "2nd_class" << "\t" << "3rd_class" << endl;
			cout << "180.00" << "\t\t" << "100.00" << endl;
		}
		else
		{
			cout << endl;
		}
	}
	else if (answer6 == "no")
	{
		cout << endl;
	}
	else
	{
		cout << "Your stations not available" << endl;
	}

	cout << endl;

	cout << "*.Do you want to book the tickets???(yes/no): ";
	getline(cin, answer8);

	cout << endl;

	if (answer8 == "yes")
	{
		cout << "->Enter your train class number (2/3) :";
		cin >> answer12;

		cout << endl;

		if (answer12 == 2)
		{
			cout << endl;

			cout << "->How many seats do you want to book??? : ";
			cin >> answer9;

			ofstream file_;
			file_.open("TICKETS.txt");
			file_ << "Name :" << arr << "\t" << "Date :" << date << endl;
			file_ << "Stations :" << answer7 << endl;
			file_ << "Class number :" << answer12 << endl;
			file_ << "Ticket price :" << cnum2(answer7) << endl;
			file_ << "No. of seats :" << answer9 << endl;
			file_ << "Total price for seats :" << answer9 * cnum2(answer7) << endl;
			file_ << "Valid Tickets." << endl;
			file_ << "--------------------------------------------------------------------------" << endl;
			file_.close();
			std::cin.get();
			cout << "your booking successfully!!!";
		}
		else if (answer12 == 3)
		{
			cout << endl;

			cout << "->How many seats do you want to book??? : ";
			cin >> answer15;

			ofstream file_;
			file_.open("TICKETS.txt");
			file_ << "Name :" << arr << "\t" << "Date :" << date << endl;
			file_ << "Stations :" << answer7 << endl;
			file_ << "Class number :" << answer12 << endl;
			file_ << "Ticket price :" << cnum3(answer7) << endl;
			file_ << "No. of seats :" << answer15 << endl;
			file_ << "Total price for seats :" << answer15 * cnum3(answer7) << endl;
			file_ << "Valid Tickets." << endl;
			file_ << "--------------------------------------------------------------------------" << endl;
			file_.close();
			std::cin.get();
			cout << "your booking successfully!!!";
		}
		else
		{
			cout << "Invalid class number" << endl;
		}
	}
	else if (answer8 == "no")
	{
		cout << "*.Do you want to cancel the tickets???(yes/no) :";
		getline(cin, answer11);

		cout << endl;

		if (answer11 == "yes")
		{
			cout << "->Enter your train class number(2/3) :";
			cin >> answer18;

			cout << endl;

			if (answer18 == 2)
			{
				cout << endl;

				cout << "->How many seats did you booked??? :";
				cin >> answer19;

				ofstream file_;
				file_.open("CANCELED_TICKETS.txt");
				file_ << "Name :" << arr << "\t" << "Date :" << date << endl;
				file_ << "Stations :" << answer7 << endl;
				file_ << "Class number :" << answer18 << endl;
				file_ << "Ticket price :" << cnum2(answer7) << endl;
				file_ << "No. of seats :" << answer19 << endl;
				file_ << "Total price for seats :" << answer19 * cnum2(answer7) << endl;
				file_ << "Canceled Tickets." << endl;
				file_ << "--------------------------------------------------------------------------" << endl;
				file_.close();
				std::cin.get();
				cout << "Successfully canceled your booking!!!";
			}
			else if (answer18 == 3)
			{
				cout << endl;

				cout << "->How many seats did you booked??? :";
				cin >> answer20;

				ofstream file_;
				file_.open("CANCELED_TICKETS.txt");
				file_ << "Name :" << arr << "\t" << "Date :" << date << endl;
				file_ << "Stations :" << answer7 << endl;
				file_ << "Class number :" << answer18 << endl;
				file_ << "Ticket price :" << cnum3(answer7) << endl;
				file_ << "No. of seats :" << answer20 << endl;
				file_ << "Total price for seats :" << answer20 * cnum3(answer7) << endl;
				file_ << "Canceled Tickets." << endl;
				file_ << "--------------------------------------------------------------------------" << endl;
				file_.close();
				std::cin.get();
				cout << "Successfully canceled your booking!!!";
			}

			else
			{
				cout << "Invalid request!!!" << endl;
			}
		}
	}
	else
	{
		cout << "Invalid request!!!";
	}
	cout << endl;

	cout << "Thank you for visiting us!!!";
	return 0;
}