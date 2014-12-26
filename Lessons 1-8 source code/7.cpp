#include <iostream>

using namespace std;

namespace Xmas
{
 	int month = 12;
 	int day = 25;
 	int year = 2005;
}

namespace Easter
{
 	int month = 3;
 	int day = 27;
 	int year = 2005;
}

int main()
{
 	cout<<"Christmas is going to be on "<<Xmas::month<<"/"<<Xmas::day<<"/"<<Xmas::year<<"."<<endl;
 	cout<<"Easter was on "<<Easter::month<<"/"<<Easter::day<<"/"<<Easter::year<<"."<<endl;
 	system("PAUSE");
 	return 1;
}
