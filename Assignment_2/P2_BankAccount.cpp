#include<iostream>
using namespace std;
class Account {
private:
	int balance;
public:
	Account(int balance=0) {
		this->balance=balance;
	}
	void setbalance(int z)
	{
		if (z>0) {
			this->balance=z;
		}
		else {
			cout<<"Invalid Initial Balance!"<<endl;
			exit(0);
		}
	}
	void credit()
	{
		int x;
		cout<<"Enter the credit balance!"<<endl;
		cin>>x;
		balance=balance+x;
	}
	void debit()
	{
		int y;
		cout<<"Enter the debit amount!"<<endl;
		cin>>y;
		if (y>balance) {
			cout<<"the debit exceeds account balance!"<<endl;
		}
		else {
			balance=balance-y;
		}

	}
	int getbalance() {
		return balance;
	}
};
int main() {
	Account a1, a2;
	int i, balance1, balance2, choice;
	for (i=1;i<=2;i++) {
		if (i==1) {
			cout<<"Enter the balance in account 1:  ";
			cin>>balance1;
			a1.setbalance(balance1);
		}
		else {
			cout<<"Enter the balance in account 2: ";
			cin>>balance2;
			a2.setbalance(balance2);
		}
		cout<<"Enter Choice \n 1.Debit \n 2.Credit";
		cin>>choice;
		switch (choice) {
		case 1:
			if (i==1)
				a1.debit();
			if (i==2)
				a2.debit();
			break;
		case 2:
			if (i==1)
				a1.credit();
			if (i==2)
				a2.credit();
			break;
		default:
			cout<<"invalid choice!"<<endl;
		}
		if (i==1)
			cout<<"New Balance of Account 1: "<<a1.getbalance()<<endl;
		if (i==2)
			cout<<"New Balance of Account 2: "<<a2.getbalance()<<endl;
	}
	return 0;
}







