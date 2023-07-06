/*
Program Data Representation Ver 2.0
The program will show value in any data types.
Program test data type and data size.
==================================================================*/

#include <stdio.h> //use printf()
#include <conio.h> //use getch()

char ch; // KBD Read variable

void DecToBin(int data2, int byt) // Conve-rt Decimal to Binary as byt Bytes
{
    int count, chk, bits;
    bits = (byt * 8) - 1; // Calculate total bits started at bit no 0
    for (count = bits; count >= 0; count--)
    {
        chk = data2 >> count; // Shift right count bits of data2 and keep in to chk
        
        if (chk & 1)          // compare with '00000001'
            printf("1");      // If true
        else
            printf("0"); // If false
        if (count % 4 == 0 && count > 3)
            printf(" ");
        printf("| %lu |\n", chk);
    }
    
    printf("B\n");
}

void UnsignedShortInt()
{

    unsigned short int data;
    printf("\nUNSIGNED SHORT INTEGER MODE [0 to 65,535]\n");
    printf("===========================================\n");
    printf("Enter Raw Data : ");
    scanf("%hu", &data);
    printf("Data in Decimal = %huD\n", data);
    printf("Data in Hexamal = %xH\n", data);
    printf("Data in Binary = ");
    DecToBin(data, sizeof(data));
    printf("Size = %d Bytes\n", sizeof(data));
    getch();
}

void UnsignedInt() // Test Data in Unsigned Integer Mode
{
    unsigned int data; // Declare data variable for keep unsigned integer types
    printf("\nUNSIGNED INTEGER MODE [0 to 4,294,967,295]\n");
    printf("============================================\n");
    printf("Enter Raw Data :");
    scanf("%u", &data);
    printf("Data in Decimal = %uD\n", data); // Show in Decimal format
    printf("Data in Hexamal = %xH\n", data); // Show in Haxamal format
    printf("Data in Binary = ");
    DecToBin(data, sizeof(data));              // Show in Binary format
    printf("Size = %d Bytes\n", sizeof(data)); // Show size of unsigned short integer
    getch();                                   // Wait for press any key
}

void Boolean() // Test Data in boolean Mode
{
    bool data; // Declare data variable for keep boolean type
    printf("\nBOOLEAN MODE [0 to 255]\n");
    printf("==========================\n");
    printf("Enter Raw Data :");
    scanf("%hu", &data);
    printf("Data Meaning ="); // Show meaning
    if (data)
        printf("TRUE\n"); // Show if True
    else
        printf("FALSE\n");                   // Show if false
    printf("Data in Decimal = %uD\n", data); // Show in Decimal format
    printf("Data in Hexamal = %xH\n", data); // Show in Haxamal format
    printf("Character = %c\n", data);        // Show in Character format
    printf("Data in Binary = ");
    DecToBin(data, sizeof(data));              // Show in Binary format
    printf("Size = %d Bytes\n", sizeof(data)); // Show size of unsigned short integer
    getch();                                   // Wait for press any key
}

void Character() // Test Data in Character Mode
{
    char data; // Declar data variable for keep Character type
    printf("\nCHARACTER MODE [0 to 255]\n");
    printf("==========================\n");
    printf("Enter Raw Data :");
    scanf("%c", &data);
    printf("Data in Decimal = %uD\n", data); // Show in Decimal format
    printf("Data in Hexamal = %xH\n", data); // Show in Haxamal format
    printf("Character = %c\n", data);        // Show in Character format
    printf("Data in Binary = ");
    DecToBin(data, sizeof(data));              // Show in Binary format
    printf("Size = %d Bytes\n", sizeof(data)); // Show size of unsigned short integer
    getch();                                   // Wait for press any key
}

void SFloat()
{
    float data; // Declar data variable for keep Single Precision
    printf("\nSingle Precision Float MODE [1.2E-38 to 3.4E+38]\n");
    printf("===================================================\n");
    printf("Enter Raw Data :");
    scanf("%f", &data);
    printf("Data in Decimal = %fD\n", data); // Show in Decimal format
    printf("Data in Hexamal = %xH\n", data); // Show in Haxamal format
    printf("Data in Binary = ");
    DecToBin(data, sizeof(data));              // Show in Binary format
    printf("Size = %d Bytes\n", sizeof(data)); // Show size of unsigned short integer
    getch();                                   // Wait for press any key
}

int main()
{
    printf("\nDATA REPRESENTATION PROGRAM...\n");
    printf("================================\n");
    while (ch != '0')
    {
        printf("\n[1]:BinaryToHex [2]:Boolean [3]:Unsigned Int [4]:Character\n");
        printf("[5]:Single Prec Float [0]:Exit]"); // Show MENU
        printf("\n");                              // Line Feed
        ch = getch();                              // Wait and read KBD with out ENTER Pressed
        switch (ch)                                // Check ch
        {
        case '1':
            UnsignedShortInt();
            break;
        case '2':
            Boolean();
            break;
        case '3':
            UnsignedInt();
            break;
        case '4':
            Character();
            break;
        case '5':
            SFloat();
            break;
        }         // End SWITCH CASF
    }             // End WHILE Loop
    printf("\n"); // Line feed
    return (0);
} // End MAIN Fn