/*
There are n cities in Bearland, numbered 1 through n. Cities are arranged in one long row. The distance between cities i and j is equal to |i - j|.

Limak is a police officer. He lives in a city a. His job is to catch criminals. It's hard because he doesn't know in which cities criminals are. Though, he knows that there is at most one criminal in each city.
Limak is going to use a BCD (Bear Criminal Detector). The BCD will tell Limak how many criminals there are for every distance from a city a. After that, Limak can catch a criminal in each city for which he is sure that there must be a criminal.
You know in which cities criminals are. Count the number of criminals Limak will catch, after he uses the BCD.


Input Format
You will be given a function with integer a and an integer array as arguments where a is the index of city where Limak lives.


Constraints
1 < n < 10^3

Output Format
Return the number of criminals Limak will catch.
Sample TestCase 1
Input
3 
6
1 
1 
1 
0 
1 
0

Output
3

Explanation
There are six cities and Limak lives in the third one (blue arrow below). Criminals are in cities marked red.
Using the BCD gives Limak the following information:
There is one criminal at distance 0 from the third city Limak is sure that this criminal is exactly in the third city.
There is one criminal at distance 1 from the third city Limak doesn't know if a criminal is in the second or fourth city.
There are two criminals at distance 2 from the third city Limak is sure that there is one criminal in the first city and one in the fifth city.
There are zero criminals for every greater distance.
So, Limak will catch criminals in cities 1, 3 and 5, that is 3 criminals in total.


*/

