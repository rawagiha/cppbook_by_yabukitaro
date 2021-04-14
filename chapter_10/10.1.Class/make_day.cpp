#include "mm_dd_yyyy.h"
#include <iostream>

int main() {
    Date today(4, 14, 2021);

    std::cout << "April Forteenth in Two Thousand Twenty One: " 
              << today.get_month() << "-"
              << today.get_day() << "-"
              << today.get_year() << std::endl;
} 
