// Array is a collection of variables of same data type
int arr[50];
// Given statement simply means aauta array declare bhayo having 50 integer elements
// But we cannot increase the size of array from 50 to more and hence comes the concept of dynamic arrays
// Dynamic Arrays are also called vectors in cpp
// It is called lists in python and array list in Java
// The size of vectors can increase as well as decrease

// An array [5, 7, 8, 13, 1, 6, 20, 21] is given and now we are supposed to find a pair (a,b) such that their sum if k. Here lets suppose 25
// Two summation problem
#include <iostream>
#include <array>
using namespace std;
int main()
{
    int arr[] = {5, 7, 8, 13, 1, 6, 20, 21};
    // See how to check the data type of Array >> I heard of is_array function but not sure how to use it
    int n;
    n = sizeof(arr) / sizeof(arr[0]);
    // The given two statements are used to get the size of array
    printf("Total number of elements in an array is %d \n", n);
    // Now iterating to solve the double summation problem
    for (int i = 0; i <= (n - 1); i++)
    {
        for (int j = 0; j <= (n - 1); j++)
        {

            if (arr[i] + arr[j] == 14 && i != j)
            {
                printf("The pair of elements in the array which gives sum 25 is: %d, %d \n", arr[i], arr[j]);
                break;
            }
        }
    }
    // Hence we can easily get the ordered pairs from array which is able to give definite solution to double summation problem but the time complexity becomes n^2 so its not very efficient as a solution
    

    return 0;
}