#include <iostream>
#include <cmath>
#include <conio.h> 
using namespace std;
void Addition();
void Subtraction();
void Division();
void Multiplication();
void Percentage();
void Error();
void Stars();
void Exponents();
void Sqrt();
void Log();
void Multiples();
int main()
{
	int choice;
	REPEAT:
	//int i;
	cout<<"\t\t";
	Stars();
	cout<<"\n\t\t\t CALCULATOR\n";
	cout<<"\t\t";
	Stars();
	cout<<"\n1. Addition\n";
	cout<<"2. Subtraction\n";
	cout<<"3. Division\n";
	cout<<"4. Multiplication\n";
	cout<<"5. Decimal of a Fraction\n";
	cout<<"6. Power of a number\n";
	cout<<"7. Square root of a number\n";
	cout<<"8. Log\n";
	cout<<"9. Multiplication table of a number\n";
	cout<<"Input a number between 1 to 9\n\n";
	if (cin>>choice)
	
while((choice==0)||(choice==1)||(choice==2)||(choice==3)||(choice==4)||(choice==5)||(choice==6)||(choice==7)||(choice==8)||(choice==9)||(choice>=10))
{

	if (choice==1)
	{
		system("cls");
		Addition();
		goto REPEAT;
	}
	else if (choice==2)
	{
		system("cls");
		Subtraction();
		goto REPEAT;
	}
	else if (choice==3)
	{
		system("cls");
		Division();
		goto REPEAT;
	}
	else if (choice==4)
	{
		system("cls");
		Multiplication();
		goto REPEAT;
	}
	else if (choice==5)
	{
		system("cls");
		Percentage();
		goto REPEAT;
	}
	else if (choice==6)
	{
		system("cls");
		Exponents();
		goto REPEAT;
	}
	else if (choice==7)
	{
		system("cls");
		Sqrt();
		goto REPEAT;
	}
	else if (choice==8)
	{
		system("cls");
		Log();
		goto REPEAT;
	}
	else if (choice==9)
	{
		system("cls");
		Multiples();
		goto REPEAT;
	}
    else if ((choice==0)||(choice>=10))
    {
    system("cls");
	Error();
	goto REPEAT;
    }

	return 0;
}
}
	void Addition()
	{
			AGAIN:
	float sum = 0, num = 0;
		int option;
		cout<<"Enter numbers to be added and Enter 0 to compute\n";
		do
		{
			cin>>num;
			sum+=num;
		}while(num!=0);
		cout<<"Sum: "<<sum<<endl;
		cout<<"\n1 to repeat this action\n";
		cout<<"\n2 to main menu\n\n";
		if(cin>>option)
		while((option==1)||(option==2)||(option>2))
		{
			if(option==1)
			{
				system("cls");
				goto AGAIN;
			}
			else if(option==2)
			{
				system("cls");
				main();
			}
			else if(option>2)
			{
				system("cls");
				cout<<"Wrong Input...................\n\n";
				cout<<"Please input again\n\n";
				goto AGAIN;
			}
		}
	}

	void Subtraction()
	{
			AGAIN:
		float min = 0, num = 0, a = 0;
		int option;
	
		cout<<"Enter numbers to be subtracted and Enter 0 to compute\n";
		do
		{
			cin>>num;
			a+=1;
			if(a==1)
			{
				min=num;
			}
			else
			{
				min-=num;
			}
		}while(num!=0);
		cout<<"Result: "<<min<<endl;
		cout<<"\n1 to repeat this action\n";
		cout<<"\n2 to main menu\n\n";
		if(cin>>option)
		while((option==1)||(option==2)||(option>2))
		{
			if(option==1)
			{
				system("cls");
				goto AGAIN;
			}
			else if(option==2)
			{
				system("cls");
				main();
			}
				else if(option>2)
			{
				system("cls");
				cout<<"Wrong Input...................\n\n";
				cout<<"Please input again\n\n";
				goto AGAIN;
			}
		}
	}
	void Division()
	{
		float a,b;
		int option;
		AGAIN:
		cout<<"Enter any two numbers to be divided\n";
		cin>>a;
		cin>>b;
		cout<<a<<"/"<<b<<" = "<<a/b<<endl;
		cout<<"\n1 to repeat this action\n";
		cout<<"\n2 to main menu\n";
		if(cin>>option)
		while((option==1)||(option==2)||(option>2))
		{
			if(option==1)
			{
				system("cls");
				goto AGAIN;
			}
			else if(option==2)
			{
				system("cls");
				main();
			}
				else if(option>2)
			{
				system("cls");
				cout<<"Wrong Input...................\n\n";
				cout<<"Please input again\n\n";
				goto AGAIN;
			}
		}
	}
     void Multiplication()
	{
		float mult = 0, num = 0, a = 0;
		int option;
		AGAIN:
		cout<<"Enter any amount of numbers to be multiplied and 0 to compute\n";
			do
		{
			cin>>num;
			a += 1;
			if(a==1)
			{
				mult = num;
			}
			else
			{
				if(num!=0)
				mult *= num;
			}
		}while(num!=0);
		cout<<"Result: "<<mult<<endl;
		cout<<"\n1 to repeat this action\n";
		cout<<"\n2 to main menu\n\n";
		if(cin>>option)
		while((option==1)||(option==2)||(option>2))
		{
			if(option==1)
			{
				system("cls");
				goto AGAIN;
			}
			else if(option==2)
			{
				system("cls");
				main();
			}
				else if(option>2)
			{
				system("cls");
				cout<<"Wrong Input...................\n\n";
				cout<<"Please input again\n\n";
				goto AGAIN;
			}
		}
	}
	void Percentage()
	{
		float a, b;
		int option; 
		AGAIN:
		cout<<"What number would you like to find the decimal of?\n";
		cin>>a;
		cin>>b;
//		cout<<a<<"%"<<" = "<<a/100<<endl;
		cout<<"Percentage of "<<a<<"/ "<<b<<"= "<<a/b<<endl; 
		cout<<"\n1 to repeat this action\n";
		cout<<"\n2 to main menu\n\n";
		if(cin>>option)
		while((option==1)||(option==2)||(option>2))
		{
			if(option==1)
			{
				system("cls");
				goto AGAIN;
			}
			else if(option==2)
			{
				system("cls");
				main();
			}
				else if(option>2)
			{
				system("cls");
				cout<<"Wrong Input...................\n\n";
				cout<<"Please input again\n\n";
				goto AGAIN;
			}
		}
	}
	void Error()
	{
		cout<<"Wrong Input...................\n\n";
		cout<<"Please input again\n\n";
		 main();
	}
	void Stars()
{
	int i;
	for(i=1;i<=30;i++)
	cout<<"*";
}
void Exponents()
 {
 	float a,b;
 	int option;
 	AGAIN:
 	cout<<"Enter base \n";
 	cin>>a;
 	cout<<"Enter an exponent \n";
 	cin>>b;
 	cout<<a<<"^"<<b<<" = "<<pow(a,b)<<endl;
 	cout<<"\n1 to repeat this action\n";
		cout<<"\n2 to main menu\n\n";
		if(cin>>option)
		while((option==1)||(option==2)||(option>2))
		{
			if(option==1)
			{
				system("cls");
				goto AGAIN;
			}
			else if(option==2)
			{
				system("cls");
				main();
			}
				else if(option>2)
			{
				system("cls");
				cout<<"Wrong Input...................\n\n";
				cout<<"Please input again\n\n";
				goto AGAIN;
			}
		}
 }
 void Sqrt()
 {
 	float a;
 	int option;
 	AGAIN:
 	cout<<"What number would you like to find the square root of ?\n";
 	cin>>a;
 	cout<<"Square root of "<<a<<" = "<<sqrt(a)<<endl;
 	cout<<"\n1 to repeat this action\n";
		cout<<"\n2 to main menu\n\n";
		if(cin>>option)
		while((option==1)||(option==2)||(option>2))
		{
			if(option==1)
			{
				system("cls");
				goto AGAIN;
			}
			else if(option==2)
			{
				system("cls");
				main();
			}
				else if(option>2)
			{
				system("cls");
				cout<<"Wrong Input...................\n\n";
				cout<<"Please input again\n\n";
				goto AGAIN;
			}
		}
 }
 void Log()
 {
 	float a;
 	int option;
 	AGAIN:
 	cout<<"What number would you like to find the Log of ?\n";
 	cin>>a;
 	cout<<"Log("<<a<<") = "<<log10(a)<<endl;
 	cout<<"\n1 to repeat this action\n";
		cout<<"\n2 to main menu\n\n";
		if(cin>>option)
		while((option==1)||(option==2)||(option>2))
		{
			if(option==1)
			{
				system("cls");
				goto AGAIN;
			}
			else if(option==2)
			{
				system("cls");
				main();
			}
				else if(option>2)
			{
				system("cls");
				cout<<"Wrong Input...................\n\n";
				cout<<"Please input again\n\n";
				goto AGAIN;
			}
		}
 }
 void Multiples()
 {
 	int option;
 	int a;
 	int range;
 	AGAIN:
 		cout<<"What number would you like to find the Multiplication table of?\n";
 		cin>>a;
 		cout<<"Enter range (Number of times you want the number to be multiplied)\n";
 		cin>>range;
 		for(int b = 1; b<=range; ++b)
 		{
 			cout<<a<<" x "<<b<<" = "<<a*b<<endl;
		}
	cout<<"\n1 to repeat this action\n";
		cout<<"\n2 to main menu\n\n";
		if(cin>>option)
		while((option==1)||(option==2)||(option>2))
		{
			if(option==1)
			{
				system("cls");
				goto AGAIN;
			}
			else if(option==2)
			{
				system("cls");
				main();
			}
				else if(option>2)
			{
				system("cls");
				cout<<"Wrong Input...................\n\n";
				cout<<"Please input again\n\n";
				goto AGAIN;
			}
		}
 }
 
 
 
 
 
 
