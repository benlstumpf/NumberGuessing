This is a basic number guessing game to teach me C++.
I chose this as it was one of the first applications I wrote in high school.

Valid numbers are from 0-9

There will be 3 rounds with responses as follows:

n = correct number - guessed number  : response
n >=  2  : That is way to low            
n =   1  : That is a little low
n =   0  : That is the correct number
n =  -1  : That is a little high
n <= -2  : That is way to high

Example:
correct number: 9
guessed number: 5
9-5=4

I will not be protecting against numbers that can not fit in an int.
