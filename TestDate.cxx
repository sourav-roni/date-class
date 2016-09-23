#include "Date.h"
#include <string.h>
#include <stdlib.h>

void Testing(DateFormat & df)
{
	Date::setFormat(df);
	cout<<"Testing performed with format : "<<df.getDateFormat()<<'-'<<df.getMonthFormat()<<'-'<<df.getYearFormat()<<endl;
	if(strcmp(df.getDateFormat(),"d")==0&&strcmp(df.getMonthFormat(),"m")==0&&strcmp(df.getYearFormat(),"yyyy")==0)
	{
		Date d1a("11-4-2016");
		Date d1b("21-5-2010");
		Date d1s;

		cout<<"The first date created is : "<<d1a<<endl;
		cout<<"The second date created is : "<<d1b<<endl;
		cout<<"Today's date is : "<<d1s<<endl<<endl;

		Date dum1(d1a);
		Date dum2 = d1b;

		cout<<"Displaying the use of copy constructor : "<<endl;
		cout<<"The date created by copy constructing first date : "<<dum1<<endl<<endl;

		cout<<"Displaying the use of copy assignment operator : "<<endl;
		cout<<"The date created by assigning the first date : "<<dum2<<endl<<endl;

		cout<<"Displaying the use of Unary operators :"<<endl;
		cout<<"The date after incrementing "<<dum1<<" by one day (prefix) : "<<++d1a<<endl;
		cout<<"The date after incrementing "<<++dum1<<" by one week (postfix) (returns the same date): "<<d1a++<<endl;
		cout<<"The result of incrementing "<<dum1<<" by one week "<<d1a<<endl;
		cout<<"The date after decrementing "<<dum2<<" by one day (prefix): "<<--d1b<<endl;
		cout<<"The date after decrementing "<<--dum2<<" by one week (postfix) (returns the same date): "<<d1b--<<endl;
		cout<<"The result of decrementing "<<dum2<<" by one week "<<d1b<<endl<<endl;

		cout<<"Now the first and second dates have changed : "<<endl;
		cout<<"The first date is : "<<d1a<<endl;
		cout<<"The second date is : "<<d1b<<endl;

		cout<<"The number of days between "<<d1a<<" and "<<d1b<<" is "<<(d1a-d1b)<<endl<<endl;

		Date d1inc = d1a + 5;
		Date d1dec = d1b + (-5);

		cout<<"Displaying the utility of the overloaded + operator : "<<endl;
		cout<<"The date formed by adding five days to "<<d1a<<" is "<<d1inc<<endl;
		cout<<"The date formed by subtracting five days from "<<d1b<<" is "<<d1dec<<endl<<endl;

		cout<<"Displaying the utility of the cast operators : "<<endl;
		cout<<"The atrributes displayed immediately below correspond to "<<d1a<<endl;
		cout<<"Day : "<<Day(d1a)<<endl;
		cout<<"Month : "<<Month(d1a)<<endl;
		cout<<"Year : "<<Year(d1a)<<endl;
		cout<<"WeekDay : ";
		WeekDay week = WeekDay(d1a);
		switch(week)
		{
			case 1:
			cout<<"Monday"<<endl;
			break;
			case 2:
			cout<<"Tuesday"<<endl;
			break;
			case 3:
			cout<<"Wednesday"<<endl;
			break;
			case 4:
			cout<<"Thrusday"<<endl;
			break;
			case 5:
			cout<<"Friday"<<endl;
			break;
			case 6:
			cout<<"Saturday"<<endl;
			break;
			case 7:
			cout<<"Sunday"<<endl;
			break;
			default:
			break;
		}
		cout<<"WeekNumber : "<<WeekNumber(d1a)<<endl<<endl;

		cout<<"Checking whether the Years in the Dates are Leap Years or not : "<<endl;
		if(d1a.leapYear()==true)
		{
			cout<<"The year "<<Year(d1a)<<" is a leapYear"<<endl;
		}
		else
		{
			cout<<"The year "<<Year(d1a)<<" is not a leapYear"<<endl;
		}
		if(d1b.leapYear()==true)
		{
			cout<<"The year "<<Year(d1b)<<" is a leapYear"<<endl;
		}
		else
		{
			cout<<"The year "<<Year(d1b)<<" is not a leapYear"<<endl;
		}
		cout<<endl;

		cout<<"Displaying the use of binary relational operators : "<<endl;
		if(d1a==d1b)
		{
			cout<<"The dates "<<d1a<<" = "<<d1b<<endl;
		}
		if(d1a!=d1b)
		{
			cout<<"The dates "<<d1a<<" != "<<d1b<<endl;
		}
		if(d1a<d1b)
		{
			cout<<"The dates "<<d1a<<" < "<<d1b<<endl;
		}
		if(d1a<=d1b)
		{
			cout<<"The dates "<<d1a<<" <= "<<d1b<<endl;
		}
		if(d1a>d1b)
		{
			cout<<"The dates "<<d1a<<" > "<<d1b<<endl;
		}
		if(d1a>=d1b)
		{
			cout<<"The dates "<<d1a<<" >= "<<d1b<<endl;
		}
		if(d1a==d1a)
		{
			cout<<"The dates "<<d1a<<" = "<<d1a<<endl;
		}
		cout<<endl;

	}
	if(strcmp(df.getDateFormat(),"d")==0&&strcmp(df.getMonthFormat(),"mm")==0&&strcmp(df.getYearFormat(),"yy")==0)
	{
		Date d1a("1-03-16");
		Date d1b("21-11-12");
		Date d1s;

		cout<<"The first date created is : "<<d1a<<endl;
		cout<<"The second date created is : "<<d1b<<endl;
		cout<<"Today's date is : "<<d1s<<endl<<endl;

		Date dum1(d1a);
		Date dum2 = d1b;

		cout<<"Displaying the use of copy constructor : "<<endl;
		cout<<"The date created by copy constructing first date : "<<dum1<<endl<<endl;

		cout<<"Displaying the use of copy assignment operator : "<<endl;
		cout<<"The date created by assigning the first date : "<<dum2<<endl<<endl;

		cout<<"Displaying the use of Unary operators :"<<endl;
		cout<<"The date after incrementing "<<dum1<<" by one day (prefix) : "<<++d1a<<endl;
		cout<<"The date after incrementing "<<++dum1<<" by one week (postfix) (returns the same date): "<<d1a++<<endl;
		cout<<"The result of incrementing "<<dum1<<" by one week "<<d1a<<endl;
		cout<<"The date after decrementing "<<dum2<<" by one day (prefix): "<<--d1b<<endl;
		cout<<"The date after decrementing "<<--dum2<<" by one week (postfix) (returns the same date): "<<d1b--<<endl;
		cout<<"The result of decrementing "<<dum2<<" by one week "<<d1b<<endl<<endl;


		cout<<"Now the first and second dates have changed : "<<endl;
		cout<<"The first date is : "<<d1a<<endl;
		cout<<"The second date is : "<<d1b<<endl;

		cout<<"The number of days between "<<d1a<<" and "<<d1b<<" is "<<(d1a-d1b)<<endl<<endl;

		Date d1inc = d1a + 5;
		Date d1dec = d1b + (-5);

		cout<<"Displaying the utility of the overloaded + operator : "<<endl;
		cout<<"The date formed by adding five days to "<<d1a<<" is "<<d1inc<<endl;
		cout<<"The date formed by subtracting five days from "<<d1b<<" is "<<d1dec<<endl<<endl;

		cout<<"Displaying the utility of the cast operators : "<<endl;
		cout<<"The atrributes displayed immediately below correspond to "<<d1a<<endl;
		cout<<"Day : "<<Day(d1a)<<endl;
		cout<<"Month : "<<Month(d1a)<<endl;
		cout<<"Year : "<<Year(d1a)<<endl;
		cout<<"WeekDay : ";
		WeekDay week = WeekDay(d1a);
		switch(week)
		{
			case 1:
			cout<<"Monday"<<endl;
			break;
			case 2:
			cout<<"Tuesday"<<endl;
			break;
			case 3:
			cout<<"Wednesday"<<endl;
			break;
			case 4:
			cout<<"Thrusday"<<endl;
			break;
			case 5:
			cout<<"Friday"<<endl;
			break;
			case 6:
			cout<<"Saturday"<<endl;
			break;
			case 7:
			cout<<"Sunday"<<endl;
			break;
			default:
			break;
	}
	cout<<"WeekNumber : "<<WeekNumber(d1a)<<endl<<endl;

	cout<<"Checking whether the Years in the Dates are Leap Years or not : "<<endl;
	if(d1a.leapYear()==true)
	{
		cout<<"The year "<<Year(d1a)<<" is a leapYear"<<endl;
	}
	else
	{
		cout<<"The year "<<Year(d1a)<<" is not a leapYear"<<endl;
	}
	if(d1b.leapYear()==true)
	{
		cout<<"The year "<<Year(d1b)<<" is a leapYear"<<endl;
	}
	else
	{
		cout<<"The year "<<Year(d1b)<<" is not a leapYear"<<endl;
	}
	cout<<endl;

	cout<<"Displaying the use of binary relational operators : "<<endl;
	if(d1a==d1b)
	{
		cout<<"The dates "<<d1a<<" = "<<d1b<<endl;
	}
	if(d1a!=d1b)
	{
		cout<<"The dates "<<d1a<<" != "<<d1b<<endl;
	}
	if(d1a<d1b)
	{
		cout<<"The dates "<<d1a<<" < "<<d1b<<endl;
	}
	if(d1a<=d1b)
	{
		cout<<"The dates "<<d1a<<" <= "<<d1b<<endl;
	}
	if(d1a>d1b)
	{
		cout<<"The dates "<<d1a<<" > "<<d1b<<endl;
	}
	if(d1a>=d1b)
	{
		cout<<"The dates "<<d1a<<" >= "<<d1b<<endl;
	}
	if(d1a==d1a)
	{
		cout<<"The dates "<<d1a<<" = "<<d1a<<endl;
	}
	cout<<endl;

	}
	if(strcmp(df.getDateFormat(),"d")==0&&strcmp(df.getMonthFormat(),"mm")==0&&strcmp(df.getYearFormat(),"yyyy")==0)
	{
		Date d1a("1-03-2014");
		Date d1b("21-01-2012");
		Date d1s;

		cout<<"The first date created is : "<<d1a<<endl;
		cout<<"The second date created is : "<<d1b<<endl;
		cout<<"Today's date is : "<<d1s<<endl<<endl;

		Date dum1(d1a);
		Date dum2 = d1b;

		cout<<"Displaying the use of copy constructor : "<<endl;
		cout<<"The date created by copy constructing first date : "<<dum1<<endl<<endl;

		cout<<"Displaying the use of copy assignment operator : "<<endl;
		cout<<"The date created by assigning the first date : "<<dum2<<endl<<endl;

		cout<<"Displaying the use of Unary operators :"<<endl;
		cout<<"The date after incrementing "<<dum1<<" by one day (prefix) : "<<++d1a<<endl;
		cout<<"The date after incrementing "<<++dum1<<" by one week (postfix) (returns the same date): "<<d1a++<<endl;
		cout<<"The result of incrementing "<<dum1<<" by one week "<<d1a<<endl;
		cout<<"The date after decrementing "<<dum2<<" by one day (prefix): "<<--d1b<<endl;
		cout<<"The date after decrementing "<<--dum2<<" by one week (postfix) (returns the same date): "<<d1b--<<endl;
		cout<<"The result of decrementing "<<dum2<<" by one week "<<d1b<<endl<<endl;

		cout<<"Now the first and second dates have changed : "<<endl;
		cout<<"The first date is : "<<d1a<<endl;
		cout<<"The second date is : "<<d1b<<endl;

		cout<<"The number of days between "<<d1a<<" and "<<d1b<<" is "<<(d1a-d1b)<<endl<<endl;

		Date d1inc = d1a + 5;
		Date d1dec = d1b + (-5);

		cout<<"Displaying the utility of the overloaded + operator : "<<endl;
		cout<<"The date formed by adding five days to "<<d1a<<" is "<<d1inc<<endl;
		cout<<"The date formed by subtracting five days from "<<d1b<<" is "<<d1dec<<endl<<endl;

		cout<<"Displaying the utility of the cast operators : "<<endl;
		cout<<"The atrributes displayed immediately below correspond to "<<d1a<<endl;
		cout<<"Day : "<<Day(d1a)<<endl;
		cout<<"Month : "<<Month(d1a)<<endl;
		cout<<"Year : "<<Year(d1a)<<endl;
		cout<<"WeekDay : ";
		WeekDay week = WeekDay(d1a);
		switch(week)
		{
			case 1:
			cout<<"Monday"<<endl;
			break;
			case 2:
			cout<<"Tuesday"<<endl;
			break;
			case 3:
			cout<<"Wednesday"<<endl;
			break;
			case 4:
			cout<<"Thrusday"<<endl;
			break;
			case 5:
			cout<<"Friday"<<endl;
			break;
			case 6:
			cout<<"Saturday"<<endl;
			break;
			case 7:
			cout<<"Sunday"<<endl;
			break;
			default:
			break;
		}
		cout<<"WeekNumber : "<<WeekNumber(d1a)<<endl<<endl;

		cout<<"Checking whether the Years in the Dates are Leap Years or not : "<<endl;
		if(d1a.leapYear()==true)
		{
			cout<<"The year "<<Year(d1a)<<" is a leapYear"<<endl;
		}
		else
		{
			cout<<"The year "<<Year(d1a)<<" is not a leapYear"<<endl;
		}
		if(d1b.leapYear()==true)
		{
			cout<<"The year "<<Year(d1b)<<" is a leapYear"<<endl;
		}
		else
		{
			cout<<"The year "<<Year(d1b)<<" is not a leapYear"<<endl;
		}
		cout<<endl;

		cout<<"Displaying the use of binary relational operators : "<<endl;
		if(d1a==d1b)
		{
			cout<<"The dates "<<d1a<<" = "<<d1b<<endl;
		}
		if(d1a!=d1b)
		{
			cout<<"The dates "<<d1a<<" != "<<d1b<<endl;
		}
		if(d1a<d1b)
		{
			cout<<"The dates "<<d1a<<" < "<<d1b<<endl;
		}
		if(d1a<=d1b)
		{
			cout<<"The dates "<<d1a<<" <= "<<d1b<<endl;
		}
		if(d1a>d1b)
		{
			cout<<"The dates "<<d1a<<" > "<<d1b<<endl;
		}
		if(d1a>=d1b)
		{
			cout<<"The dates "<<d1a<<" >= "<<d1b<<endl;
		}
		if(d1a==d1a)
		{
			cout<<"The dates "<<d1a<<" = "<<d1a<<endl;
		}
		cout<<endl;
	}
	if(strcmp(df.getDateFormat(),"dd")==0&&strcmp(df.getMonthFormat(),"m")==0&&strcmp(df.getYearFormat(),"yy")==0)
	{
		Date d1a("10-03-16");
		Date d1b("21-01-12");
		Date d1s;

		cout<<"The first date created is : "<<d1a<<endl;
		cout<<"The second date created is : "<<d1b<<endl;
		cout<<"Today's date is : "<<d1s<<endl<<endl;

		Date dum1(d1a);
		Date dum2 = d1b;

		cout<<"Displaying the use of copy constructor : "<<endl;
		cout<<"The date created by copy constructing first date : "<<dum1<<endl<<endl;

		cout<<"Displaying the use of copy assignment operator : "<<endl;
		cout<<"The date created by assigning the first date : "<<dum2<<endl<<endl;


		cout<<"Displaying the use of Unary operators :"<<endl;
		cout<<"The date after incrementing "<<dum1<<" by one day (prefix) : "<<++d1a<<endl;
		cout<<"The date after incrementing "<<++dum1<<" by one week (postfix) (returns the same date): "<<d1a++<<endl;
		cout<<"The result of incrementing "<<dum1<<" by one week "<<d1a<<endl;
		cout<<"The date after decrementing "<<dum2<<" by one day (prefix): "<<--d1b<<endl;
		cout<<"The date after decrementing "<<--dum2<<" by one week (postfix) (returns the same date): "<<d1b--<<endl;
		cout<<"The result of decrementing "<<dum2<<" by one week "<<d1b<<endl<<endl;

		cout<<"Now the first and second dates have changed : "<<endl;
		cout<<"The first date is : "<<d1a<<endl;
		cout<<"The second date is : "<<d1b<<endl;

		cout<<"The number of days between "<<d1a<<" and "<<d1b<<" is "<<(d1a-d1b)<<endl<<endl;

		Date d1inc = d1a + 5;
		Date d1dec = d1b + (-5);

		cout<<"Displaying the utility of the overloaded + operator : "<<endl;
		cout<<"The date formed by adding five days to "<<d1a<<" is "<<d1inc<<endl;
		cout<<"The date formed by subtracting five days from "<<d1b<<" is "<<d1dec<<endl<<endl;

		cout<<"Displaying the utility of the cast operators : "<<endl;
		cout<<"The atrributes displayed immediately below correspond to "<<d1a<<endl;
		cout<<"Day : "<<Day(d1a)<<endl;
		cout<<"Month : "<<Month(d1a)<<endl;
		cout<<"Year : "<<Year(d1a)<<endl;
		cout<<"WeekDay : ";
		WeekDay week = WeekDay(d1a);
		switch(week)
		{
			case 1:
			cout<<"Monday"<<endl;
			break;
			case 2:
			cout<<"Tuesday"<<endl;
			break;
			case 3:
			cout<<"Wednesday"<<endl;
			break;
			case 4:
			cout<<"Thrusday"<<endl;
			break;
			case 5:
			cout<<"Friday"<<endl;
			break;
			case 6:
			cout<<"Saturday"<<endl;
			break;
			case 7:
			cout<<"Sunday"<<endl;
			break;
			default:
			break;
		}
		cout<<"WeekNumber : "<<WeekNumber(d1a)<<endl<<endl;

		cout<<"Checking whether the Years in the Dates are Leap Years or not : "<<endl;
		if(d1a.leapYear()==true)
		{
			cout<<"The year "<<Year(d1a)<<" is a leapYear"<<endl;
		}
		else
		{
			cout<<"The year "<<Year(d1a)<<" is not a leapYear"<<endl;
		}
		if(d1b.leapYear()==true)
		{
			cout<<"The year "<<Year(d1b)<<" is a leapYear"<<endl;
		}
		else
		{
			cout<<"The year "<<Year(d1b)<<" is not a leapYear"<<endl;
		}
		cout<<endl;

		cout<<"Displaying the use of binary relational operators : "<<endl;
		if(d1a==d1b)
		{
			cout<<"The dates "<<d1a<<" = "<<d1b<<endl;
		}
		if(d1a!=d1b)
		{
			cout<<"The dates "<<d1a<<" != "<<d1b<<endl;
		}
		if(d1a<d1b)
		{
			cout<<"The dates "<<d1a<<" < "<<d1b<<endl;
		}
		if(d1a<=d1b)
		{
			cout<<"The dates "<<d1a<<" <= "<<d1b<<endl;
		}
		if(d1a>d1b)
		{
			cout<<"The dates "<<d1a<<" > "<<d1b<<endl;
		}
		if(d1a>=d1b)
		{
			cout<<"The dates "<<d1a<<" >= "<<d1b<<endl;
		}
		if(d1a==d1a)
		{
			cout<<"The dates "<<d1a<<" = "<<d1a<<endl;
		}
		cout<<endl;
	}
	if(strcmp(df.getDateFormat(),"dd")==0&&strcmp(df.getMonthFormat(),"m")==0&&strcmp(df.getYearFormat(),"yyyy")==0)
	{
		Date d1a("30-03-2014");
		Date d1b("12-1-2012");
		Date d1s;

		cout<<"The first date created is : "<<d1a<<endl;
		cout<<"The second date created is : "<<d1b<<endl;
		cout<<"Today's date is : "<<d1s<<endl<<endl;

		Date dum1(d1a);
		Date dum2 = d1b;

		cout<<"Displaying the use of copy constructor : "<<endl;
		cout<<"The date created by copy constructing first date : "<<dum1<<endl<<endl;

		cout<<"Displaying the use of copy assignment operator : "<<endl;
		cout<<"The date created by assigning the first date : "<<dum2<<endl<<endl;


		cout<<"Displaying the use of Unary operators :"<<endl;
		cout<<"The date after incrementing "<<dum1<<" by one day (prefix) : "<<++d1a<<endl;
		cout<<"The date after incrementing "<<++dum1<<" by one week (postfix) (returns the same date): "<<d1a++<<endl;
		cout<<"The result of incrementing "<<dum1<<" by one week "<<d1a<<endl;
		cout<<"The date after decrementing "<<dum2<<" by one day (prefix): "<<--d1b<<endl;
		cout<<"The date after decrementing "<<--dum2<<" by one week (postfix) (returns the same date): "<<d1b--<<endl;
		cout<<"The result of decrementing "<<dum2<<" by one week "<<d1b<<endl<<endl;

		cout<<"Now the first and second dates have changed : "<<endl;
		cout<<"The first date is : "<<d1a<<endl;
		cout<<"The second date is : "<<d1b<<endl;

		cout<<"The number of days between "<<d1a<<" and "<<d1b<<" is "<<(d1a-d1b)<<endl<<endl;

		Date d1inc = d1a + 5;
		Date d1dec = d1b + (-5);

		cout<<"Displaying the utility of the overloaded + operator : "<<endl;
		cout<<"The date formed by adding five days to "<<d1a<<" is "<<d1inc<<endl;
		cout<<"The date formed by subtracting five days from "<<d1b<<" is "<<d1dec<<endl<<endl;

		cout<<"Displaying the utility of the cast operators : "<<endl;
		cout<<"The atrributes displayed immediately below correspond to "<<d1a<<endl;
		cout<<"Day : "<<Day(d1a)<<endl;
		cout<<"Month : "<<Month(d1a)<<endl;
		cout<<"Year : "<<Year(d1a)<<endl;
		cout<<"WeekDay : ";
		WeekDay week = WeekDay(d1a);
		switch(week)
		{
			case 1:
			cout<<"Monday"<<endl;
			break;
			case 2:
			cout<<"Tuesday"<<endl;
			break;
			case 3:
			cout<<"Wednesday"<<endl;
			break;
			case 4:
			cout<<"Thrusday"<<endl;
			break;
			case 5:
			cout<<"Friday"<<endl;
			break;
			case 6:
			cout<<"Saturday"<<endl;
			break;
			case 7:
			cout<<"Sunday"<<endl;
			break;
			default:
			break;
		}
		cout<<"WeekNumber : "<<WeekNumber(d1a)<<endl<<endl;

		cout<<"Checking whether the Years in the Dates are Leap Years or not : "<<endl;
		if(d1a.leapYear()==true)
		{
			cout<<"The year "<<Year(d1a)<<" is a leapYear"<<endl;
		}
		else
		{
			cout<<"The year "<<Year(d1a)<<" is not a leapYear"<<endl;
		}
		if(d1b.leapYear()==true)
		{
			cout<<"The year "<<Year(d1b)<<" is a leapYear"<<endl;
		}
		else
		{
			cout<<"The year "<<Year(d1b)<<" is not a leapYear"<<endl;
		}
		cout<<endl;

		cout<<"Displaying the use of binary relational operators : "<<endl;
		if(d1a==d1b)
		{
			cout<<"The dates "<<d1a<<" = "<<d1b<<endl;
		}
		if(d1a!=d1b)
		{
			cout<<"The dates "<<d1a<<" != "<<d1b<<endl;
		}
		if(d1a<d1b)
		{
			cout<<"The dates "<<d1a<<" < "<<d1b<<endl;
		}
		if(d1a<=d1b)
		{
			cout<<"The dates "<<d1a<<" <= "<<d1b<<endl;
		}
		if(d1a>d1b)
		{
			cout<<"The dates "<<d1a<<" > "<<d1b<<endl;
		}
		if(d1a>=d1b)
		{
			cout<<"The dates "<<d1a<<" >= "<<d1b<<endl;
		}
		if(d1a==d1a)
		{
			cout<<"The dates "<<d1a<<" = "<<d1a<<endl;
		}
		cout<<endl;
	}
	if(strcmp(df.getDateFormat(),"dd")==0&&strcmp(df.getMonthFormat(),"mm")==0&&strcmp(df.getYearFormat(),"yy")==0)
	{
		Date d1a("11-03-10");
		Date d1b("12-02-12");
		Date d1s;

		cout<<"The first date created is : "<<d1a<<endl;
		cout<<"The second date created is : "<<d1b<<endl;
		cout<<"Today's date is : "<<d1s<<endl<<endl;

		Date dum1(d1a);
		Date dum2 = d1b;

		cout<<"Displaying the use of copy constructor : "<<endl;
		cout<<"The date created by copy constructing first date : "<<dum1<<endl<<endl;

		cout<<"Displaying the use of copy assignment operator : "<<endl;
		cout<<"The date created by assigning the first date : "<<dum2<<endl<<endl;


		cout<<"Displaying the use of Unary operators :"<<endl;
		cout<<"The date after incrementing "<<dum1<<" by one day (prefix) : "<<++d1a<<endl;
		cout<<"The date after incrementing "<<++dum1<<" by one week (postfix) (returns the same date): "<<d1a++<<endl;
		cout<<"The result of incrementing "<<dum1<<" by one week "<<d1a<<endl;
		cout<<"The date after decrementing "<<dum2<<" by one day (prefix): "<<--d1b<<endl;
		cout<<"The date after decrementing "<<--dum2<<" by one week (postfix) (returns the same date): "<<d1b--<<endl;
		cout<<"The result of decrementing "<<dum2<<" by one week "<<d1b<<endl<<endl;

		cout<<"Now the first and second dates have changed : "<<endl;
		cout<<"The first date is : "<<d1a<<endl;
		cout<<"The second date is : "<<d1b<<endl;

		cout<<"The number of days between "<<d1a<<" and "<<d1b<<" is "<<(d1a-d1b)<<endl<<endl;

		Date d1inc = d1a + 5;
		Date d1dec = d1b + (-5);

		cout<<"Displaying the utility of the overloaded + operator : "<<endl;
		cout<<"The date formed by adding five days to "<<d1a<<" is "<<d1inc<<endl;
		cout<<"The date formed by subtracting five days from "<<d1b<<" is "<<d1dec<<endl<<endl;

		cout<<"Displaying the utility of the cast operators : "<<endl;
		cout<<"The atrributes displayed immediately below correspond to "<<d1a<<endl;
		cout<<"Day : "<<Day(d1a)<<endl;
		cout<<"Month : "<<Month(d1a)<<endl;
		cout<<"Year : "<<Year(d1a)<<endl;
		cout<<"WeekDay : ";
		WeekDay week = WeekDay(d1a);
		switch(week)
		{
			case 1:
			cout<<"Monday"<<endl;
			break;
			case 2:
			cout<<"Tuesday"<<endl;
			break;
			case 3:
			cout<<"Wednesday"<<endl;
			break;
			case 4:
			cout<<"Thrusday"<<endl;
			break;
			case 5:
			cout<<"Friday"<<endl;
			break;
			case 6:
			cout<<"Saturday"<<endl;
			break;
			case 7:
			cout<<"Sunday"<<endl;
			break;
			default:
			break;
		}
		cout<<"WeekNumber : "<<WeekNumber(d1a)<<endl<<endl;

		cout<<"Checking whether the Years in the Dates are Leap Years or not : "<<endl;
		if(d1a.leapYear()==true)
		{
			cout<<"The year "<<Year(d1a)<<" is a leapYear"<<endl;
		}
		else
		{
			cout<<"The year "<<Year(d1a)<<" is not a leapYear"<<endl;
		}
		if(d1b.leapYear()==true)
		{
			cout<<"The year "<<Year(d1b)<<" is a leapYear"<<endl;
		}
		else
		{
			cout<<"The year "<<Year(d1b)<<" is not a leapYear"<<endl;
		}
		cout<<endl;

		cout<<"Displaying the use of binary relational operators : "<<endl;
		if(d1a==d1b)
		{
			cout<<"The dates "<<d1a<<" = "<<d1b<<endl;
		}
		if(d1a!=d1b)
		{
			cout<<"The dates "<<d1a<<" != "<<d1b<<endl;
		}
		if(d1a<d1b)
		{
			cout<<"The dates "<<d1a<<" < "<<d1b<<endl;
		}
		if(d1a<=d1b)
		{
			cout<<"The dates "<<d1a<<" <= "<<d1b<<endl;
		}
		if(d1a>d1b)
		{
			cout<<"The dates "<<d1a<<" > "<<d1b<<endl;
		}
		if(d1a>=d1b)
		{
			cout<<"The dates "<<d1a<<" >= "<<d1b<<endl;
		}
		if(d1a==d1a)
		{
			cout<<"The dates "<<d1a<<" = "<<d1a<<endl;
		}
		cout<<endl;
	}
	if(strcmp(df.getDateFormat(),"dd")==0&&strcmp(df.getMonthFormat(),"mm")==0&&strcmp(df.getYearFormat(),"yyyy")==0)
	{
		Date d1a("11-11-2011");
		Date d1b("26-01-2010");
		Date d1s;

		cout<<"The first date created is : "<<d1a<<endl;
		cout<<"The second date created is : "<<d1b<<endl;
		cout<<"Today's date is : "<<d1s<<endl<<endl;

		Date dum1(d1a);
		Date dum2 = d1b;

		cout<<"Displaying the use of copy constructor : "<<endl;
		cout<<"The date created by copy constructing first date : "<<dum1<<endl<<endl;

		cout<<"Displaying the use of copy assignment operator : "<<endl;
		cout<<"The date created by assigning the first date : "<<dum2<<endl<<endl;


		cout<<"Displaying the use of Unary operators :"<<endl;
		cout<<"The date after incrementing "<<dum1<<" by one day (prefix) : "<<++d1a<<endl;
		cout<<"The date after incrementing "<<++dum1<<" by one week (postfix) (returns the same date): "<<d1a++<<endl;
		cout<<"The result of incrementing "<<dum1<<" by one week "<<d1a<<endl;
		cout<<"The date after decrementing "<<dum2<<" by one day (prefix): "<<--d1b<<endl;
		cout<<"The date after decrementing "<<--dum2<<" by one week (postfix) (returns the same date): "<<d1b--<<endl;
		cout<<"The result of decrementing "<<dum2<<" by one week "<<d1b<<endl<<endl;

		cout<<"Now the first and second dates have changed : "<<endl;
		cout<<"The first date is : "<<d1a<<endl;
		cout<<"The second date is : "<<d1b<<endl;

		cout<<"The number of days between "<<d1a<<" and "<<d1b<<" is "<<(d1a-d1b)<<endl<<endl;

		Date d1inc = d1a + 5;
		Date d1dec = d1b + (-5);

		cout<<"Displaying the utility of the overloaded + operator : "<<endl;
		cout<<"The date formed by adding five days to "<<d1a<<" is "<<d1inc<<endl;
		cout<<"The date formed by subtracting five days from "<<d1b<<" is "<<d1dec<<endl<<endl;

		cout<<"Displaying the utility of the cast operators : "<<endl;
		cout<<"The atrributes displayed immediately below correspond to "<<d1a<<endl;
		cout<<"Day : "<<Day(d1a)<<endl;
		cout<<"Month : "<<Month(d1a)<<endl;
		cout<<"Year : "<<Year(d1a)<<endl;
		cout<<"WeekDay : ";
		WeekDay week = WeekDay(d1a);
		switch(week)
		{
			case 1:
			cout<<"Monday"<<endl;
			break;
			case 2:
			cout<<"Tuesday"<<endl;
			break;
			case 3:
			cout<<"Wednesday"<<endl;
			break;
			case 4:
			cout<<"Thrusday"<<endl;
			break;
			case 5:
			cout<<"Friday"<<endl;
			break;
			case 6:
			cout<<"Saturday"<<endl;
			break;
			case 7:
			cout<<"Sunday"<<endl;
			break;
			default:
			break;
		}
		cout<<"WeekNumber : "<<WeekNumber(d1a)<<endl<<endl;

		cout<<"Checking whether the Years in the Dates are Leap Years or not : "<<endl;
		if(d1a.leapYear()==true)
		{
			cout<<"The year "<<Year(d1a)<<" is a leapYear"<<endl;
		}
		else
		{
			cout<<"The year "<<Year(d1a)<<" is not a leapYear"<<endl;
		}
		if(d1b.leapYear()==true)
		{
			cout<<"The year "<<Year(d1b)<<" is a leapYear"<<endl;
		}
		else
		{
			cout<<"The year "<<Year(d1b)<<" is not a leapYear"<<endl;
		}
		cout<<endl;

		cout<<"Displaying the use of binary relational operators : "<<endl;
		if(d1a==d1b)
		{
			cout<<"The dates "<<d1a<<" = "<<d1b<<endl;
		}
		if(d1a!=d1b)
		{
			cout<<"The dates "<<d1a<<" != "<<d1b<<endl;
		}
		if(d1a<d1b)
		{
			cout<<"The dates "<<d1a<<" < "<<d1b<<endl;
		}
		if(d1a<=d1b)
		{
			cout<<"The dates "<<d1a<<" <= "<<d1b<<endl;
		}
		if(d1a>d1b)
		{
			cout<<"The dates "<<d1a<<" > "<<d1b<<endl;
		}
		if(d1a>=d1b)
		{
			cout<<"The dates "<<d1a<<" >= "<<d1b<<endl;
		}
		if(d1a==d1a)
		{
			cout<<"The dates "<<d1a<<" = "<<d1a<<endl;
		}
		cout<<endl;
	}
}

