# CS121-Project-3-Bubbles-and-Pointers
### In this project we sort an array of integers using the bubble sorting algorithm

### Sorting algorithm:
- store length of the array in constant variable MAX
- create the variable currentLength with value of MAX - 1. this will be used to optimize the sort by not checking numbers that have already been sorted. it starts with the - 1 so that when the numbers are being compared with each other, there won't be an out of bounds error
- create an if statement like this: (int cycle = 0; cycle < MAX - 1; cycle++)
- create an if statement inside of the previous one like this: for (int index = 0; index < currentLength; index++)
- create int variables a and b
- assign a array[index] and b array[index+1]
- create an if statement like this: if (a > b)
- inside that if statement, create a temp variable to hold the value of a
- then assign array[index] = b
- and then assign array[index+1] = tempA
- outside of the for loop with the index variable, subtract 1 from currentLength