/*
The Powerpuff Girls (100 Marks)
Professor Utonium is restless because of the increasing crime in the world. 
The number of villains and their activities has increased to a great extent. 
The current trio of Powerpuff Girls is not well to fight the evils 
of the whole world. 
Professor has decided to create the maximum number of Powerpuff Girls 
with the ingredients he has.

There are N ingredients required in a certain quantity to create a 
Powerpuff Girl. 
Professor has all the N ingredients in his laboratory and knows the 
quantity of each available ingredient. 
He also knows the quantity of a particular ingredient required to 
create a Powerpuff Girl. 
Professor is busy with the preparations and wants to start asap.

The villains, on the other hand, want to destroy the laboratory 
and stop Professor Utonium from creating more Powerpuff girls. 
Mojo Jojo is coming prepared with ammunition and Him is leading 
other villains like Princess, Amoeba Boys, Sedusa, Gangreen Gang etc.

 

Professor does not have much time as villains will reach the 
laboratory soon. 
He is starting the process but does not know the number of 
Powerpuff Girls which will be created. 
He needs your help in determining the maximum number of 
Powerpuff Girls which will be created with the current quantity 
of ingredients. 

Example:
Professor Utonium requires 3 ingredients to make Powerpuff Girls.
The 3 ingredients are present in the laboratory in the given quantity:

 

To make a Powerpuff Girl, Professor Utonium requires:
1.	3 units of Ingredient A
2.	6 units of Ingredient B
3.	10 units of Ingredient C

The maximum number of Powerpuff Girls which can be created 
are 3 as after 3, Professor will run out of Ingredient C.

 
Image Source: Google

Can you determine the maximum number?



Input Format
The first line of input consists of the number of ingredients, N
The second line of input consists of the N space-separated 
integers representing the quantity of each ingredient required 
to create a Powerpuff Girl.
The third line of input consists of the N space-separated 
integers representing the quantity of each ingredient 
present in the laboratory.



Constraints
1<= N <=10000000 (1e7)
0<= Quantity_of_ingredient <= LLONG_MAX 



Output Format
Print the required output in a separate line.


Sample TestCase 1
Input
4
2 5 6 3 
20 40 90 50 
Output
8
Solution:
*/

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
    //Write code here
    int N;
    cin>>N;
    long int req[N],avail[N],div[N],min;
    for(int i=0;i<N;i++){
        cin>>req[i];
    }
    for(int i=0;i<N;i++){
        cin>>avail[i];
        if(avail[i]>0)
            avail[i]/=req[i];
        if(i==0){
            min=avail[i];
        }
        else if(min>avail[i]){
            min=avail[i];
        }
    }
    cout<<min;
    return 0;
}
