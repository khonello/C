#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define TEST(fmt, mssg) (printf(fmt, mssg))

int func1(int x, int y)
{
    int result = x + y;
    return result;

}

void func2()
{
    printf("Hello World");
}

int main()
{
    // Char Variables in C

    char ch = 'A';
    char name[] = "khonello";

    // Integer Variables in C

    int inttt = 512; // 16 bit signed int
    long lng = 512; // 32 bit signed int

    // Float Variables in C

    float flt = 2.6;
    double dble = 26.972;

    // Boolean Variables in C
    // Note C Does Not Have Boolean Variables !!

    int isTall = 1;
    int isNotTall = 0;

    // Const Variable in C

    const int AGE = 21;

    // Formatting in C
    // Integer and float formatting ==> %d ,%f
    // String and char formatting ==> %s ,%f

    // Casting in C

    int result1 = (int)flt;
    int result2 = (int)dble;

    // Pointers in C

    int num = 2;
    int *pNum = &num;

    // Getting input from User

    char inp[20];

    int intVar;
    float fltVar;


    fgets(inp, 20, stdin);

    // Arrays in C

    int arr[10];
    int newArr[10] = {1,2,3,4,5};

    arr[0] = 2;
    arr[3] = 7;

    // If statements in C

    int a = 1;
    int b = 2;

    if (a != 0 && b == 2)
    {
        printf("First expression worked \n");
    }
    else if (a == 1 && b == 1)
    {
        printf("Second expression worked \n");
    }
    else
    {
        printf("No expression worked \n");
    }

    // Switch statements in C

    int x = 1;
    int y = 2;

    switch (y)
    {
        case 1:
            // printf("The value is 1 \n");
            break;

        case 2:
            // printf("The value is 2 \n");
            break;
    }

    int isTrue = 1;
    int value = 5;
    
    while (isTrue)
    {

        // printf("%d\n", value);
        value--;

        if (value == 0)
        {
            isTrue = 0;
        }
    }

    // For-Loop 

    int varr = 5;
    for (int i = 0; i <= varr; i++)
    {
        // printf("%d\n", i);
    }


    enum GAME
    {
        EASY,
        MEDUIM,
        HARD
    };

    enum GAME level = EASY;

    // Structs in C

    struct Personal1
    {
        int age;
        char sex;

    }me;

    me.age = 21;
    

    // Union in C

    union Personal2
    {
        int age;
        char sex;
    }info;

    info.age = 21;

    
    // Memory allocation in C

    int var1 = 2;
    int var2 = sizeof(int);

    int *pMall = (int*) malloc(sizeof(int));
    *pMall = 21;

    int *pCall = (int*) calloc(var1, var2);
    
    int *pRall = realloc(pCall, 5 * sizeof(int));

    printf("%d\n", sizeof(*pRall));

    free(pMall);
    free(pCall);
    free(pRall);

    // File Handling in C

    FILE *pFileW = fopen("logme.txt", "w");

    fprintf(pFileW, "Server working successfully...");
    fclose(pFileW);

    FILE *pFileR = fopen("logme.txt", "r");
    char res[sizeof(char) * 5];

    fgets(res, 50, pFileR);
    fclose(pFileR);

    printf("%d\n", sizeof(char));
    printf("%s\n", res);


}