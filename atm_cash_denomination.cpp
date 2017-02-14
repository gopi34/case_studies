#include <iostream>
using namespace std;

int main() {

int totalBalance,userWithdraw,bal;
int deno[4] = {2000,1000,500,100};

cout << "Enter how much you want to withdraw? ";
cin >> userWithdraw; 

bal = userWithdraw;
while(totalBalance!=userWithdraw){
	for (int i = 0;i<sizeof(deno)/sizeof(int);i++){
		if(deno[i] <= bal){
			totalBalance = totalBalance + deno[i];
			cout << "Adding money" << totalBalance << "\n";
			bal = userWithdraw - totalBalance;
			cout << "balance" << bal << "\n";
		break;			
		}
	}
}
cout << totalBalance << "\n";
return 0;
}
