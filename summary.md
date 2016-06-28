### Introduction to Compiler Construction 2016

#### selfie - summary

Team: c-star-fox

Member(s): Stefan Fuchs (github.com/idefux)

I did the work alone for two reasons. First, I only joined the class at the end of March because I was on a business trip in Switzerland the previous four weeks.
Second, I didn't want to team up because it would have been very hard for me to meet with my team members at regular times. I'm working full time and I have a family.
So, in general, I could only do some work on the project at night hours.

Due to this my project surely lacks elegance and great design which you get from the insight of others.
However, as every single line of code is my doing, I gained full insight into the selfie project and I'm fully aware of every new functionality and the majority of the base functionality.

Furthermore I greatly improved my skills in gdb debugging and analyzing the assembly in order to find some bugs that were hidden in my blind spots.

In its current state my selfie can do all of the functionality asked for in the assignments. From top down:

Memory management:
Can do the free and reuse memory. Functionality is as discussed in the class. Uses a singly linked list that's built into the freed memory cells.
I figured out that i need to use *storeVirtualMemory()* myself. I figured this out by peeking at the emulators OP_SW function.

Boolean operators (algebra):
Does as requested. I implemented lots of tests in the Makefile and I'm pretty confident about the functionality.

Boolean operators (individual):
Implementation of "not" operator is handled only at compile time and does not emit any instructions in control flow. This is done by inverting comparison operators or true / false jumps.
But the not operator can also be used in data flow (*x = !y*). In this case the operator needs to be handled at runtime by emitting some instructions.

Struct access:
SymbolTable entries are built upon the type struct SymbolTable. It works with some exceptions. Cannot do nested struct accesses e.g. (s1->fieldA->fieldZ). Cannot access arrays inside structs e.g. (s1->fieldA[0]).

Struct Declarations:
Works. I've choosen a rather sophisticated way by introducing a new table "user-defined-types" with references to field entries. With this it is easily extensible for other kinds of user types. Furthermore, for me it didn't feel right to store struct fields into the SymbolTable.

Arrays:
Works. Lots of tests in the Makefile.

Constant Folding:
Works. Maybe there are some corner cases which my tests do not cover.

Bitwise Shift Operators:
Works.

What I did beyond you requested:
- Extensive testing in Makefiles (see the test subdir of my repo).
- I was the only green check mark in the constant folding assignment where you introduced the travis continuous integration framework.
- I worked out all the assignments alone besides working full time and having a family.
