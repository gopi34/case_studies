#include <iostream>
#include <sstream>
using namespace std;

class billTotal {
private:
    int same_call;
    int other_call;
    int same_sms;
    int other_sms;
    int same_mms;
    int other_mms;
    int total;
    
public:
    int getBill(int sc, int oc, int ss, int os, int sm, int om){
        same_call = 50;
        other_call = 100;
        same_sms = 50;
        other_sms = 100;
        same_mms = 300;
        other_mms = 400;
        total = sc * same_call + oc * other_call + ss * same_sms + os * other_sms + sm * same_mms + om * other_mms;
        cout << " \n Total bill for your mobile is "<< total << "\n \n";
        return total;
    }
};

int main()
{
   billTotal bill;
   cout << "Hello World" << endl; 
   bill.getBill(10,20,15,25,20,30);
   return 0;
}

