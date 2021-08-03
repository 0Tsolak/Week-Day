#include "calendar.hpp"

int Calendar(int y, int m, int d)
{
        int t[] = {0,3,2,5,0,3,5,1,4,6,2,4};

        if (m < 3)
	{
	        y -=1;
        }
        int cal;
        cal = (y+y/4-y/100+y/400+t[m-1]+d)%7;
        
        switch(cal)
	{
                case 0:
                        cout << "Sunday\n";
                break;

                case 1:
                        cout << "Monday\n";
                break;

                case 2:
                        cout << "Tuesday\n";
                break;

                case 3:
                        cout << "Wednesday\n";
                break;

                case 4:
                        cout << "Thursday\n";
                break;

                case 5:
                        cout << "Friday\n";
                break;

                case 6:
                        cout << "Saturday\n";
                break;




        }
                return cal;
}
