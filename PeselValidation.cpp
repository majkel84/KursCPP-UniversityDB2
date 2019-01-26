#include "PeselValidation.hpp"

PeselError isPeselValid(int64_t pesel);

int32_t getDate(int64_t pesel);  //return tuple

PeselError isDateValid(int year, int month, int day);

int32_t getSerialNo(int64_t pesel);

Gender getGender(int32_t serial_no);

PeselError isCheckSumValid(int64_t pesel);
