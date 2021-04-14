#include "mm_dd_yyyy.h"

Date::Date(int month, int day, int year) {
    set_date(month, day, year);
}

void Date::set_date(int month, int day, int year) {
    __month = month;
    __day = day;
    __year = year;
}
