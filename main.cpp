#include <iostream>
using namespace std;

#define D1 "monday"
#define D2 "tuesday"
#define D3 "wednesday"
#define D4 "thursday"
#define D5 "friday"
#define D6 "saturday"
#define D7 "sunday"

#define WEEK_DAY(a) D ## a

int main() {
    int day;
    cin>>day;
    if(day==1)cout<<WEEK_DAY(1);
    else if(day==2)cout<<WEEK_DAY(2);
    else if(day==3)cout<<WEEK_DAY(3);
    else if(day==4)cout<<WEEK_DAY(4);
    else if(day==5)cout<<WEEK_DAY(5);
    else if(day==6)cout<<WEEK_DAY(6);
    else if(day==7)cout<<WEEK_DAY(7);
    return 0;
}
