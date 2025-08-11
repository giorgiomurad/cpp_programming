#include <ctime>

time_t timestamp;   // Data type for stroing timestamps
tm datetime;        // Data type for datetime structures


// - Timestamps represent a moment in time as a single number, making it easier for the computer to do calculations.
//   A timestamp represents the number of seconds that have elapsed since the Unix epoch, which is January 1, 1970.
// - Datetime structures are structures that represent different components of the date and time as members, making it
//   easier for us to specify dates.
//
// Datetime structures have the following members:

struct tm {
  // Returns the number of seconds within a minute
  int tm_sec;

  // Returns the number of minutes within an hour
  int tm_min;

  // Returns the hour within a day (0 to 23)
  int tm_hour;

  // Returns the day of the month
  int tm_mday;

  // Returns the month number (0 to 11 starting from January)
  int tm_month;

  // Returns the number of years since 1900
  int tm_year;

  // Returns the weekday number (0 to 6 starting from Sunday)
  int tm_wday;

  // Returns the day number within the year (0 to 365 with 0 representing January 1)
  int tm_yday;

  // Positive when daytime is in effect, zero when not in effect, and negative when unknown
  int tm_isdst;
}

// In order to start using the above datetime structures, the function localtime(&t) must be used to convert the declared timestamp
// to a datetime structure.
time_t ts;
tm ds = *localtime(&ts);
cout << "The current year is " << (ds.tm_year + 1900) << endl;  // [Current Year]

// ctime(&t) can be used to convert the given timestamp into a string form
char *dt = ctime(&ts);
cout << "The current date is " << dt << endl;   // [Current Date] (Tue Aug  5 19:07:23 2025)

// asctime(&ds) is used to convert a datetime structure into a string form
char *dt2 = asctime(&ds);
cout << "The current date is " << dt << endl;   // [Current Date] (Tue Aug  5 19:07:23 2025)