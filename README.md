#line1

# Odometer

# Approach

We have a function named validityCheck which takes a number and returns true if the number is valid
and false if the number is not valid.

Now in order to find the next number to x, keep incrementing x by 1 and apply the validityCheck. The
first valid number is the next number. Same approach for finding number previous to x.

In order to find the distance between two numbers x and y, loop from x to y and count how many valid 
numbers are there between them. The number + 1 is the distance.
