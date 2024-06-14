# This is CS50 course

## General Information

CS50 is a course that teaches students how to think algorithmically and solve problems efficiently. Topics include abstraction, algorithms, data structures, encapsulation, resource management, security, and software engineering. Languages include C, Python, and SQL plus students’ choice of: HTML, CSS, and JavaScript (for web development); Java or Swift (for mobile app development); or Lua (for game development).

Problem sets inspired by the arts, humanities, social sciences, and sciences. Course culminates in a final project. Designed for concentrators and non-concentrators alike, with or without prior programming experience. Among the overarching goals of this course are to inspire students to explore unfamiliar waters, without fear of failure, create an intensive, shared experience, accessible to all students, and build community among students.

Please keep in mind Academic Honesty. The CS50 course recognizes that interactions with others can facilitate mastery of the course’s material. However, there remains a line between enlisting the help of another and submitting the work of another. There are many great communities for support and help, such as the CS50 Subreddit and CS50 Slack. Investing your time and energy into solving each and every problem set independently is the best way to experience the course.
Weekly Overview

### Week 0: Scratch

_Assignment_ : Ping Pong Game from Scratch: Using Up or Down buttons to move both 2 bars for bouncing the ball. Don't miss it.


* Scratch [Ping Pong Mini Game](https://scratch.mit.edu/projects/969304688)

### Week 1: C

_Assignment 1_: To implement a program in C that prompts the user for their name and then says hello to that user. For instance, if the user’s name is Adele, your program should print "hello, Adele\n!"

_Assignment 2_: To implement a program in C that recreates that pyramid, using hashes (#) for bricks:
<!-- 
Input the height of pyramid between 1 and 8: 4
    #
   ##
  ###
 #### 
-->

_Assignment 3_: Suppose you work at a store and a customer gives you $1.00 (100 cents) for candy that costs $0.50 (50 cents). You’ll need to pay them their “change,” the amount leftover after paying for the cost of the candy. When making change, odds are you want to minimize the number of coins you’re dispensing for each customer, lest you run out (or annoy the customer!). In a file called cash.c in a folder called cash, implement a program in C that prints the minimum coins needed to make the given amount of change, in cents, as in the below:
<!-- 
Change owed: 25
1
-->

### Week 2: Arrays

_Assignment 1_: In a file called scrabble.c in a folder called scrabble, implement a program in C that determines the winner of a short Scrabble-like game. Your program should prompt for input twice: once for “Player 1” to input their word and once for “Player 2” to input their word. Then, depending on which player scores the most points, your program should either print “Player 1 wins!”, “Player 2 wins!”, or “Tie!” (in the event the two players score equal points).
<!--
$ ./scrabble
Player 1: Question?
Player 2: Question!
Tie!
$ ./scrabble
Player 1: red
Player 2: wheelbarrow
Player 2 wins!
$ ./scrabble
Player 1: COMPUTER
Player 2: science
Player 1 wins!
$ ./scrabble
Player 1: Scrabble
Player 2: wiNNeR
Player 1 wins!
-->

_Assignment 2_: In a file called readability.c in a folder called readability, you’ll implement a program that calculates the approximate grade level needed to comprehend some text. Your program should print as output “Grade X” where “X” is the grade level computed, rounded to the nearest integer. If the grade level is 16 or higher (equivalent to or greater than a senior undergraduate reading level), your program should output “Grade 16+” instead of giving the exact index number. If the grade level is less than 1, your program should output “Before Grade 1”. index = 0.0588 * L - 0.296 * S - 15.8 (where L is the average number of letters per 100 words in the text, and S is the average number of sentences per 100 words in the text)

_Assignment 3_: Caesar’s algorithm (i.e., cipher) encrypts messages by “rotating” each letter by **K** positions. More formally, if **p** is some plaintext (i.e., an unencrypted message), **p**i is the **i**th character in **p**, and **k** is a secret key (i.e., a non-negative integer), then each letter, **c**i in the ciphertext, **c**, is computed as: **c = (pi + k)%26**
In a file called caesar.c in a folder called caesar, write a program that enables you to encrypt messages using Caesar’s cipher. At the time the user executes the program, they should decide, by providing a command-line argument, what the key should be in the secret message they’ll provide at runtime. We shouldn’t necessarily assume that the user’s key is going to be a number; though you may assume that, if it is a number, it will be a positive integer.

### Week 3: Algorithms

_Assignment 1_: Sort 1 uses: Bubble Sort
How do you know?: Has a fast runtime for the sorted datasets, but it performes poorer on bigger datasets of reversed and random numbers.
Sort 2 uses: Merge Sort
How do you know?: It's efficient in all the datasets.
Sort 3 uses: Selection Sort
How do you know?: It performs poorly on all three .txt files which contains larger datasets(50000) and it's faster while going through the smaller datasets(5000).

_Assignment 2_: Elections come in all shapes and sizes. In the UK, the Prime Minister is officially appointed by the monarch, who generally chooses the leader of the political party that wins the most seats in the House of Commons. The United States uses a multi-step Electoral College process where citizens vote on how each state should allocate Electors who then elect the President.
Perhaps the simplest way to hold an election, though, is via a method commonly known as the “plurality vote” (also known as “first-past-the-post” or “winner take all”). In the plurality vote, every voter gets to vote for one candidate. At the end of the election, whichever candidate has the greatest number of votes is declared the winner of the election.

_Assignment 3_: In a file called runoff.c in a folder called runoff, create a program to simulate a runoff election. If no candidate has more than 50% of the vote, then an “instant runoff” occurrs. The candidate who received the fewest number of votes is eliminated from the election, and anyone who originally chose that candidate as their first preference now has their second preference considered. Why do it this way? Effectively, this simulates what would have happened if the least popular candidate had not been in the election to begin with.
The process repeats: if no candidate has a majority of the votes, the last place candidate is eliminated, and anyone who voted for them will instead vote for their next preference (who hasn’t themselves already been eliminated). Once a candidate has a majority, that candidate is declared the winner.

### Week 4: Memory

_Assignment 1_: WAV files are a common file format for representing audio. WAV files store audio as a sequence of “samples”: numbers that represent the value of some audio signal at a particular point in time. WAV files begin with a 44-byte “header” that contains information about the file itself, including the size of the file, the number of samples per second, and the size of each sample. After the header, the WAV file contains a sequence of samples, each a single 2-byte (16-bit) integer representing the audio signal at a particular point in time. Scaling each sample value by a given factor has the effect of changing the volume of the audio. Multiplying each sample value by 2.0, for example, will have the effect of doubling the volume of the origin audio. Multiplying each sample by 0.5, meanwhile, will have the effect of cutting the volume in half. In a file called volume.c in a folder called volume, write a program to modify the volume of an audio file.

