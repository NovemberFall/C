#include <stdio.h>
#include <string.h>

/*
A palindrome is a string that is same in both forward and backward reading.
Example:
   "madam"
   "racecar"
   "a man a plan a canal panama"
   "radar"
You will write a program that will test if a given string is a palingdrome or not.
Your program will ask the user to input a string and if the string is a palindrome program
will just print "Yes, it is a Palindrome", otherwise will print "No, not a Palindrome".

Please note that:
1. Your you need to check in case-insensitive way, that means: Madam or madam both should be
detected as Palindrome.

2. There can be (any number of ) spaces in between the words.
    "A man a plan a canal panama"
        OR
    "A     man    a   pla n a cana l Panama"
    both the strings must be detected as Palindrome.
3. There can be punctuations in between the words, for this assignments,
we consider only 4 punctuations,   . ?  ! and ,

Your program will just need to ignore them (treat them as space).
    "Cigar? Toss it in a can. It is so tragic."
    Should be detected as palindrome.

 *** For this assignment I will not write any instructions or guidance, you are free
        to implement it with your own way, you can use the string.h functions, But
        YOU MUST NOT USE ADDITIONAL ARRAYS, ONLY ONE ARRAY SHOULD BE USED TO KEEP THE STRING

    Good luck.

*/


int main(){
    char string [100];
    printf("Enter a string: ");
    scanf("%[^\n]", string);

    int isPalindrome = 1;  // assign 0 to this if the string is a NOT palindrome

    // write code to test if string is a palindrome
    // will take 2 indices, i and j, initialize i at the first character and
    // j at last character
    int i = 0, j = strlen(string) - 1;
    // iterate as long as i is less than j and still palindrome property is holding so far.
    while(i < j && isPalindrome){
        // skip all the spaces or punctuation marks from left
        while(string[i] == ' ' || string[i] == '?' || string[i] == '.'|| string[i] == ',' || string[i] == '!'){
            i++;
        }

        // also skip all spaces and punctuation marks from right
        while(string[j] == ' ' || string[j] == '?' || string[j] == '.'|| string[j] == ',' || string[j] == '!'){
            j--;
        }

        // Now get the ith character in upper case
        char left = (char)(string[i] >= 'a' && string[i] <= 'z'? string[i]-32 : string[i]);
        // get the jth character also in upper case, (making case insensitive, taking both to same cases)
        char right = (char)(string[j] >= 'a' && string[j] <= 'z'? string[j]-32 : string[j]);

        if (left != right){
            isPalindrome = 0;
        }
        // move i from left to right
        i++;
        // move j from right to left
        j--;


    }

    // at the end you need to test
    if (isPalindrome){
        printf("Yes, it is Palindrome!\n");
    }
    else{
        printf("No, not a Palindrome\n");
    }


    return 0;
}
