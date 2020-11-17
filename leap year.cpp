#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter year \n";
	cin>>year;
	
	if (year%4==0) {
		
		if (year%100==0){
			
			if (year%400==0){
				cout<<"This is a leap year \n";
			}
			else {
				cout<<"This is not a leap year \n";
			}
			
		}
		else {
				cout<<"This is a leap year \n";
			}
	}
	else {
		cout<<"This is not a leap year \n";
	}
}
