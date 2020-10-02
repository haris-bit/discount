#include<iostream>
using namespace std;
int main(){
	char op = 'n';   //n stands no
do{
	
	cout<<"Welcome to the discount calculator: "<<endl;
	cout<<"Press Enter key to continue..."<<endl;
	getchar();
	double actual;
	double per;
	double sub;
	double after;
	cout<<"Original Price:"<<endl;
	cin>>actual;
	cout<<"Enter how much discount(without the percentage sign): "<<endl;
	cin>>per;
	sub = (actual * per/100); //the money saved   //annotation: in DMAS, div and mul have the same precedence level
	after = actual - sub; //subtracted the actual amount with the discounted amount
	cout<<endl<<endl;
	cout<<"You Pay: "<<after<<"Rs"<<endl;
	cout<<"You're Saving: "<<sub<<"Rs"<<endl;
	
	cout<<endl;
	cout<<"Would you like to compute more?(y/n)"<<endl;
	cin>>op;
}
while(op=='y'||op=='Y');	
	return 0;
	}

