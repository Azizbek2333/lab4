#include <iostream>
#include "math.h"
using namespace std;
int main() {
    double x1,y1;
    cin>>x1>>y1;
    double d=(x1*x1 + y1*y1);
    if (sqrt(d)<=10) cout<<"("<<x1<<","<<y1<<") is in circle"<<endl;
    else cout<<"("<<x1<<","<<y1<<") is not in circle"<<endl;




    return 0;


}
import java.util.Scanner;
public static void main(String[] args) {
    Scanner input=new Scanner (System.in);
    System.out.println("Enter your card number");
    String cardnumber=input.next();


}
public static int cleanNumber(String input){
int number=Integer.parseInt(input);
return number;
}
    public static boolean isValid(String number) {

        if (number == null) {
            return false;
        }

        int length = number.length();

        // Return true only if length is 13 or 16
        return length == 13 || length == 16;
    }
    


public static int sumOfDoubleEvenPlace(String number){}
public static int getDigit(int number){}
public static int sumOfOddPlace(String number){}
public static boolean prefixMatched(String number, String d){}
public static String getCardType(String number){}
public static String mask(String number){}
