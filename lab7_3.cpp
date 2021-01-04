#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
int age;
cout<<"Enter your age: ";
cin>>age;
string r;
int high,money;
if(age<=20){
	cout<<"Enter your height: ";
	cin>>high;
		if(high<160){r="UNFRIEND";}
		else if(high>=160&&high<175){r="FRIEND";}
		else{
		cout<<"Enter your property: ";
		cin>>money;
				if(money>69000000){r="MARRIED";}
				else{r="ONE-NIGHT-STAND";}
			}
  		  }
else if(age>20&&age<30){
 	cout<<"Enter your property: ";
		cin>>money;
				if(money>10000000){r="BEST FRIEND";}
				else{r="UNFRIEND";}
			}
else{r="UNFRIEND";}	
cout<<"Your status = "<<r;
	return 0;
}
