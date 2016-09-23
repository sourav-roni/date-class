#include "Date.h"
#include <string.h>
#include <stdlib.h>
#include <ctime>
#include <sstream>
#include <iostream>
#include <string>

//Constructor for the date format class which stores the date format as entered by the
//user. The user is responsible for entering a valid format as there is no provision 
//for try and catch. The valid fromatts for the date are "0","d","dd". The valud formats
//for month are "0","m","mm","mmm". The valid formats for year are "0","yy","yyyy".
DateFormat :: DateFormat(const char* date, const char* month, const char* year)
	{
		int lenDate, lenMonth, lenYear;
		lenDate = strlen(date);
		lenMonth = strlen(month);
		lenYear = strlen(year);
		dateFormat = new char[lenDate+1];
		monthFormat = new char[lenMonth+1];
		yearFormat = new char[lenYear+1];
		strcpy(dateFormat,date);
		strcpy(monthFormat,month);
		strcpy(yearFormat,year);
		/*cout<<"Date Format Created : "<<endl;
		cout<<"Date : "<<dateFormat<<endl;
		cout<<"Month : "<<monthFormat<<endl;
		cout<<"Year : "<<yearFormat<<endl<<endl; */
	}

//Another constructor for the date format class. It takes as an input a string and parses it
//into three segments depending upon the position of the '-' in the input string	
DateFormat :: DateFormat(const char * formatInput)
	{
		//cout<<"hello"<<endl;
		string format;
		format = formatInput;
		int len;
		std::string token ;
		std::string delimiter = "-";
		size_t pos = 0;
		int i = 0;
		while ((pos = format.find(delimiter)) != std::string::npos) {
		    if(i==0)
		    {
		    	//cout<<"pos : "<<pos<<endl;
		    	dateFormat = new char[pos];
		    	const char * copy = format.substr(0, pos).c_str();
		    	strcpy(dateFormat,copy);
		    }
		    if(i==1)
		    {
		    	//cout<<"pos : "<<pos<<endl;
		    	monthFormat = new char[pos];
		    	const char * copy = format.substr(0, pos).c_str();
		    	strcpy(monthFormat,copy);
		    }
		    i++;
		    token = format.substr(0, pos);
		    //std::cout << token << std::endl;
		    format.erase(0, pos + delimiter.length());
		    len = strlen(format.c_str());
		}
		//cout<<"len : "<<len<<endl;
    	yearFormat = new char[len];
    	const char * copy = format.substr(0,len).c_str();
    	strcpy(yearFormat,copy);
		/*cout<<"Date Format Created : "<<endl;
		cout<<"Date : "<<dateFormat<<endl;
		cout<<"Month : "<<monthFormat<<endl;
		cout<<"Year : "<<yearFormat<<endl<<endl;  */
	}

//The default constructor for the date class where the format stored is "dd-mmm-yy"
DateFormat:: DateFormat()
	{	
		dateFormat = new char[3];
		monthFormat = new char[4];
		yearFormat = new char[3];
		strcpy(dateFormat,"dd");
		strcpy(monthFormat,"mmm");
		strcpy(yearFormat,"yy");
		/*cout<<"Default Date Format Created : "<<endl;
		cout<<"Date : "<<dateFormat<<endl;
		cout<<"Month : "<<monthFormat<<endl;
		cout<<"Year : "<<yearFormat<<endl<<endl;*/
	}

//This the destructor for the date format class which justs deletes the three fields
//which were allocated memory during construction.
DateFormat:: ~DateFormat()
	{	
		delete dateFormat;
		delete monthFormat;
		delete yearFormat;
	}

//Helper function for returning the current format of days in the dateformat object
char* DateFormat::getDateFormat()
	{
		return dateFormat;
	}

//Helper function for returning the current format of months in the dateformat object
char* DateFormat::getMonthFormat()
	{
		return monthFormat;
	}

//Helper function for returning the current format of years in the dateformat object
char* DateFormat::getYearFormat()
	{
		return yearFormat;
	}

//Helper function for storing the current format of days in the dateformat object
void DateFormat::setDateFormat(const char * date)
	{
		dateFormat = new char[strlen(date)+1];
		strcpy(dateFormat,date);
	}

//Helper function for storing the current format of months in the dateformat object
void DateFormat::setMonthFormat(const char * month)
	{
		monthFormat = new char[strlen(month)+1];
		strcpy(monthFormat,month);
	}

