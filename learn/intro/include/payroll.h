#define NAMESIZE 30

int x = 1;
struct date 
{
    int year;
    int month;
    int day;
};
struct payroll 
{
    char name[NAMESIZE];
    float pay;
    struct date birthday;
    struct date promotion;
    char dept[10];
};

typedef struct payroll RECORD;