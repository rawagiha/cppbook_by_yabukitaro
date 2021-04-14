#ifndef MM_DD_YYYY_H
#define MM_DD_YYYY_H

class Date {
    int __month;
    int __day;
    int __year;

public:
    // def constructor
    Date(int month, int day, int year);
    
    void set_date(int month, int day, int year);

    int get_month() {return __month;}
    int get_day() {return __day;}
    int get_year() {return __year;}
};

#endif 
