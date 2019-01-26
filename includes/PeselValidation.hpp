#pragma once
#include "Person.hpp"

enum PeselError {
  ok_success        = 0,
  invalid_day       = 1,
  invalid_month     = 2,
  invalid_year      = 4,
  invalid_gender    = 8,
  invalid_checksum  = 16
};

PeselError isPeselValid(int64_t pesel);
int32_t getDate(int64_t pesel);  //return tuple
PeselError isDateValid(int year, int month, int day);
int32_t getSerialNo(int64_t pesel);
Gender getGender(int32_t serial_no);
PeselError isCheckSumValid(int64_t pesel);