void TestDate()
{
	cout<<"Test Report for Assignment 3 : "<<endl;
	cout<<"Name : Sourav Pal "<<endl<<"Roll No.: 14CS10062"<<endl<<endl;
	cout<<"Testing The implementation of Date and DateFormat classes"<<endl<<"-----------------------------------------------------"<<endl;

	//Entering new date in the default format is not accpeted
	try
	{
		Date d1("21-01-2015");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	DateFormat f1("d","m","yy");
	DateFormat f2("d","m","yyyy");
	DateFormat f3("d","mm","yy");
	DateFormat f4("d","mm","yyyy");
	DateFormat f5("dd-m-yy");
	DateFormat f6("dd-m-yyyy");
	DateFormat f7("dd-mm-yy");
	DateFormat f8("dd-mm-yyyy");
	DateFormat f9("0","m","yy");
	DateFormat f10("0","m","yyyy");
	DateFormat f11("0","mm","yy");
	DateFormat f12("0","mm","yyyy");
	DateFormat f13("d-0-yy");
	DateFormat f14("d-0-yyyy");
	DateFormat f15("dd-0-yy");
	DateFormat f16("dd-0-yyyy");
	DateFormat f17("d","mmm","yy");
	DateFormat f18("d","mmm","yyyy");
	DateFormat f19("dd","mmm","yy");
	DateFormat f20("dd","mmm","yyyy");
	DateFormat f21("d-m-0");
	DateFormat f22("d-mm-0");
	DateFormat f23("dd-m-0");
	DateFormat f24("dd-mm-0");
	DateFormat f25("0","0","yy");
	DateFormat f26("0","0","yyyy");
	DateFormat f27("0","mmm","yy");
	DateFormat f28("0","mmm","yyyy");
	DateFormat f29("0-m-0");
	DateFormat f30("0-mm-0");
	DateFormat f31("d-0-0");
	DateFormat f32("dd-0-0");
	DateFormat f33("d-mmm-0");
	DateFormat f34("dd-mmm-0");
	DateFormat f35("0-0-0");
	DateFormat f36("0-mmm-0");
	


	cout<<endl;
	Testing(f2);
	cout<<endl;
	Testing(f3);
	cout<<endl;
	Testing(f4);
	cout<<endl;
	Testing(f5);
	cout<<endl;
	Testing(f6);
	cout<<endl;
	Testing(f7);
	cout<<endl;
	Testing(f8);
	cout<<endl;

	Date::setFormat(f1);

	cout<<"The date format is set to d-m-yy"<<endl;

	Date d1a("1-3-16");
	Date d1b("21-5-12");
	Date d1s;

	cout<<"The first date created is : "<<d1a<<endl;
	cout<<"The second date created is : "<<d1b<<endl;
	cout<<"Today's date is : "<<d1s<<endl<<endl;

	Date dum1(d1a);
	Date dum2 = d1b;

	cout<<"Displaying the use of copy constructor : "<<endl;
	cout<<"The date created by copy constructing "<<d1a<<" : "<<dum1<<endl<<endl;

	cout<<"Displaying the use of copy assignment operator : "<<endl;
	cout<<"The date created by assigning "<<d1b<<" : "<<dum2<<endl<<endl;

	cout<<"Displaying the use of Unary operators :"<<endl;
	cout<<"The date after incrementing "<<dum1<<" by one day (prefix) : "<<++d1a<<endl;
	cout<<"The date after incrementing "<<++dum1<<" by one week (postfix) (returns the same date): "<<d1a++<<endl;
	cout<<"The result of incrementing "<<dum1<<" by one week "<<d1a<<endl;
	cout<<"The date after decrementing "<<dum2<<" by one day (prefix): "<<--d1b<<endl;
	cout<<"The date after decrementing "<<--dum2<<" by one week (postfix) (returns the same date): "<<d1b--<<endl;
	cout<<"The result of decrementing "<<dum2<<" by one week "<<d1b<<endl<<endl;

	cout<<"Now the first and second dates have changed : "<<endl;
	cout<<"The first date is : "<<d1a<<endl;
	cout<<"The second date is : "<<d1b<<endl;

	cout<<"The number of days between "<<d1a<<" and "<<d1b<<" is "<<(d1a-d1b)<<endl<<endl;

	Date d1inc = d1a + 5;
	Date d1dec = d1b + (-5);

	cout<<"Displaying the utility of the overloaded + operator : "<<endl;
	cout<<"The date formed by adding five days to "<<d1a<<" is "<<d1inc<<endl;
	cout<<"The date formed by subtracting five days from "<<d1b<<" is "<<d1dec<<endl<<endl;

	cout<<"Displaying the utility of the cast operators : "<<endl;
	cout<<"The atrributes displayed immediately below correspond to "<<d1a<<endl;
	cout<<"Day : "<<Day(d1a)<<endl;
	cout<<"Month : "<<Month(d1a)<<endl;
	cout<<"Year : "<<Year(d1a)<<endl;
	cout<<"WeekDay : ";
	WeekDay week = WeekDay(d1a);
	switch(week)
	{
		case 1:
		cout<<"Monday"<<endl;
		break;
		case 2:
		cout<<"Tuesday"<<endl;
		break;
		case 3:
		cout<<"Wednesday"<<endl;
		break;
		case 4:
		cout<<"Thrusday"<<endl;
		break;
		case 5:
		cout<<"Friday"<<endl;
		break;
		case 6:
		cout<<"Saturday"<<endl;
		break;
		case 7:
		cout<<"Sunday"<<endl;
		break;
		default:
		break;
	}
	cout<<"WeekNumber : "<<WeekNumber(d1a)<<endl<<endl;

	cout<<"Checking whether the Years in the Dates are Leap Years or not : "<<endl;
	if(d1a.leapYear()==true)
	{
		cout<<"The year "<<Year(d1a)<<" is a leapYear"<<endl;
	}
	else
	{
		cout<<"The year "<<Year(d1a)<<" is not a leapYear"<<endl;
	}
	if(d1b.leapYear()==true)
	{
		cout<<"The year "<<Year(d1b)<<" is a leapYear"<<endl;
	}
	else
	{
		cout<<"The year "<<Year(d1b)<<" is not a leapYear"<<endl;
	}
	cout<<endl;

	cout<<"Displaying the use of binary relational operators : "<<endl;
	if(d1a==d1b)
	{
		cout<<"The dates "<<d1a<<" = "<<d1b<<endl;
	}
	if(d1a!=d1b)
	{
		cout<<"The dates "<<d1a<<" != "<<d1b<<endl;
	}
	if(d1a<d1b)
	{
		cout<<"The dates "<<d1a<<" < "<<d1b<<endl;
	}
	if(d1a<=d1b)
	{
		cout<<"The dates "<<d1a<<" <= "<<d1b<<endl;
	}
	if(d1a>d1b)
	{
		cout<<"The dates "<<d1a<<" > "<<d1b<<endl;
	}
	if(d1a>=d1b)
	{
		cout<<"The dates "<<d1a<<" >= "<<d1b<<endl;
	}
	if(d1a==d1a)
	{
		cout<<"The dates "<<d1a<<" = "<<d1a<<endl;
	}
	cout<<endl;

	cout<<"Displaying the date "<<d1a<<" in different formats:"<<endl;

	Date::setFormat(f1);
	cout<<"Format: "<<f1.getDateFormat()<<'-'<<f1.getMonthFormat()<<'-'<<f1.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f2);
	cout<<"Format: "<<f2.getDateFormat()<<'-'<<f2.getMonthFormat()<<'-'<<f2.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f3);
	cout<<"Format: "<<f3.getDateFormat()<<'-'<<f3.getMonthFormat()<<'-'<<f3.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f4);
	cout<<"Format: "<<f4.getDateFormat()<<'-'<<f4.getMonthFormat()<<'-'<<f4.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f5);
	cout<<"Format: "<<f5.getDateFormat()<<'-'<<f5.getMonthFormat()<<'-'<<f5.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f6);
	cout<<"Format: "<<f6.getDateFormat()<<'-'<<f6.getMonthFormat()<<'-'<<f6.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f7);
	cout<<"Format: "<<f7.getDateFormat()<<'-'<<f7.getMonthFormat()<<'-'<<f7.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f8);
	cout<<"Format: "<<f8.getDateFormat()<<'-'<<f8.getMonthFormat()<<'-'<<f8.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f9);
	cout<<"Format: "<<f9.getDateFormat()<<'-'<<f9.getMonthFormat()<<'-'<<f9.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f10);
	cout<<"Format: "<<f10.getDateFormat()<<'-'<<f10.getMonthFormat()<<'-'<<f10.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f11);
	cout<<"Format: "<<f11.getDateFormat()<<'-'<<f11.getMonthFormat()<<'-'<<f11.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f12);
	cout<<"Format: "<<f12.getDateFormat()<<'-'<<f12.getMonthFormat()<<'-'<<f12.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f13);
	cout<<"Format: "<<f13.getDateFormat()<<'-'<<f13.getMonthFormat()<<'-'<<f13.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f14);
	cout<<"Format: "<<f14.getDateFormat()<<'-'<<f14.getMonthFormat()<<'-'<<f14.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f15);
	cout<<"Format: "<<f15.getDateFormat()<<'-'<<f15.getMonthFormat()<<'-'<<f15.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f16);
	cout<<"Format: "<<f16.getDateFormat()<<'-'<<f16.getMonthFormat()<<'-'<<f16.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f17);
	cout<<"Format: "<<f17.getDateFormat()<<'-'<<f17.getMonthFormat()<<'-'<<f17.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f18);
	cout<<"Format: "<<f18.getDateFormat()<<'-'<<f18.getMonthFormat()<<'-'<<f18.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f19);
	cout<<"Format: "<<f19.getDateFormat()<<'-'<<f19.getMonthFormat()<<'-'<<f19.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f20);
	cout<<"Format: "<<f20.getDateFormat()<<'-'<<f20.getMonthFormat()<<'-'<<f20.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f21);
	cout<<"Format: "<<f21.getDateFormat()<<'-'<<f21.getMonthFormat()<<'-'<<f21.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f22);
	cout<<"Format: "<<f22.getDateFormat()<<'-'<<f22.getMonthFormat()<<'-'<<f22.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f23);
	cout<<"Format: "<<f23.getDateFormat()<<'-'<<f23.getMonthFormat()<<'-'<<f23.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f24);
	cout<<"Format: "<<f24.getDateFormat()<<'-'<<f24.getMonthFormat()<<'-'<<f24.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f25);
	cout<<"Format: "<<f25.getDateFormat()<<'-'<<f25.getMonthFormat()<<'-'<<f25.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f26);
	cout<<"Format: "<<f26.getDateFormat()<<'-'<<f26.getMonthFormat()<<'-'<<f26.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f27);
	cout<<"Format: "<<f27.getDateFormat()<<'-'<<f27.getMonthFormat()<<'-'<<f27.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f28);
	cout<<"Format: "<<f28.getDateFormat()<<'-'<<f28.getMonthFormat()<<'-'<<f28.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f29);
	cout<<"Format: "<<f29.getDateFormat()<<'-'<<f29.getMonthFormat()<<'-'<<f29.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f30);
	cout<<"Format: "<<f30.getDateFormat()<<'-'<<f30.getMonthFormat()<<'-'<<f30.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f31);
	cout<<"Format: "<<f31.getDateFormat()<<'-'<<f31.getMonthFormat()<<'-'<<f31.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f32);
	cout<<"Format: "<<f32.getDateFormat()<<'-'<<f32.getMonthFormat()<<'-'<<f32.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f33);
	cout<<"Format: "<<f33.getDateFormat()<<'-'<<f33.getMonthFormat()<<'-'<<f33.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f34);
	cout<<"Format: "<<f34.getDateFormat()<<'-'<<f34.getMonthFormat()<<'-'<<f34.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f35);
	cout<<"Format: "<<f35.getDateFormat()<<'-'<<f35.getMonthFormat()<<'-'<<f35.getYearFormat()<<"--Date : "<<d1a<<endl;
	Date::setFormat(f36);
	cout<<"Format: "<<f36.getDateFormat()<<'-'<<f36.getMonthFormat()<<'-'<<f36.getYearFormat()<<"--Date : "<<d1a<<endl<<endl;


	cout<<"The results displayed below arise due to the exceptions handeled : "<<endl<<endl;

	Date::setFormat(f1);
	cout<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;


	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("33-03-65");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("29-02-95");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	
	Date::setFormat(f2);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-99");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("32-06-1956");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("29-02-2015");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("29-04-2075");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f3);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("2-3-99");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("1-06-1956");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("31-04-15");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("31-15-15");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	
	Date::setFormat(f4);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("1-03-99");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("30-6-1956");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("29-02-2015");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("50-04-2016");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("31-04-2016");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("10-04-1905");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f5);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("2-3-99");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("32-6-56");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("31-2-15");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	
	Date::setFormat(f6);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("1-03-99");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("30-6-56");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("35-02-2015");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("31-4-2016");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("31-5-2072");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	
	Date::setFormat(f7);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("2-03-99");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("30-6-56");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("31-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("41-03-95");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("31-02-95");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f8);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("1-03-1999");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("03-6-1956");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("30-04-15");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("33-04-2016");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("31-06-2002");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	try
	{
		Date d1("31-05-1890");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	cout<<endl<<"The Exceptions shown below are due to Invalid Format of accpeting input :"<<endl;

	Date::setFormat(f9);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f10);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f11);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f12);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f13);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f14);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f15);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f16);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f17);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f18);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f19);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f20);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f21);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f22);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f23);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f24);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f25);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f26);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f27);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f28);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f29);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f30);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f31);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f32);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f33);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f34);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f35);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	Date::setFormat(f36);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;

	try
	{
		Date d1("01-03-1995");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	cout<<endl<<"The following exceptions are due to various operations on the already created dates: "<<endl;

	Date::setFormat(f8);
	cout<<endl<<"Current Date Format : "<<d1s.getFormat().getDateFormat()<<'-'<<d1s.getFormat().getMonthFormat()<<'-'<<d1s.getFormat().getYearFormat()<<endl;


	Date one("31-12-2049");
	cout<<"Date created : "<<one<<endl;
	Date two("26-12-2049");
	cout<<"Date created : "<<two<<endl;
	Date three("01-01-1950");
	cout<<"Date created : "<<three<<endl;
	Date four(Day(3),Month(1),Year(1950));
	cout<<"Date created : "<<four<<endl;
	Date five(Day(22),Month(12),Year(2049));
	cout<<"Date created : "<<five<<endl;

	try
	{
		cout<<endl<<"Trying to increment "<<one<<" by one day"<<endl;
		++one;
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	try
	{
		cout<<endl<<"Trying to increment "<<two<<" by seven days"<<endl;
		two++;
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	try
	{
		cout<<endl<<"Trying to decrement "<<three<<" by one day"<<endl;
		--three;
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	try
	{
		cout<<endl<<"Trying to decrement "<<four<<" by seven days"<<endl;
		four--;
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	try
	{
		cout<<endl<<"Trying to add 10 days to "<<five<<endl;
		Date nDate = five + 10;
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	cout<<endl<<"The following exceptions also arise :"<<endl<<endl;
	try
	{
		Date nDate("sd-45-jhgj");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	try
	{
		Date nDate("dhgajg");
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	try
	{
		Date nDate(Day(32),Month(03),Year(1997));
		cout<<nDate<<endl;
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	try
	{
		Date nDate(Day(29),Month(02),Year(1997));
		cout<<nDate<<endl;
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}

	try
	{
		Date nDate(Day(31),Month(03),Year(1900));
		cout<<nDate<<endl;
	}
	catch(Invalid_Argument& e)
	{
		cout<<e<<endl;
	}
	catch(Domain_Error& e)
	{
		cout<<e<<endl;
	}
	catch(Out_Of_Range& e)
	{
		cout<<e<<endl;
	}
	cout<<endl;

	cout<<"-------------------------------------------------------------------------------------"<<endl<<endl;

}


int main(int argc, char const *argv[])
{
	TestDate();
	return 0;
}