#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int number, guess, count=0;
	
	srand(time(0));
	number = rand()%100+1;
	
	do{
		cout << "Enter the number you choose between 1 to 100:";
		cin >> guess;
		count++;
		if(guess > number){
			cout << "Your guess is larger!, enter chota" << endl;
		}
		else if(guess < number){
			cout << "Your guess is smaller!, enter bada" << endl;
		}
		else{
			cout << "Congrats!!,you successed in " << count << " attempts";
		}
	}
	while (number != guess);
	
	return 0;
}
