/* Guide to class vector in C++
 *
 * Author : Giorgio Murad Murad
 */
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // Initializing a vector that holds elements of type int
    vector<int> temps;

    // Initializing a vector that holds elements copied from another vector
    vector<int> temps(t2);
    // 
    vector<int> temps = t2;

    // Initializing a vector that carries 'n' elements with the value of 'val'
    vector<int> temps(n, val);

    // Initializing a vector with given value
    vector<int> temps{a, b, c, ...}
    // or
    vector<int> temps = {a, b, c, ...}




    // Filling the vector with int values using the push_back() function
    for(int i; i < 10; ++i)
    {
        temps.push_back(i);
    }
    // 0 1 2 3 4 5 6 7 8 9

    /* +size()
     * Returns the size of the vector
     */
     temps.size();
     // 10



    /* +empty()
     * Verifies if the vector is empty
     */
     temps.empty();
     // 0 for false



    /* +reserve('int')
     * Reserve a certain number of empty spaces in the vector
     */
     temps.reserve(5);



    /* +capacity()
     * Returns the capacity of the vector
     */
     temps.capacity();
     // 15



    /* +pop_back()
     * Deletes the last element from the vector
     */
     temps.pop_back();




    /* +assign(size, value)
     * Reinitializes the vector with size 'size' with all elements equal 'value'
     */
     temps.assign(3, 5);
     // 5 5 5



    /* +front()  +back()
     * Return the front and back element values of the vector
     */
     temps.front();
     temps.back();



    /* +clear()
     * Clears the vector
     */
     temps.clear();



    /* +swap(vector)
     * Swaps contents with 'vector'
     */
     vector<int> v;
     temps.swap(v);
}