//Helper function for storing the current format of years in the dateformat object
void  DateFormat::setYearFormat(const char * year)
	{
		yearFormat = new char[strlen(year)+1];
		strcpy(yearFormat,year);
	}

//Definition of the static data member format of the Date class
DateFormat Date::format;

//The use of this function is to set the date format during runtime
void Date::setFormat(DateFormat& dFormat)
	{
		format.setDateFormat(dFormat.getDateFormat());
		format.setMonthFormat(dFormat.getMonthFormat());
		format.setYearFormat(dFormat.getYearFormat());
	}

//This function is used to retrive the dateFormat of the Date class
DateFormat& Date::getFormat()
	{
		return format;
	}

//Helper function to check whether a date entered is valid or not
bool Date::checkInvalid(Day d,Month m,Year y) const
	{
		if(d<=0||d>=32||m<=0||m>12)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

//Helper function to check whether the date entered is a valid triplet or not
bool Date::checkDomain(Day d,Month m,Year y) const
	{
		if(strlen(std::to_string(y).c_str())!=4)
		{
			return false;
		}
		if(m==4||m==6||m==9||m==11)
		{
			if(d==31)
			{
				return false;
			}
		}
		if(m==2)
		{
			if(y%400==0||y%4==0&&y%100!=0)
			{
				if(d==30||d==31)
				{
					return false;
				}
			}
			else 
			{
				if(d==29||d==30||d==31)
				{
					return false;
				}
			}
		}
		return true;
	}

//Helper function to find whether the date entered lies in between 01-01-1950 and 31-12-2049
bool Date::checkRange(Day d,Month m,Year y) const
	{
		if(y<1950||y>2049)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

//Helper function to get the sole data member of the Out_Of_Range class.
//This is used in printing the exception
int Out_Of_Range::get() const
	{
		return rangeYear;
	}

//Friend function of the Invalid_Argument class. Also used for printing
ostream& operator<<(ostream& os, const Invalid_Argument& invalid)
	{
		os<<"Error:Invalid Argument";
		return os;
	}

//Friend function of the Domain_Error class. Also used for printing. 
ostream& operator<<(ostream& os, const Domain_Error& derror)
	{
		os<<"Error:Domain Error";
		return os;
	}

//Friend function of the Out_Of_Range class. Also used for printing
ostream& operator<<(ostream& os, const Out_Of_Range& oRange)
	{
		os<<"Error: Out Of Range : Year "<<int(oRange.get())<<" is not valid";
		return os;
	}

//Constructor of the class which accepts three arguments seperately
Date::Date(Day d1,Month m1,Year y1)
	throw(Invalid_Argument, 
		Domain_Error, 
		Out_Of_Range)
	{
		//cout<<"len : "<<strlen(std::to_string(y).c_str())<<endl;
		if(strlen(std::to_string(y1).c_str())==2)
		{
			if(y1>=0&&y1<=49)
			{
				y1 = 2000 + y1;				
			}
			else
			{
				y1 = 1900+y1;
			}
		}
		if(checkInvalid(d1,m1,y1)==false)
		{
			cout<<"The Date Entered : "<<d1<<"-"<<m1<<"-"<<y1<<" is Invalid"<<endl;
			throw Invalid_Argument();
		}
		if(checkDomain(d1,m1,y1)==false)
		{
			cout<<"The Date Entered : "<<d1<<"-"<<m1<<"-"<<y1<<" is not in Domain"<<endl;
			throw Domain_Error();
		}
		if(checkRange(d1,m1,y1)==false)
		{
			cout<<"The Date Entered : "<<d1<<"-"<<m1<<"-"<<y1<<" is Out_Of_Range"<<endl;
			throw Out_Of_Range(y1);
		}
		this->day = d1;
		this->month = m1;
		this->year = y1;
	}

//Another constructor of the Date Class accepting only a single string.
//This function the parses the string according to current date Format.
Date::Date(const char* date)
	throw(Invalid_Argument, Domain_Error, Out_Of_Range)
	{
		if((strcmp(format.getDateFormat(),"d")==0||strcmp(format.getDateFormat(),"dd")==0)&&(strcmp(format.getMonthFormat(),"m")==0||strcmp(format.getMonthFormat(),"mm")==0)&&(strcmp(format.getYearFormat(),"yy")==0||strcmp(format.getYearFormat(),"yyyy")==0))
		{
			int dl,ml,yl;
			dl = strlen(format.getDateFormat());
			ml = strlen(format.getMonthFormat());
			yl = strlen(format.getYearFormat());
			std::string s1 = format.getDateFormat();
			s1 = s1 + "-";
			s1 = s1 + format.getMonthFormat();
			s1 = s1 + "-";
			s1 = s1 + format.getYearFormat();
			//cout<<s1<<endl;
			string form;
			form = date;
			int len;
			Day d1;
			Month m1;
			Year y1;
			std::string token ;
			std::string delimiter = "-";
			size_t pos = 0;
			int i = 0;
			while ((pos = form.find(delimiter)) != std::string::npos) {
			    if(i==0 &&(((dl==1)&&(pos==1||pos==2))||((dl==2)&&(pos==2))))
			    {
			    	//cout<<"pos : "<<pos<<endl;
			    	d1 = (Day)(atoi(form.substr(0, pos).c_str()));
			    }
			    else if(i==1&&(((ml==1)&&(pos==1||pos==2))||((ml==2)&&(pos==2))))
			    {
			    	//cout<<"pos : "<<pos<<endl;
			    	m1 = (Month)(atoi(form.substr(0, pos).c_str()));
			    }
			    else
			    {
			    	cout<<"Entered date "<<date<<" cannot be parsed with current date format"<<endl;
			    	throw Invalid_Argument();
			    }
			    i++;
			    token = form.substr(0, pos);
			    //std::cout << token << std::endl;
			    form.erase(0, pos + delimiter.length());
			    len = strlen(form.c_str());
			}
			//cout<<"len : "<<len<<endl;
			if(yl==2&&len==2)
			{
				if(atoi(form.substr(0,len).c_str())>=0&&atoi(form.substr(0,len).c_str())<=49)
				{
					y1 = (Year)(2000+(atoi(form.substr(0,len).c_str())));				
				}
				else
				{
					y1 = (Year)(1900+(atoi(form.substr(0,len).c_str())));
				}
			}
			else if(yl==4&&len==4)
			{
				//cout<<"yes"<<endl;
				y1 = (Year)(atoi(form.substr(0,len).c_str()));
			}
			else
			{
				cout<<"Entered date "<<date<<" cannot be parsed with current date format"<<endl;
			    throw Invalid_Argument();
			}
			if(checkInvalid(d1,m1,y1)==false)
			{
				cout<<"The Date Entered : "<<date<<" is Invalid"<<endl;
				throw Invalid_Argument();
			}
			if(checkDomain(d1,m1,y1)==false)
			{
				cout<<"The Date Entered : "<<date<<" is not in Domain"<<endl;
				throw Domain_Error();
			}
			if(checkRange(d1,m1,y1)==false)
			{
				cout<<"The Date Entered : "<<date<<" is Out_Of_Range"<<endl;
				throw Out_Of_Range(y1);
			}
			day = d1;
			month = m1;
			year = y1;
			/*cout<<"New Date Created: "<<endl;
			cout<<"Date : "<<day<<endl;
			cout<<"Month : "<<month<<endl;
			cout<<"Year : "<<year<<endl;*/
		}
		else
		{
			cout<<"Date format not suitable for input. Please change in order to enter new date"<<endl;
			throw Invalid_Argument();
		} 
	}


// current date/time based on current system
time_t now = time(0);

tm *ltm = localtime(&now);

//Thia is the default constructor of the Date Class which creates a Date object with the current system date.
Date::Date()
	throw(Domain_Error, Out_Of_Range)
	{
		Day d;
		Month m;
		Year y;
		d = (Day)(ltm->tm_mday) ;
		m = (Month)(1 + ltm->tm_mon);
		y = (Year)(1900 + ltm->tm_year);
		if(checkInvalid(d,m,y)==false)
		{
			throw Invalid_Argument();
		}
		if(checkDomain(d,m,y)==false)
		{
			throw Domain_Error();
		}
		if(checkRange(d,m,y)==false)
		{
			throw Out_Of_Range(y);
		}
		day = d;
		month = m;
		year = y;
		/*cout<<"System Date : "<<endl;
		cout<<"date : "<<day<<endl;
		cout<<"month : "<<month<<endl;
		cout<<"year : "<<year<<endl;*/
	}

//This the function used for typecasting the object of the Date Class into date
Date::operator Day() const
	{
		return day;
	}

//This the function used for typecasting the object of the Date Class into month
Date::operator Month() const
	{
		return month;
	}

//This the function used for typecasting the object of the Date Class into year
Date::operator Year() const
	{
		return year;
	}

//It returns the weekday of the date object which calls it
Date::operator WeekDay() const
	{
		int i,nown = 0;
		for(i=1;i<=day;i++)
		{
			nown++;
		}
		for(i=1;i<month;i++)
		{
			nown+= 31;
			if(i==4||i==6||i==9||i==11)
			{
				nown-=1;
			}
			if(i==2)
			{
				nown-=3;
			}
		}
		for(i=1;i<year;i++)
		{
			nown+=365;
			if(i%400==0||(i%4==0&&i%100!=0))
			{
				nown+=1; 
			}
		}
		if(leapYear()==true&&month>2)
		{
			nown+=1;
		}
		int rem = (nown)%7;
		if(rem==0)
		{
			rem = 7;
		}
		return WeekDay(rem);
	}

//It returns the weeknumber of the current date object 
Date::operator WeekNumber() const
	{
		int i,reqDays = 0;
		for (i = 1; i<=day; ++i)
		{
			reqDays++;
		}
		for(i=1;i<month;i++)
		{
			reqDays+= 31;
			if(i==4||i==6||i==9||i==11)
			{
				reqDays-=1;
			}
			if(i==2)
			{
				reqDays-=3;
			}
		}
		if(leapYear()==true&&month>2)
		{
			reqDays+=1;
		}
		//cout<<"req "<<reqDays<<endl;
		int reqWeek = WeekDay(*this);
		WeekNumber res =  WeekNumber((reqDays-reqWeek+10)/7);
		Date tempo(*this);
		if(res==0)
		{
			Date temporary(Day(01),Month(01),Year(1950));
			if(tempo==temporary)
			{
				return WeekNumber(52);
			}
			else
			{
				Date temp(Day(31),Month(12),Year(year-1));
				return WeekNumber(temp);
			}
		}
		else if(res==53)
		{	
			if(reqWeek>=4)
			{
				return res;
			}
			else
			{
				while(reqWeek!=4)
				{
					++tempo;
					reqWeek++;
				} 
				if(Year(tempo)==year+1)
				{
					return WeekNumber(1);
				}
				else
				{
					return res;
				}
			}
		}
		else
		{
			return res;
		}
	}

//This the copy constructor of the date class.
Date::Date(const Date& oldDate)
	{
		day = Day(oldDate);
		month = Month(oldDate);
		year = Year(oldDate);
	}

//This the function which compares two date objects for equality.
//It returns true only if both the dates are equal.
bool Date::operator==(const Date& otherDate)
	{
		if(day==Day(otherDate)&&month==Month(otherDate)&&year==Year(otherDate))
			return true;
		else
			return false;
	}

//It compares two dates for inequality and returns true only if the dates are not the same 
bool Date::operator!=(const Date& otherDate)
	{
		if(day!=Day(otherDate)||month!=Month(otherDate)||year!=Year(otherDate))
			return true;
		else
			return false;
	}

//This function returns true only if the date objet which calls the function 
//is less than the date object passed as parameter i.e. appears before it in the calendar
bool Date::operator<(const Date& otherDate)
	{
		if(year<=Year(otherDate))
		{
			if(year<Year(otherDate))
			{
				return true;
			}
			else
			{
				if(month<=Month(otherDate))
				{
					if(month<Month(otherDate))
					{
						return true;
					}
					else
					{
						if(day<=Day(otherDate))
						{
							if(day<Day(otherDate))
							{
								return true;
							}
							else
							{
								return false;
							}
						}
						else
						{
							return false;
						}
					}
				}
				else
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}

//This function returns true only if the date object which calls the function 
//is less than or equal to the date object passed as parameter i.e. appears
// before it in the calendar or if both the dates are the same.
bool Date::operator<=(const Date& otherDate)
	{
		if(year<=Year(otherDate))
		{
			if(year<Year(otherDate))
			{
				return true;
			}
			else
			{
				if(month<=Month(otherDate))
				{
					if(month<Month(otherDate))
					{
						return true;
					}
					else
					{
						if(day<=Day(otherDate))
						{
							return true;
						}
						else
						{
							return false;
						}
					}
				}
				else
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}

//This function returns true only if the date objet which calls the function 
//is greater than the date object passed as parameter i.e. appears after it in the calendar
bool Date::operator>(const Date& otherDate)
	{
		if(year>=Year(otherDate))
		{
			if(year>Year(otherDate))
			{
				return true;
			}
			else
			{
				if(month>=Month(otherDate))
				{
					if(month>Month(otherDate))
					{
						return true;
					}
					else
					{
						if(day>=Day(otherDate))
						{
							if(day>Day(otherDate))
							{
								return true;
							}
							else
							{
								return false;
							}
						}
						else
						{
							return false;
						}
					}
				}
				else
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}

//This function returns true only if the date object which calls the function 
//is greater than or equal to the date object passed as parameter i.e. appears
//after it in the calendar or if both the dates are the same.
bool Date::operator>=(const Date& otherDate)
	{
		if(year>=Year(otherDate))
		{
			if(year>Year(otherDate))
			{
				return true;
			}
			else
			{
				if(month>=Month(otherDate))
				{
					if(month>Month(otherDate))
					{
						return true;
					}
					else
					{
						if(day>=Day(otherDate))
						{
							return true;
						}
						else
						{
							return false;
						}
					}
				}
				else
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}

//This function returns true iff the year in the date object calling it
//is a leap year. The conditions checked for is divisibilty by 400 or 
//divisibility by 4 but not by 100 
bool Date::leapYear() const
	{
		if(year%4==0)
		{
			if(year%100==0)
			{
				if(year%400==0)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return true;
			}
		}
		else
		{
			return false;
		}
	}

//This is the implementation of the copy assignment operator 
Date& Date::operator=(const Date& oldDate)
	{
		this->day = (Day)oldDate;
		this->month = (Month)oldDate;
		this->year = (Year)oldDate;
		return *this;	
	}

//This is the pre incerement operator which incraeses the day of the date by one 
Date& Date::operator++()
	{
		if(day<=27)
		{
			day = (Day)(1+day);
			return *this;
		}
		else
		{
			if(month==2)
			{
				if(leapYear()==true)
				{
					if(day==28)
					{
						day = (Day)29;
						return *this;
					}
					else
					{
						day = (Day)1;
						month = (Month)3;
						return *this;
					}
				}
				else
				{
					day = (Day)1;
					month = (Month)3;
					return *this;
				}
			}
			if(day==28||day==29)
			{
				day = (Day)(1+day);
				return *this;
			}
			if(month==12)
			{
				if(day==31)
				{
					day = (Day)1;
					month = (Month)1;
					year++;
					if(checkRange(day,month,year)==false)
					{
						day = Day(31);
						month = Month(12);
						year--;
						throw Out_Of_Range(year+1);
					}
					else
					{
						return *this;
					}
				}
				else
				{
					day = (Day)(1+day);
					return *this;
				}
			}
			if(month==1||month==3||month==5||month==7||month==8||month==10)
			{
				if(day==30)
				{
					day = (Day)(1+day);
					return *this;
				}
				else 
				{
					day = (Day)1;
					month = (Month)(1+month);
					return *this;
				}
			}
			if(month==4||month==6||month==9||month==11)
			{
				day = (Day)1;
				month = (Month)(1+month);
				return *this;
			}
		}
	}

//This is the post increment operator which increments the day of the date by seven 
Date Date::operator++(int x)
	{
		Date copy(*this);
		if(day<=21)
		{
			day = (Day)(7+day);
			return copy;
		}
		else
		{
			if(month==2)
			{
				if(leapYear()==true)
				{
					if(day==22)
					{
						day = (Day)29;
						return copy;
					}
					else
					{
						day = (Day)((day+7)%29);
						month = (Month)3;
						return copy;
					}
				}
				else
				{
					day = (Day)((day+7)%28);
					month = (Month)3;
					return copy;
				}
			}
			if(day==22||day==23)
			{
				day = (Day)(7+day);
				return copy;
			}
			if(month==12)
			{
				if(day==24)
				{
					day = (Day)31;
					return copy;
				}
				else
				{
					Day gh = day;
					day = (Day)((7+day)%31);
					year++;
					//cout<<"year : "<<year;
					month = (Month)1;
					if(checkRange(day,month,year)==false)
					{
						year--;
						month = Month(12);
						day = gh;
						throw Out_Of_Range(year+1);
					}
					else
					{
						return copy;
					}
				}
			}
			if(month==1||month==3||month==5||month==7||month==8||month==10)
			{
				if(day==24)
				{
					day = (Day)31;
					return copy;
				}
				else 
				{
					day = (Day)((7+day)%31);
					month = (Month)(1+month);
					return copy;
				}
			}
			if(month==4||month==6||month==9||month==11)
			{
				day = (Day)((7+day)%30);
				month = (Month)(1+month);
				return copy;
			}
		}
	}

//This is the pre decrement operator which decreases the day of the date by one
Date& Date::operator--()
	{
		if(day!=1)
		{
			day = (Day)(day - 1);
			return *this;
		}
		if(month==3)
		{
			if(leapYear()==true)
			{
				day = (Day)29;
				month = (Month)(month-1);
				return * this;
			}
			else
			{
				day = (Day)28;
				month = (Month)(month-1);
				return *this;
			}
		}
		if(month==1)
		{
			day = (Day)31;
			month = (Month)12;
			year--;
		    if(checkRange(day,month,year)==false)
			{
				day = Day(1);
				month = Month(1);
				year++;
				throw Out_Of_Range(year-1);
			}
			else
			{
				return *this;
			}
		}
		if(month==2||month==4||month==6||month==8||month==9||month==11)
		{
			day = (Day)31;
			month = (Month)(month - 1);
			return *this;
		}
		if(month==5||month==7||month==10||month==12)
		{
			day = (Day)30;
			month = (Month)(month-1);
			return * this;
		}
	}

//This is the post decrement operator which decreases the day of the date by seven
Date Date::operator--(int)
	{
		Date copy(*this);
		if(day>=8)
		{
			day = (Day)(day - 7);
			return copy;
		}
		if(month==3)
		{
			if(leapYear()==true)
			{
				day = (Day)(29+day-7);
				month = (Month)(month-1);
				return copy;
			}
			else
			{
				day = (Day)(28+day-7);
				month = (Month)(month-1);
				return copy;
			}
		}
		if(month==1)
		{
			Day gprs = day;
			day = (Day)(31+day-7);
			month = (Month)12;
			year--;
			if(checkRange(day,month,year)==false)
			{
				day = gprs;
				month = Month(1);
				year++;
				throw Out_Of_Range(year-1);
			}
			else
			{
				return copy;
			}
		}
		if(month==2||month==4||month==6||month==8||month==9||month==11)
		{
			day = (Day)(31+day-7);
			month = (Month)(month - 1);
			return copy;
		}
		if(month==5||month==7||month==10||month==12)
		{
			day = (Day)(30+day-7);
			month = (Month)(month-1);
			return copy;
		}
	}

//This function returns the difference in the number of days between two dates.
//Note : For two consecutive dates the value returned is one.
//The value returned does not depend on which date Object is calling the function 
//and which date object is passed as a parameter
unsigned int Date::operator-(const Date& otherDate)
	{
		int i,nown = 0, nother = 0;
		for(i=1;i<=day;i++)
		{
			nown++;
		}
		//cout<<*this<<endl;
	
		for(i=1;i<month;i++)
		{
			nown+= 31;
			if(i==4||i==6||i==9||i==11)
			{
				nown-=1;
			}
			if(i==2)
			{
				nown-=3;
			}
		}
		for(i=1;i<year;i++)
		{
			nown+=365;
			if(i%400==0||(i%4==0&&i%100!=0))
			{
				nown+=1; 
			}
		}
		if(leapYear()==true&&month>2)
		{
			nown+=1;
		}

		for(i=1;i<=Day(otherDate);i++)
		{
			nother++;
		}
		for(i=1;i<Month(otherDate);i++)
		{
			nother+= 31;
			if(i==4||i==6||i==9||i==11)
			{
				nother-=1;
			}
			if(i==2)
			{
				nother-=3;
			}
		}
		for(i=1;i<Year(otherDate);i++)
		{
			nother+=365;
			if(i%400==0||(i%4==0&&i%100!=0))
			{
				nother+=1; 
			}
		}
		if(otherDate.leapYear()==true&&Month(otherDate)>2)
		{
			nother+=1;
		}

		//cout<<nown<<endl;
		//cout<<nother<<endl;

		return (abs(nown-nother));
	}

//This function infacts returns a new date object which  it creates
//by incrementing or decrementing the number of days in the date object
//which calls it by the no of the days which is passed as a parameter 
Date Date::operator+(int noOfDays)
	throw(Domain_Error, Out_Of_Range)
	{	
		int i;
		Date newDate(*this);
		if(noOfDays>0)
		{
			for (i = 1; i <= noOfDays; ++i)
			{
				try
				{
					newDate=++newDate;
				}
				catch(Out_Of_Range& e)
				{
					cout<<e<<endl;
				}
			}
		}
		if(noOfDays<0)
		{
			for(i=noOfDays;i<0;i++)
			{
				try
				{
					newDate=--newDate;
				}
				catch(Out_Of_Range& e)
				{
					cout<<e<<endl;
				}
			}
		}
		if(checkInvalid(Day(newDate),Month(newDate),Year(newDate))==false)
		{
			throw Invalid_Argument();
		}
		if(checkDomain(Day(newDate),Month(newDate),Year(newDate))==false)
		{
			throw Domain_Error();
		}
		if(checkRange(Day(newDate),Month(newDate),Year(newDate))==false)
		{
			throw Out_Of_Range(Year(newDate));
		}
		return newDate;
	}

//This is the destructor of the Date class
Date:: ~Date()
	{
		//cout<<*this<<" is destructed"<<endl;
	}

//This friend function is used to output a Date object
ostream& operator<<(ostream& os, const Date& output)
	{
		int d,m,y;
		d = strlen(output.getFormat().getDateFormat());
		m = strlen(output.getFormat().getMonthFormat());
		y = strlen(output.getFormat().getYearFormat());
		if(strcmp(output.getFormat().getDateFormat(),"0")==0)
		{
			os<<" -";
		}
		else if(d==1)
		{
			os<<Day(output)<<"-";
		}
		else
		{
			if(Day(output)>=1&&Day(output)<=9)
			{
				os<<"0"<<Day(output)<<"-";
			}
			else
			{
				os<<Day(output)<<"-";
			}
		}
		if(strcmp(output.getFormat().getMonthFormat(),"0")==0)
		{
			switch(Month(output))
			{
				case 1:
				os<<"January-";
				break;
				case 2:
				os<<"February-";
				break;
				case 3:
				os<<"March-";
				break;
				case 4:
				os<<"April-";
				break;
				case 5:
				os<<"May-";
				break;
				case 6:
				os<<"June-";
				break;
				case 7:
				os<<"July-";
				break;
				case 8:
				os<<"August-";
				break;
				case 9:
				os<<"September-";
				break;
				case 10:
				os<<"October-";
				break;
				case 11:
				os<<"November-";
				break;
				case 12:
				os<<"December-";
				break;
				default:
				os<<" -";
				break;
			}
		}
		else if(m==1)
		{
			os<<Month(output)<<"-";
		}
		else if(m==2)
		{
			if(Month(output)>=1&&Month(output)<=9)
			{
				os<<"0"<<Month(output)<<"-";
			}
			else
			{
				os<<Month(output)<<"-";
			}
		}
		else
		{
			switch(Month(output))
			{
				case 1:
				os<<"Jan-";
				break;
				case 2:
				os<<"Feb-";
				break;
				case 3:
				os<<"Mar-";
				break;
				case 4:
				os<<"Apr-";
				break;
				case 5:
				os<<"May-";
				break;
				case 6:
				os<<"Jun-";
				break;
				case 7:
				os<<"Jul-";
				break;
				case 8:
				os<<"Aug-";
				break;
				case 9:
				os<<"Sep-";
				break;
				case 10:
				os<<"Oct-";
				break;
				case 11:
				os<<"Nov-";
				break;
				case 12:
				os<<"Dec-";
				break;
				default:
				os<<" -";
				break;
			}
		}
		if(strcmp(output.getFormat().getYearFormat(),"0")==0)
		{
			os<<" ";
		}
		else if(y==2)
		{
			string temp = std::to_string(Year(output));
			os<<temp[2]<<temp[3];
		}
		else
		{
			os<<Year(output);
		}
		return os;
	}

//This function is used to input a particular date
istream& operator>>(istream& is, Date& input)
	{
		string temp;
		is>>temp;
		Date tempo(temp.c_str());
		input=tempo;
		return is;
	}
