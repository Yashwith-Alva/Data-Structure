/**
 * @brief Using vectors in c++
 *
 *  Vectors are used for storing elements of similar type. But the size of a Vector
 * can grow Dynamically.
 * Comes under Standard Template Library "<vector>"
 *
 * std::vector<T> vector_name;
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Vector Initialization
    vector<int> vector1 = {1, 2, 3, 4, 5, 6};

    // Uniform Initialization
    vector<int> vector2{6, 7, 8, 9, 10};

    // Vector initialized by size and Value
    vector<int> vector3(5, 12); // Value initialized is 12 for all 5 allocated int space
}