4. Explain your answers (15 points)

Please answer the following questions for each file you wrote as part of this assignment.

1. Reversing an array using pointers.
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

To reverse an array with pointers, you first fill array with values (here these are input by the user). Then, in
your 'reverseArray' function, which has a pointer to an int array and a variable of int type called size as its
parameters, you create three variables of type int. The first is a temporary value used to store variables while
reversing the array. The next two variables are pointer variables of type int used to keep track of the swapped 
values on the left and right sides of the array. For the variable used to keep track of the right side of the 
array, we set it equal to the array plus one less than its size. We use size - 1 here because we want the final 
index for the right side.  You then do a for loop where the conditional statement is i less than half the size of
the array. Similarly to the palindrome problem in the previous assignment, we want to split the array in half so
we can swap the right and left sides. Once we reach the middle of the array, the swapping stops. Then, in the loop,
we set the temporary variable to the left pointer (the first digit of the array), and then we do the swapping as we
place the value from the end of the array(right) into the beginning of the array(left). Then, to move the beginning 
of the array to the end position, we set the right variable (end of the array) to the value in the temporary variable,
which again, is holding the value from the left side of the array. Then, we increment the left variable so it moves up
through the array, and decrement the right variable so itm moves down through the array. This continuues until the
middle index of the array is reached and the array is sorted.



2. String handling with dynamic memory.
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.
To return the number of vowels in the strings, you take in a user inputted sentence. Then, in your 'countVowels'
function, you create a counter initially initialized to 0. This will keep track of how many vowels are in the
sentence and will be returned at the end of the function. You then use a for loop, with a conditional statement 
checking that the string section of the string being checked is not \0. This ensures that we check the entirety
of the string and exit the loop once the string is done. Within the loop, we create a variable of type char that
is set to the lowercase version of the string. Then, you create an if statement checking that the newly created
variable (the one reading the string as all lowercase) matches a, e, i, or u. This is done through use of logical
OR. If you didn't want to create a new variable/use the function converting to lowercase, you could also check A,
E, I, O, and U as well. The only think within this statement is an increment of the counter as if the conditions
of the if statement are met, then a vowel has been found and the counter should be increased. 



3. Implementing a binary search tree.
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.
To create a binary search tree, you must first create a new node. This is done in a function whose parameter is a 
variable called value of type int. In this function, you dereference nodePtr to get the actual values being pointed
to. Then, you want the number of bytes so you allocate memory through use of malloc and the sizeof function. You then
set nodePtr->data equal to the value variable so that nodePte points towards the node that is being created. You then
set both the left and right nodes to NULL and return the nodePtr. Then, in your insert function, which has two
parameters, one of type Node* called root, and the other of type int called value. You create an if statement, checking
whether or not the root(node we're checking) is NULL. If it is, then we make use of the previously created createNode
function, using 'value' as its parameter and setting root equal to it. This creates a new node at the currently empty
root that we're looking at. root is then returned. If the root is not NULL, then we check is the value we're looking at is
less than the value (data variable) in the root. We check that the value being inserted is less than the value in the root
because we're focusing on the left value (the left value is less than the node). We do the same thing for the right variable
except we check is the value being inserted is greater than the data in the root. This is because the value on the right is
greater than the root value. Once we finish the insertion function, we return the root. 
For the search function, we first see if the value we're looking for is not in the tree at all. This is done with the base
case, checking if the root is NULL. If this is the case, then root is returned which is essentially the same as returning NULL
(condition for this is root == NULL). For the second base case, if the value is in the tree, then we check if the root is the same
as the value that we're looking for. If this is the case, then we return the root. To look through the tree and check every node,
value, then we check the next left node (this means that the value is smaller so we move to the left). And then vice versa for the right
using the same logic. 
Then, in order to traverse the tree in order and print the values is ascending order, we use the
inOrderTraversal function. Here, the base case is us checking if the root is equal to NULL, this signifies that we reached the end of the
tree. Because the function is of type voide(doesn't return anything), we just return. To traverse the left and right nodes of the tree,
we make use of recursion. After we traverse through the left side of the tree, we print the node that we're at the lower value (left). 
Essentially,, we go left until we cannot anymore and then we go to the right.
Finally, for the freeTree function, we traverse the tree after checking that the root is not NULL. We first traverse to the left, then the
right, then free the memory in the root. The traversal from left and right is done through use of recursion.