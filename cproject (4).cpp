#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <cstring>
using namespace std;
void octalToDecimal()
{
    int octalNumber;
    cout<<"Enter a number: ";
    cin>>octalNumber;
    int temp=octalNumber;
    int decimalNumber = 0, i = 0, rem;
    while (octalNumber != 0)
    {
        rem = octalNumber % 10;
        octalNumber /= 10;
        decimalNumber += rem * pow(8, i);
        ++i;
    }
    cout << temp << " in octal = " << decimalNumber << " in decimal" <<endl;
}
void decimalToOctal()
{
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;
    int temp=decimalNumber;

    int rem, i = 1, octalNumber = 0;
    while (decimalNumber != 0)
    {
        rem = decimalNumber % 8;
        decimalNumber /= 8;
        octalNumber += rem * i;
        i *= 10;
    }
    cout << temp << " in decimal = " << octalNumber << " in octal" <<endl;
}
void decimalToHexa()
{
    int decimal;
    cout<<"enter a number in decimal: ";
    cin>>decimal;
    int templ=decimal;
    char hexaDeciNum[100];
    int i = 0;
    while (decimal != 0) {
        int temp = 0;
        temp = decimal % 16;
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
 
        decimal /= 16;
    }
    cout << templ <<" in decimal = ";
    for (int j = i - 1; j >= 0; j--)
        cout<<hexaDeciNum[j];
    cout<<" in hexadecimal" <<endl;
}
void hexaToDecimal()
{
    int decimalNum=0, rem, i=0, len=0;
    char hexDecNum[20];
    cout<<"Enter the Hexadecimal Number: ";
    cin>>hexDecNum;
    while(hexDecNum[i]!='\0')
    {
        len++;
        i++;
    }
    len--;
    i=0;
    while(len>=0)
    {
        rem = hexDecNum[len];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
        else
        {
            cout<<"\nInvalid Hex Digit!";
            cout<<endl;
        }
        decimalNum = decimalNum + (rem*pow(16, i));
        len--;
        i++;
    }
    cout<<"\nEquivalent Decimal Value: "<<decimalNum;
    cout<<endl;
}
void hexaToOctal()
{
    int decimalNum=0, octalNum[30], rem, i=0, len=0;
    char hexDecNum[10];
    cout<<"Enter the Hexadecimal Number: ";
    cin>>hexDecNum;
    string temp=hexDecNum;
    while(hexDecNum[i]!='\0')
    {
        len++;
        i++;
    }
    len--;
    i=0;
    while(len>=0)
    {
        rem = hexDecNum[len];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
        else
        {
            cout<<"\nInvalid Hex Digit!";
            cout<<endl;
        }
        decimalNum = decimalNum + (rem*pow(16, i));
        len--;
        i++;
    }
    i=0;
    while(decimalNum != 0)
    {
        octalNum[i] = decimalNum%8;
        i++;
        decimalNum = decimalNum/8;
    }
    cout<<temp <<" in hexa = ";
    for(i=(i-1); i>=0; i--)
        cout<<octalNum[i];
    cout<<" in octal number" <<endl;
}
void octalToHexa()
{
    int octal,rem,i=0;
    cout<<"Enter Octal number: ";
    cin>>octal;
    int temp = octal;
    char Hex[100];
    int decimal = 0, sem = 0;
    while(octal!=0)
    {
        decimal=decimal+(octal%10)*pow(8,sem);
        sem++;
        octal=octal/ 10;
    }
     while(decimal!=0)
    {
        rem=decimal%16;
        if(rem<10)
          Hex[i++]=rem+48;
        else
          Hex[i++]=rem+55;
      decimal/=16;
    }
  
    cout<<temp <<" in ocal = ";
    int j;
    for(j=i-1;j>=0;j--)
      cout<<Hex[j];
    cout <<" in hexadecimal" <<endl;
}
void hexaToBinary(){
    int i=0;
    char hex[10];
    cout<<"ENTER HEXADECIMAL NUMBER: ";
    cin>>hex;
    cout<<"THE BINARY NUMBER IS: ";
    while(hex[i])
    {
        switch(hex[i])
        {
            case '0':
                cout<<"0000";
                break;
            case '1':
                cout<<"0001";
                break;
            case '2':
                cout<<"0010";
                break;
            case '3':
                cout<<"0011";
                break;
            case '4':
                cout<<"0100";
                break;
            case '5':
                cout<<"0101";
                break;
            case '6':
                cout<<"0110";
                break;
            case '7':
                cout<<"0111";
                break;
            case '8':
                cout<<"1000";
                break;
            case '9':
                cout<<"1001";
                break;
            case 'A':
            case 'a':
                cout<<"1010";
                break;
            case 'B':
            case 'b':
                cout<<"1011";
                break;
            case 'C':
            case 'c':
                cout<<"1100";
                break;
            case 'D':
            case 'd':
                cout<<"1101";
                break;
            case 'E':
            case 'e':
                cout<<"1110";
                break;
            case 'F':
            case 'f':
                cout<<"1111";
                break;
            default:
                cout<<"--Invalid Hex Digit ("<<hex[i]<<")--";
        }
        i++;
    }
    cout<<endl;
}
void decimalToBinary(){
  int dec;
  int bin = 0;
  int rem, i = 1;
  cout << "ENTER DECIMAL NUMBER: ";
  cin >> dec;
  int temp=dec;
  while (dec!=0) {
    rem = dec % 2;
    dec /= 2;
    bin += rem * i;
    i *= 10;
  }
  cout <<temp << " in decimal = " <<bin << " in binary" << endl ;
}
void octalToBinary(){
    int octalNum, rev=0, rem, chk=0;
    char binaryNum[40] = "";
    cout<<"Enter the Octal Number: ";
    cin>>octalNum;
    int temp=octalNum;
    while(octalNum!=0)
    {
        rem = octalNum%10;
        if(rem>7)
        {
            chk++;
            break;
        }
        rev = (rev*10) + rem;
        octalNum = octalNum/10;
    }
    if(chk==0)
    {
        octalNum = rev;
        while(octalNum!=0)
        {
            rem = octalNum%10;
            switch(rem)
            {
                case 0: strcat(binaryNum, "000");
                    break;
                case 1: strcat(binaryNum, "001");
                    break;
                case 2: strcat(binaryNum, "010");
                    break;
                case 3: strcat(binaryNum, "011");
                    break;
                case 4: strcat(binaryNum, "100");
                    break;
                case 5: strcat(binaryNum, "101");
                    break;
                case 6: strcat(binaryNum, "110");
                    break;
                case 7: strcat(binaryNum, "111");
                    break;
            }
            octalNum = octalNum/10;
        }
        cout<<temp <<" in octal = "<<binaryNum <<" in binary" <<endl;
    }
    else
        cout<<"\nInvalid Octal Digit!" <<endl;
}
void binaryToOctal(){
    int binaryNum, octalDigit=0, octalNum[20];
    int i=0, mul=1, chk=1, rem;
    cout<<"Enter the Binary Number: ";
    cin>>binaryNum;
    int temp=binaryNum;
    while(binaryNum!=0)
    {
        rem = binaryNum%10;
        octalDigit = octalDigit + (rem*mul);
        if(chk%3==0)
        {
            octalNum[i] = octalDigit;
            mul = 1;
            octalDigit = 0;
            chk = 1;
            i++;
        }
        else
        {
            mul = mul*2;
            chk++;
        }
        binaryNum = binaryNum/10;
    }
    if(chk!=1)
        octalNum[i] = octalDigit;
    cout<<temp <<" in binary = ";
    for(i=i; i>=0; i--)
        cout<<octalNum[i];
    cout<<" in octal ";
}
void binaryToDecimal(){
    int binnum, decnum=0, i=1, rem;
    cout<<"Enter any Binary Number: ";
    cin>>binnum;
    int temp=binnum;
    while(binnum!=0)
    {
        rem = binnum%10;
        decnum = decnum + (rem*i);
        i = i*2;
        binnum = binnum/10;
    }
    cout<<temp <<" in binary = "<<decnum <<" in decimal";
}
void binaryToHexa(){
    int binaryNum, hex=0, mul=1, chk=1, rem, i=0;
    char hexDecNum[20];
    cout<<"Enter any Binary Number: ";
    cin>>binaryNum;
    int temp=binaryNum;
    while(binaryNum!=0)
    {
        rem = binaryNum%10;
        hex = hex + (rem*mul);
        if(chk%4==0)
        {
            if(hex<10)
                hexDecNum[i] = hex+48;
            else
                hexDecNum[i] = hex+55;
            mul = 1;
            hex = 0;
            chk = 1;
            i++;
        }
        else
        {
            mul = mul*2;
            chk++;
        }
        binaryNum = binaryNum/10;
    }
    if(chk!=1)
        hexDecNum[i] = hex+48;
    if(chk==1)
        i--;
    cout<<temp <<" in binary = ";
    for(i=i; i>=0; i--)
        cout<<hexDecNum[i];
    cout<<" in hexa decimal";
}
int main()
{
    bool run=true;
    while(run)
    {
        int menu;
	    	cout << endl;
	    	cout << "[1]CONVERT BINARY................." << endl;
	    	cout << "[2]CONVERT HEXADECIMAL..............." << endl;
	    	cout << "[3]CONVERT DECIMAL........................" << endl;
            cout << "[4]CONVERT OCTAL..........." <<endl;
            cout << "[5]EXIT................" <<endl;
	    	cout << "\nSELECT YOUR OPTION: ";
	    	cin >> menu;
            cout << endl;
  	    switch (menu) {
  	    	case 1:
  	    	{
                cout << endl;
  	    		cout << "[1]CONVERT BINARY TO DECIMAL........" << endl;
  	    		cout << "[2]CONVERT BINARY TO OCTAL.........." << endl;
  	    		cout << "[3]CONVERT BINARY TO HEXADECIMAL...." << endl;
  	    		cout << "[4]EXIT............................." << endl;

  	    	    int submenu1;
                cout << "\nSELECT YOUR OPTION: ";
  	    		cin >> submenu1;
                cout << endl;

                switch (submenu1){
                    case 1:
                    {
                        binaryToDecimal();
                        break;
                    }
                    case 2:
                    {
                        binaryToOctal();
                        break;
                    }
                    case 3:{
                        binaryToHexa();
                        break;
                    }
                    case 4:
                    {
                        exit(1);
                        break;
                    }
                    default:
                    {
                        cout<<"invalid input";
                    }

                }
                break;
  	    	}
  	    	case 2:
  	    	{
                cout << endl;
  	    		cout << "[1]CONVERT HEXADECIMAL TO DECIMAL........" << endl;
  	    		cout << "[2]CONVERT HEXADECIMAL TO OCTAL.........." << endl;
  	    		cout << "[3]CONVERT HEXADECIMAL TO BINARY...." << endl;
  	    		cout << "[4]EXIT............................." << endl;

  	    	    int submenu2;
                cout << "\nSELECT YOUR OPTION: ";
  	    		cin >> submenu2;
                cout << endl;
                switch (submenu2){
                    case 1:
                    {
                        hexaToDecimal();
                        break;
                    }
                    case 2:
                    {
                        hexaToOctal();
                        break;
                    }
                    case 3:{
                        hexaToBinary();
                        break;
                    }
                    case 4:
                    {
                        exit(1);
                        break;
                    }
                    default:
                    {
                        cout<<"invalid input";
                    }
                }
                break;
  	    	}
  	    	case 3:
  	    	{
                cout << endl;
  	    		cout << "[1]CONVERT DECIMAL TO HEXADECIMAL........" << endl;
  	    		cout << "[2]CONVERT DECIMAL TO OCTAL.........." << endl;
  	    		cout << "[3]CONVERT DECIMAL TO BINARY...." << endl;
  	    		cout << "[4]EXIT............................." << endl;

  	    	    int submenu3;
                cout << "\nSELECT YOUR OPTION: ";
  	    		cin >> submenu3;
                cout << endl;
                switch (submenu3){
                    case 1:
                    {
                        decimalToHexa();
                        break;
                    }
                    case 2:
                    {
                        decimalToOctal();
                        break;
                    }
                    case 3:{
                        decimalToBinary();
                        break;
                    }
                    case 4:
                    {
                        exit(1);
                        break;
                    }
                    default:
                    {
                        cout<<"invalid input";
                    }
                }
                break;
  	    	}
  	    	case 4:
            {
                cout << endl;
  	    		cout << "[1]CONVERT OCTAL TO DECIMAL........" << endl;
  	    		cout << "[2]CONVERT OCTAL TO HEXADECIMAL.........." << endl;
  	    		cout << "[3]CONVERT OCTAL TO BINARY...." << endl;
  	    		cout << "[4]EXIT............................." << endl;

  	    	    int submenu4;
                cout << "\nSELECT YOUR OPTION: ";
  	    		cin >> submenu4;
                cout << endl;
                switch (submenu4){
                    case 1:
                    {
                        octalToDecimal();
                        break;
                    }
                    case 2:
                    {
                        octalToHexa();
                        break;
                    }
                    case 3:{
                        octalToBinary();
                        break;
                    }
                    case 4:
                    {
                        exit(1);
                        break;
                    }
                    default:
                    {
                        cout<<"invalid input";
                    }
                }
                break;            
            }
            case 5:
            {
                exit(1);
                break;
            }
            break;
  	    }
    }
   return 0;
}