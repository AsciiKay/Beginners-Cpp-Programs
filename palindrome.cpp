#include<iostream>
using namespace std;
int main()
{
	int n,num,rem,rev=0;
	cout<<"Enter a value \n";
	cin>>num;
	if(num>0){
		n=num;
		while(num!=0){
			rem=num%10;
			rev=rev*10+rem;
			num=num/10;
		}
		cout<<rev<<" is the reversed number \n";
		if(n==rev){
			cout<<n<<" is a palindrome \n";
		}
		else{
			cout<<n<<" is not a palindrome \n";
		}
	}
	else{
		cout<<"Invalid output \n";
	}
}
