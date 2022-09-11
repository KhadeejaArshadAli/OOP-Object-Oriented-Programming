#include <iostream>
using namespace std;

class office{
    public:
        office();
        ~office();
};
class desk{
    public:
        desk();
        ~desk();
};

class pc {
    public:
        pc();
        ~pc();
        void turn_on();
        void turn_off();

};

class employee{
    public:
    desk mydesk;
office *myoffice;
        employee(office *o);
        ~employee();
};

class boss : public employee{
    public:
    pc mypc;
        boss(office *o);     
        ~boss();
};
