#include <iostream>
using namespace std;

int main()
{
	char a = 0;
	while(1){
	cout << "If you would like to get a resistor value based on colors, type '0'" << endl;
	cout << "If you would like to get resistor colors based on a value, type '1'" << endl;
	cin >> a;
	if(a=='0')
	{
		string tolerance;
		int resistance = 0;
		string a,b,c,d;
		cout << "Enter colors of 4-band resistor with <Enter> in between(lowercase): " << endl;
		cin >> a >> b >> c >> d;
		if(a == "brown")
			resistance+=10;
		else if(a == "red")
			resistance+=20;
		else if(a == "orange")
			resistance+=30;
		else if(a == "yellow")
			resistance+=40;
		else if(a == "green")
			resistance+=50;
		else if(a == "blue")
			resistance+=60;
		else if(a == "violet" || a == "purple")
			resistance+=70;
		else if(a == "grey")
			resistance+=80;
		else if(a == "white")
			resistance+=90;
		if(b == "black")
			resistance+=0;
		else if(b == "brown")
			resistance+=1;
		else if(b == "red")
			resistance+=2;
		else if(b == "orange")
			resistance+=3;
		else if(b == "yellow")
			resistance+=4;
		else if(b == "green")
			resistance+=5;
		else if(b == "blue")
			resistance+=6;
		else if(b == "violet" || b == "purple")
			resistance+=7;
		else if(b == "grey")
			resistance+=8;
		else if(b == "white")
			resistance+=9;
		if(c == "black")
			resistance*=1;
		else if(c == "brown")
			resistance*=10;
		else if(c == "red")
			resistance*=100;
		else if(c == "orange")
			resistance*=1000;
		else if(c == "yellow")
			resistance*=10000;
		else if(c == "green")
			resistance*=100000;
		else if(c == "blue")
			resistance*=1000000;
		else if(c == "violet" || d == "purple")
			resistance*=10000000;
		if(d == "brown")
			tolerance = "1%";
		else if(d == "red")
			tolerance = "2%";
		else if(d == "green")
			tolerance = "0.5%";
		else if(d == "blue")
			tolerance = "0.25%";
		else if(d == "violet" || d == "purple")
			tolerance = "0.1%";
		else if(d == "grey")
			tolerance = "0.05%";
		else if(d == "gold")
			tolerance = "5%";
		else if(d == "silver")
			tolerance = "10%";
		cout << "Resistor Value: " << resistance << " " << tolerance << endl;
		break;
	}
	else if(a=='1')
	{
		int resistance;
		string first;
		string second;
		string mult;
		string tolerance;
		string tolcolor;
		cout << "Enter resistor value and then the desired tolerance separated by <Enter>. If no tolerance, input 0: " << endl;
		cin >> resistance;
		cin >> tolerance;
		if(resistance/100000000!=0)
		{
			resistance/=10000000;
			mult = "violet";
		}
		else if(resistance/10000000!=0)
		{
			resistance/=1000000;
			mult = "blue";
		}
		else if(resistance/1000000!=0)
		{
			resistance/=100000;
			mult = "green";
		}
		else if(resistance/100000!=0)
		{
			resistance/=10000;
			mult = "yellow";
		}
		else if(resistance/10000!=0)
		{
			resistance/=1000;
			mult = "orange";
		}
		else if(resistance/1000!=0)
		{
			resistance/=100;
			mult = "red";
		}
		else if(resistance/100!=0)
		{
			resistance/=10;
			mult = "brown";
		}
		else
			mult = "black";
		if(resistance%10==0)
			second = "black";
		else if(resistance%10==1)
			second = "brown";
		else if(resistance%10==2)
			second = "red";
		else if(resistance%10==3)
			second = "orange";
		else if(resistance%10==4)
			second = "yellow";
		else if(resistance%10==5)
			second = "green";
		else if(resistance%10==6)
			second = "blue";
		else if(resistance%10==7)
			second = "violet";
		else if(resistance%10==8)
			second = "grey";
		else if(resistance%10==9)
			second = "white";
		resistance/=10;
		if(resistance==0)
			first = "black";
		else if(resistance==1)
			first = "brown";
		else if(resistance==2)
			first = "red";
		else if(resistance==3)
			first = "orange";
		else if(resistance==4)
			first = "yellow";
		else if(resistance==5)
			first = "green";
		else if(resistance==6)
			first = "blue";
		else if(resistance==7)
			first = "violet";
		else if(resistance==8)
			first = "grey";
		else if(resistance==9)
			first = "white";

		if(tolerance=="1")
			tolcolor = "brown";
		else if(tolerance=="2")
			tolcolor = "brown";
		else if(tolerance==".5")
			tolcolor = "green";
		else if(tolerance==".25")
			tolcolor = "blue";
		else if(tolerance==".1")
			tolcolor = "violet";
		else if(tolerance==".05")
			tolcolor = "grey";
		else if(tolerance=="5")
			tolcolor = "5";
		else if(tolerance=="10")
			tolcolor = "silver";
		else
			tolcolor = "";

		cout << "Resistor color code: " << first << " " << second << " " << mult << " " << tolcolor << endl;
		break;
	}
	else
	{
		cout << "error" << endl;
		exit(1);
	}
}
	return 0;
}