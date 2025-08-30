/* Guide to class cctype in C++
 *
 * Author : Giorgio Murad Murad
 */
 #include <iostream>
#include <cctype>

using namespace std;

int main() {
    
    /* isalpha(ch)
     * Takes a char value, and returns true if the char value is alphabetical.
     * Otherwise, the function returns false
     */
    bool x = isalpha('C');
    cout << "isalpha('C'):\t" << x << endl;
    
    /* isupper(ch)
     * Takes a char value, and returns true if the character is an uppercase alphabet
     */
    cout << "isupper('A'):\t" << isupper('A') << endl;
    
    /* islower(ch)
     * Returns true if the given character is a lowercase alphabet
     */
    cout << "islower('s'):\t" << islower('s') << endl;
    
    /* isalnum(ch)
     * Returns true if the character is either an alphabetical or a number
     */
    cout << "isalnum('1'):\t" << isalnum('l') << endl;
    cout << "isalnum('T'):\t" << isalnum('T') << endl;
    
    /* isblank(ch)
     * Returns true if the character is a blank space, and false otherwise
     */
    cout << "isblank(' '):\t" << isblank(' ') << endl;
    
    /* iscntrl(ch)
     * Returns true if the given character is a control character, and false otherwise
     */
    cout << "iscntrl('\\n'):\t" << iscntrl('\n') << endl;
    
    /* isdigit(ch)
     * Returns true if the given character is a digit, and false otherwise
     */
    cout << "isdigit('5'):\t" << isdigit('5') << endl;
    
    /* isspace(ch)
     * Returns true if the given character is a white-space, and returns false otherwise
     */
    cout << "ispace(' '):\t" << isspace(' ') << endl;
    
    /* isprint(ch)
     * Returns true if the character is a printable character, and returns false otherwise
     */
    cout << "isprint('\\n'):\t" << isprint('\n') << endl;
    
    /* ispunct(ch)
     * Returns true if the given character is a punctuation character
     */
    cout << "ispunct('%'):\t" << ispunct('%') << endl;
    
    /* isxdigit(ch)
     * Returns true if the given character represents a hexadecimal digit
     */
    cout << "isxdigit('2'):\t" << isxdigit('2') << endl;
    
    /* tolower(ch)
     * Converts the given character to lowercase
     */
    char c1 = tolower('A');
    cout << "tolower('A'):\t" << c1 << endl;
    
    /* toupper(ch)
     * Converts the given character to uppercase
     */
    char c2 = toupper('g');
    cout << "toupper('g'):\t" << c2 << endl;
    return 0;
}
