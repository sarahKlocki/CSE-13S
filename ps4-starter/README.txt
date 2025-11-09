4. Explain your answers (15 points)

Please answer the following questions for each file you wrote as part of this assignment.

1. Trim.c
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.
In order to remove all of the trailing spaces at the end of the string, you first need to get the size of the string. Once you get this 
information, you can check the second to last char in the string (last char is your null terminator), if its a white space of any type, 
you replace it with a null terminator, ending the string at that point. You continue this until you come into contact with a nonwhitespace. 
Because this checks from the end (again, the spot in the string before the added or given null terminator), and finishes once it does not 
detect a whitespace, any white spaces in the middle of the string (between characters) will not be impacted. To check the size, I first used 
a while loop. To expand the scope o the variable keeping track of the size, I initialized it outside of the loops arguments. Then, while the 
array at that point  is not a null terminator, the point is incremented. This allows us to move through the string until we hit the very end 
(null terminator is at the very end of a string). Then, in a second (non nested) while loop, while the spot prior to the last char (\0) in 
the string is a whitespace of any kind, that is set to \0. The spot in the string is then decremented and it moves back in the string, 
finishing when a char is encountered.



2. Palindrome.c
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.
To make sure that a string is a palindrome, you would create a seperate string that takes only alphanumeric chars and converts them to 
lowercase. You then parse through the string from the front and back simultaneously. Once two chars are not the same, it prints that it is not a
palindrome and ends the program. However, if it is the case that the characters are the same, then it is a palindrome. To do this, you must first
read in the string, and then create the seperate string(the same length as the initial string) to filter out unnecessary characters (anything not
alphanumeric), but you don't do this yet. You then iterate through the original string. In that loop, you check that the character is alphanumeric.
If this is the case, then it is converted to lowercase and added to the string. Outside of the loop, you then iterate through the second string from
the front and back. THis is done by dividing the length of the string by 2 as a loop condition and then checking if the first index is the same as
the second to last index(not checking \0 here). If it is the same, the variable checking the beginning of the string is incremented, and the variable
checking the end of the string is decremented. This continues(assuming that they are all the same) until they meet in the middle/theres only one char
left in the middle(if you checked that with itself it would be the same). This is a palindrome. Within this loop, if the variable checking th beginning
and ends of the string are not the same at any point, then it is not a palindrome and we exit.


3. Zoo.c
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.
To check that the animals name has a 'b' in it, you would iterate through out the entire string (through use of an if statement inside a while loop,
where the latter ensures that we look within the bounds of the string). In the if statement, we check if the current index is 'b' and return true(1) if yes,
if not, we continue looking through the string until the end is reached. If no 'b' is present, false(0) is returned. This function is utilized in the general
filtering function. If any of the necessary conditions are true(through use of logical or), then true is returned and the animal is kept. If none of these
conditions are met, then the animal is not kept. When sorting the animals, bubble search (comparing i with i+1 and swapping if i+1 (right value) is larger.
doing this throughout the string and restarting, ending one char sooner each iteration). To do this, we use nested for loops, where the outer loop is the number of times
that we iterate through and the inner loop takes care of the actual sorting. In the inner loop, an if statement utilizes the compare animals function created earlier and
swaps the left and right values if the value on the right is larger. The swapping is done through the use of a temporary variable as storage while one value is being assigned
to another. 


