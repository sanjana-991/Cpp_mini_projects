//Simple Banking System
//Creating functions for depositing,withdrawing and checking account balance
#include<stdio.h>
#include<math.h>
int deposit(int amount, int account_balance);
int withdraw(int amount, int account_balance);
int check_balance(int account_balance);
int main()
{
	int choice;
	int amount;
	int account_balance = 1000;
	printf("Hey user WELCOME!!!\n");
	printf("Enter your choice for today:");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			deposit(amount,account_balance);
			break;
		case 2:
			withdraw(amount,account_balance);
			break;
		case 3:
			check_balance(account_balance);
			break;
		default:
			printf("Invalid choice. Please check again.");
			main();
			break;
			
	}
	printf("*****THANK YOU*****\n");
}
int deposit(int amount, int account_balance)
{
	printf("Enter the amount you want to deposit:\n");
	scanf("%d", &amount);
	if(amount<=0)
		printf("Invalid amount\n");
	else
		account_balance += amount;
		printf("Your account balance is:%d\n",account_balance);
		return amount;
}
int withdraw(int amount, int account_balance)
{
	printf("Enter the amount you want to withdraw:\n");
	scanf("%d", &amount);
	if(amount<=0)
		printf("Invalid amount\n");
	else
		account_balance -= amount;
		printf("Your account balance is:%d\n",account_balance);
		return amount;
}
int check_balance(int account_balance)
{
	printf("Your current balance is:%d\n",account_balance);
	return account_balance;
}

