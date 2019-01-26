#include "PeselValidation.hpp"

PeselError isPeselValid(int64_t pesel);

int32_t getDate(int64_t pesel);  //return tuple

PeselError isDateValid(int year, int month, int day);

int32_t getSerialNo(int64_t pesel);

Gender getGender(int32_t serial_no);

PeselError isCheckSumValid(int64_t pesel) {
    int a = pesel / 10000000000 % 10;
    int b = pesel / 1000000000 % 10;
    int c = pesel / 100000000 % 10;
    int d = pesel / 10000000 % 10;
    int e = pesel / 1000000 % 10;
    int f = pesel / 100000 % 10;
    int g = pesel / 10000 % 10;
    int h = pesel / 1000 % 10;
    int i = pesel / 100 % 10;
    int j = pesel / 10 % 10;
    int k = pesel / 1 % 10;

    int checksum = (9*a + 7*b + 3*c + d + 9*e + 7*f + 3*g + h + 9*i + 7*j) % 10;

    return (checksum == k) ? PeselError::ok_success : PeselError::invalid_checksum;
}
