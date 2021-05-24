#include <iostream>
using namespace std;
int main(){
	
	
	
	string name ;
	string month;
	string sign;
	int date;
	char res;
	do{
	cout<<"Welcome to Zodiac Signs Finder'"<<endl;
	cout<<"Enter name :"<<endl;
	cin>>name;
	
	
	cout<<"Please Enter Birthmonth"<<endl;
	cout<<"(ex: FEBRUARY)**all caps "<<endl;
	cin>>month;
	
	if(month == "JANUARY"){
		cout<<"Enter Date: "<<endl;
		cin>>date;
		if(date <= 19 && date != 0){
			sign = "CAPRICORN" ;
		
		}
		else if(date >=20 && date <=31){
			sign = "AQUARIUS" ;
		}
		
		else{
			cout<<"invalid input";
			cout<<"Do you want to try again Y/N"<<endl;
	cin>>res;
		}
	}
	
	
	else if(month == "FEBRUARY"){
		cout<<"Enter Date: "<<endl;
		cin>>date;
		if(date <= 18 && date != 0){
			sign = "AQUARIUS" ;
		
		}
		else if(date >=19 && date <=28){
			sign = "PISCES" ;
		}
		
		else{
			cout<<"invalid input"<<endl;
			cout<<"Do you want to try again Y/N"<<endl;
	cin>>res;
		}
	}
	else if(month == "MARCH"){
		cout<<"Enter Date: "<<endl;
		cin>>date;
		if(date <= 20 && date != 0){
			sign = "PISCES" ;
		
		}
		else if(date >=21 && date <=31){
			sign = "ARIES" ;
		}
		
		else{
			cout<<"invalid input"<<endl;
			cout<<"Do you want to try again Y/N"<<endl;
	cin>>res;
		}
	}
	else if(month == "APRIL"){
		cout<<"Enter Date: "<<endl;
		cin>>date;
		if(date <= 19 && date != 0){
			sign = "ARIES" ;
		
		}
		else if(date >=20 && date <=30){
			sign = "TAURUS" ;
		}
		
		else{
			cout<<"invalid input"<<endl;
			cout<<"Do you want to try again Y/N"<<endl;
	cin>>res;
		}
	}
	else if(month == "MAY"){
		cout<<"Enter Date: "<<endl;
		cin>>date;
		if(date <= 20 && date != 0){
			sign = "ARIES" ;
		
		}
		else if(date >=21 && date <=31){
			sign = "GEMINI" ;
		}
		
		else{
			cout<<"invalid input"<<endl;
			cout<<"Do you want to try again Y/N"<<endl;
	cin>>res;
		}
	}
	else if(month == "JUNE"){
		cout<<"Enter Date: "<<endl;
		cin>>date;
		if(date <= 20 && date != 0){
			sign = "GEMINI" ;
		
		}
		else if(date >=21 && date <=30){
			sign = "CANCER" ;
		}
		
		else{
			cout<<"invalid input"<<endl;
			cout<<"Do you want to try again Y/N"<<endl;
	cin>>res;
		}
	}
	else if(month == "JULY"){
		cout<<"Enter Date: "<<endl;
		cin>>date;
		if(date <= 22 && date != 0){
			sign = "CANCER" ;
		
		}
		else if(date >=23 && date <=31){
			sign = "LEO" ;
		}
		
		else{
			cout<<"invalid input"<<endl;
			cout<<"Do you want to try again Y/N"<<endl;
	cin>>res;
		}
	}
	else if(month == "AUGUST"){
		cout<<"Enter Date: "<<endl;
		cin>>date;
		if(date <= 22 && date != 0){
			sign = "LEO" ;
		
		}
		else if(date >=23 && date <=31){
			sign = "VIRGO" ;
		}
		
		else{
			cout<<"invalid input"<<endl;
			cout<<"Do you want to try again Y/N"<<endl;
	cin>>res;
		}
	}
	else if(month == "SEPTEMBER"){
		cout<<"Enter Date: "<<endl;
		cin>>date;
		if(date <= 22 && date != 0){
			sign = "VIRGO" ;
		
		}
		else if(date >=23 && date <=30){
			sign = "LIBRA" ;
		}
		
		else{
			cout<<"invalid input"<<endl;
			cout<<"Do you want to try again Y/N"<<endl;
	cin>>res;
		}
	}
	else if(month == "OCTOBER"){
		cout<<"Enter Date: "<<endl;
		cin>>date;
		if(date <= 22 && date != 0){
			sign = "LIBRA" ;
		
		}
		else if(date >=23 && date <=31){
			sign = "SCORPIO" ;
		}
		
		else{
			cout<<"invalid input"<<endl;
			cout<<"Do you want to try again Y/N"<<endl;
	cin>>res;
		}
	}
	else if(month == "NOVEMBER"){
		cout<<"Enter Date: "<<endl;
		cin>>date;
		if(date <= 21 && date != 0){
			sign = "SCORPIO" ;
		
		}
		else if(date >=22 && date <=30){
			sign = "SAGITTARIUS" ;
		}
		
		else{
			cout<<"invalid input"<<endl;
			cout<<"Do you want to try again Y/N"<<endl;
	cin>>res;
		}
	}
	else if(month == "DECEMBER"){
		cout<<"Enter Date: "<<endl;
		cin>>date;
		if(date <= 21 && date != 0){
			sign = "SAGITTARIUS" ;
		
		}
		else if(date >=22 && date <=31){
			sign = "CAPRICORN" ;
		}
		
		else{
			cout<<"invalid input"<<endl;
			cout<<"Do you want to try again Y/N"<<endl;
	cin>>res;
		}
	}
	
	else{
		cout<<"PLEASE CHECK YOUR INPUTS"<<endl;
		cout<<"Do you want to try again Y/N"<<endl;
	cin>>res;
	}
	cout<<"Congratulations Mr/Ms "<<name<<endl;
	cout<<"Your Zodiac Sign is : "<<sign<<endl;
	cout<<"Do you want to try again Y/N"<<endl;
	cin>>res;
}
 while(res == 'y' || 'Y' && res != 'n' && res != 'N');
	{

 cout<<"THANK YOU FOR USING OUR PROGRAM!"<<endl;}}