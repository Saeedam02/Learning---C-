// Ex2_07.cpp - The width, alignment, fill, and 0 formatting options of std::println()
import <iostream>;
import <compare>;

int main()
{
    int number {10};
    char name[] {"hassan"};

    std::cout << "your name is " << name << "and your number is " << number << "." << std::endl;
// // Default alignment: right for numbers, left otherwise
// std::cout <<"{:7}|{:7}|{:7}|{:7}", 1, -.2, "str", 'c'<< std::endl;
// // Left and right alignment + custom fill character
// std::cout <<"{:*<7}|{:*<7}|{:*>7}|{:*>7}", 1, -.2, "str", 'c'<< std::endl;
// // 0 formatting option for numbers + centered alignment
// std::cout <<"{:07}|{:07}|{:^7}|{:^7}", 1, -.2, "str", 'c'<< std::endl;
}