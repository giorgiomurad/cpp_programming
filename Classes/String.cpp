/* Guide to class string in C++
 *
 * Author : Giorgio Murad Murad
 */
#include <iostream>
#include <string>

using namespace std;
int main()
{
//Constructers
//----------------------------------------------------------------------------------------------
    /* string()
     * Creates an empty string ("")
     */
     string str1;
     // str1 = ""



    /* string(str)
     * Creates a string identical to str
     */
     str1 = "Application";
     string str2(str1);
     // str2 = "Application"



    /* string(str, position)
     * Creates a string starting at index 'position'
     */
     str1 = "Casablanca";
     string str3(str1, 3);
     // str3 = "ablabnca"



    /* string(str, position, count)
     * Creates a string containing 'count' characters, starting at index 'position' of str
     */
     str1 = "Computer";
     string str4(str1, 2, 4);
     // str4 = "mput"



    /* string(count, character)
     * Creates a string containing 'character' repeated 'count' times
     */
     string str5(4 , 'B');
     // str5 = "BBBB"

//Functions
//----------------------------------------------------------------------------------------------

	/* getline(is, str)
      * Takes the input stream and string variable, and assigns the read line to str
      */
     string str;
     getline(cin, str);       // Input: Hello World
     // str = "Hello World"


     /* to_string(val)
      * Converts 'val' (which is of any data type) into a string value
      */ 
     int val = 5;
     str = to_string(val);
     // str = "5"
	 
	 
	/* +push_back(character)
	 * Adds 'character' to the end of the string
	 */
	 str1 = "CSIS";
	 str1.push_back('s');
	 //str1 = "CSISs"
	 
	 
	 
	/* +pop_back()
	 * Deletes the last character from the string
	 */
	 str1 = "JDKit";
	 str1.pop_back();
	 //str1 = "JDKi"
	 
	 
	 
	/* +begin()  +end()
     * Each returns an iterator to the beginning and end of the string
     */
     string str;
     str = "Geeks";
     std::string::iterator it;
     for(it = str.begin(); it != str.end(); it++)
         cout << *it;
     // Output : Geeks


     
    /* +rbegin()  +rend()
     * Each returns a reverse iterator to the beginning and end of the string
     */
     std::string::reverse_iterator it1;
     for(it1 = str.rbegin(); it1 != str.rend(); it1++)
       cout << *it1;
     // Output : skeeG
	
	
	
	/* +copy('char array', 'length, 'position')
	 * Forms a substring of length 'length' starting from index 'position' of the string
	 * Then copies each character from the substring into the array of characters 'char_array'
	 */
	 char characters[3];
	 str.copy(characters, 3, 0);
	 cout << characters;
	 // Output : Gee
	  
	  
	  
    /* +length() or +size()
     * Returns the number of characters in a string
     */
     str1 = "computer";
     int x;
     x = str1.length();
     // x = 8



    /* +compare(string )
     * Returns the difference between two string as integer
     */
     str1 = "Berlin";
     str2 = "California";
     x = str1.compare(str2);
     // x = -1



    /* +append(string )
     * Returns two added strings as one string
     */
     str1 = "C++ ";
     str2 = "Programming";
     str1.append(str2);
     // str1 = "C++ Programming"



	/* +assign(str)
	 * Assign the string value of 'str' to the accessor
	 */
	 str1.assign(str2);
	 // str1 = "Programming"
	 
	 
	 
    /* +empty()
     * Returns 1 for true if string is empty, 0 for false otherwise
     */
     bool emp;
     emp = str1.empty();
     // emp = false



    /* +swap(str)
     * Swaps the contents with str
     */
     str1.swap(str2);
     // str1 = "Programming"



    /* +insert(position, str)
     * Inserts 'str' to the string at the given position 'position'
     */
     str1.insert(4, "CCC");
     // str1 = "ProgCCCramming"



    /* +erase(position, count)
     * Erases 'count' characters from the string starting at index 'position'
     */
     str1.erase(2, 3);
     // str1 = "PrCCramming



	/* +clear()
	 * Deletes all characters from the string 
	 */
	 str1.clear();
	 // str = ""



	/* +at(position)
	 * Returns the character located at index 'position of the string
	 */
	 char ch;
	 ch = str1.at(2);
	 //ch = 'C'
	 
	 
	 
    /* +find(str)
     * Locates 'str' in this string and returns the starting position of 'str' as integer
     */
     x = str1.find("mm");
     // x = 6



    /* +find(str, position);
     * Locates 'str' in this string and returns the starting position of 'str' as integer
     * Starting at index 'position' of this string
     */
     x = str1.find("mm", 3);
     // x = 6



    /* +substr(position)
     * Returns the substring starting at 'position' of this string
     */
     str2 = str1.substr(3);
     // str2 = "Cramming"



    /* +substr(position, count)
     * Returns the substring starting at 'position' of this string
     * and of length 'count'
     */
     str2 = str1.substr(3, 5);
     // str2 = "Cramm"
}