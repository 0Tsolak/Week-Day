#include "calendar.hpp"


int main(){
        int Year;
        int Mounth;
        int Day;
        cout << "input Year / Mounth / Day\n";
        cin >> Year;
        cin >> Mounth;
        cin >> Day;
        cout << (Calendar(Year, Mounth, Day));
        return 0;
}


