#include<iostream>
#include<string>
using namespace std;

int main()
{
	bool choice = 1;
	while (choice == 1)
	{
		int Option;
		
		cout << "Press 1 for  measurement  of Rainfall in a year   " << endl;
		cout << "Press 2 for  Salsa  Program                       " << endl;
		cout << "Press 3 for convertion of lowercase into uppercase" << endl;
		cout << "Press 4 for wages slaray Program                  " << endl;
		cin >> Option;
		if (Option == 1)
		{

			//Variable Decleration
			double Year = 0.0, sum = 0.0, average;
			int maxrain = 0;
			double maxrain1;
			int minrain = 0;
			double minrain1;
			
			const int months = 12;
			double rain[months];
			string highmonth;
			string lowmonth;
			string namesofmonth[12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };


			for (int input = 0; input < 12; input++)//getting input for months
			{
				cout << "Enter the Monthly Rain Report " << namesofmonth[input] << ": " << endl;
				cin >> rain[input];

				sum = sum + rain[input];//total rainfall

			
				average = sum / 12;	// Calculation of  Average Rainfall
			}

			

			for (int j = 1; j < 12; j++)//To Calculate the Months Highest Rainfall Rate

				if (rain[maxrain] < rain[j])
				{
					maxrain = j;

					highmonth = namesofmonth[j];
					maxrain1 = rain[maxrain];

				}


			for (int k = 1; k<12; k++)//Calculation of Low Rainfall

				if (rain[minrain] > rain[k])
				{
					minrain = k;

					lowmonth = namesofmonth[k];
					minrain1 = rain[minrain];

				}

			cout << "The Total Rainfall Yearly is Measured as:" << sum << endl;
			cout << "The Average Rainfall Yearly is Measured as:" << average << endl;
			cout << "The Maximum Rainfall is Calculated as" << highmonth << " with " << maxrain1 << "in inches" << endl;
			cout << "The Minimum Rainfall is Calculated as" << lowmonth << " with " << minrain1 << "in inches" << endl;
		}
		if (choice == 2)
		{
			// salsa program
			string Dishes[5] = { "MildSalsa","MidiumSalsa","SweetSalsa","HotSalsa ","ZestySalsa" };
			int JarSold[5],TotalSales = 0;
			string LowSale, HighSale;
			

			for (int jsold = 0; jsold < 5; jsold++)//number of jar sold
			{
				cout << "Jars Sold in " << Dishes[jsold] << "Month : " << endl;
				cin >> JarSold[jsold];
			}
			for (int j = 0; j < 5; j++)
			{
				cout << Dishes[j] << " ITEM SALE   = " << JarSold[j] << endl;
				TotalSales = TotalSales + JarSold[j];
			}
			int highest = JarSold[0];//high jarsold month
			
			int lowest = JarSold[0];//low jar sold month
			for (int k = 0; k < 5; k++)
			{
				if (JarSold[k] > highest)
				{

					highest = JarSold[k];
				}
				else if (JarSold[k] < lowest)
				{

					lowest = JarSold[k];
				}
			}

			cout << "Total Sale is  =" << TotalSales << endl;
			cout << "Month with the Highest Amount of Jarsold is  " << highest << endl;
			cout << "Month with the Lowest Amount of Jarsold is   " << lowest << endl;

		}
		if (choice == 3)
		{
			
			char Array[100];//character Array
			
			cout << "Enter a String of any Lenght" << endl;//Input characters to convert
			cin >> Array;
			for (int i = 0; i < Array[100]; i++)
			{
				if (Array[i] >= 97 && Array[i] <= 122)//97 for small a and 122 for small z it shouldnot be present
				{
					Array[i] = Array[i] - 32;

					cout << "The Given LowerCase Letter is Converted To UpperCase:" << Array[i] << endl;
				}
				else
					cout << "The Given Character is already an Uppercase:" << Array[i] << endl;
			}
		}
		if (choice == 4)
		{
			//Initilizing an Array with Values

			int empid[7] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489 };
			int Hours[7];
			double PayRate[7];
			double Wages[7];


			//Adding Loops in a Given Array to Input Values

			for (int index = 0; index < 7; index++)
			{
				cout << "Please Enter The Hours Worked by the Workers " << empid[index] << " as follow =" << endl;
				cin >> Hours[index];

				//To Check the Given Data as follow

				if (Hours[index] < 0)
				{
					cout << "You Enter the negative number please Enter the positive number" << endl;
					cout << "Please Enter the Workers ID as given to the Worker " << empid[index] << "as follow  =" << endl;
					cin >> Hours[index];
				}
				cout << "Please Enter the Workers PayRate " << empid[index] << "as follow  =";
				cin >> PayRate[index];

				//To Check the Given Data as follow

				if (PayRate[index] < 0)
				{
					cout << "You Enter the negative number please Enter the positive number" << endl;
					cout << "Please Enter the Workers ID as given to the Worker " << empid[index] << "as follow  =";
					cin >> PayRate[index];
				}
				//To Calculate the Wages
				Wages[index] = Hours[index] + PayRate[index];
			}
			//The OuTPUT OF The Given Result

			cout << "The Total Gross Pay Rate of Each Worker is Given as :" << endl;
			for (int i = 0; i < 7; i++)
			{
				cout << "The Workers Id is" << empid[i] << "and the Earned Dollars are" << Wages[i] << endl;
			}
		}
		cout << "PRESS ' 1 ' If u Want To Enter Another Program" << endl;
		cout << "PRESS ' 0 ' If u Want Exit Finallyyyy!!!!!!" << endl;
		cin >> choice;

	}
	return 0;
}
 
