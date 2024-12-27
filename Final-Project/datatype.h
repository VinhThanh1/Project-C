// noi cac em di import nhung thu vien, khai bao cac struct
#include<stdbool.h>
struct Date{
	int mont,day,year;
};
struct Transaction{
	char transferId[50];
	char receivingId[50];
	double amount;
	char type[10];
	char message[50];
	struct Date transactionDate;
};
struct AccountInfo{
	char userId[20];
	float balance;
	bool status;
	struct Transaction transactionHistory[];
};
struct User{
	char userId[10];
	char name[20];
	struct Date dateOfBirth;
	bool gender;
	char phone[10];
	char email[20];
};
