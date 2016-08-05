/*		STRINGs IN C++:

Apart from data type char c++ has one more data type i.e strings which is little bit different then char.
what makes STRING different from char is that u don't need to worry about the size of the String. 
Example :
to declare string by char we type 
char A[10];
where 10 is the size of characters of the string stored in A.
But if we use string data type to declare string we don't need to specify the size of the string example:
string A;

for more information visit:
http://stackoverflow.com/questions/1287306/difference-between-string-and-char-types-in-c


 */

/*   INBUILT FUNCTIONS IN C AND C++ :

1. Copy: Copy one string to other. 

C-style string function:

 strcpy(s1, s2);
        
C++ string:


  s2 = s1;

2. Length: Finding the length of the string. 

C-style string function: 

 strlen(s1); 

C++ string:

 s1.size();

3. Concatenate: Adding one string at the end of the other. 

C-style string function:
 strcat(s1, s2);

C++ string:

 s1 += s2;

4. Compare: Comparing two string if they are equal or not.

C-style string function:

 strcmp(s1, s2);

C++ string:

s1 == s2


*/

/*		A simple program to check length of the string without using any inbuilt function 


*/


#include<iostream>
using namespace std;

int main()
{

char A[10] = "Hello";
string B = "world";
int leng_a=0,leng_b=0;
int count_a=0,count_b=0;

// iterate through each character till null char is encountered

for(int i=0; A[i] != '\0' ; i++ )
{
	count_a ++ ;
}

cout<<"Length of A is :"<<count_a<<endl;


for(int i=0 ; B[i] != '\0'; i++ )
{
	count_b ++;

}

cout<<"Length of B is :"<<count_b<<endl;

leng_b = B.size();

cout<<"Length of B calculated through inbuilt function :"<<leng_b<<endl;

}



/* The null character is denoted between single quotes i.e '' like '\0' not double quotes " "  "\0" 

for more info visit: 
http://stackoverflow.com/questions/1483232/array-of-char-should-end-at-0-or-0

   */
