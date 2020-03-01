  - Steven Liu
  - xl2948
  - lab 3
  - description for each part
  
The description should indicate whether your solution for the part is
working or not.  You may also want to include anything else you would
like to communicate to the grader such as extra functionalities you
implemented or how you tried to fix your non-working code.

Description:
Part 1: My code works exactly as specified in the lab.
Part 2: My code works exactly as specified in the lab.
For both parts, Run "make vtest" in each folder to use valgrind and check for memory errors.

---The valgrind result of part 1 is below--
==19947== Memcheck, a memory error detector
==19947== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19947== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==19947== Command: ./mylist-test
==19947== 
testing addFront(): 9.0 8.0 7.0 6.0 5.0 4.0 3.0 2.0 1.0 
testing flipSignDouble(): -9.0 -8.0 -7.0 -6.0 -5.0 -4.0 -3.0 -2.0 -1.0 
testing flipSignDouble() again: 9.0 8.0 7.0 6.0 5.0 4.0 3.0 2.0 1.0 
testing findNode(): OK
popped 9.0, the rest is: [ 8.0 7.0 6.0 5.0 4.0 3.0 2.0 1.0 ]
popped 8.0, the rest is: [ 7.0 6.0 5.0 4.0 3.0 2.0 1.0 ]
popped 7.0, the rest is: [ 6.0 5.0 4.0 3.0 2.0 1.0 ]
popped 6.0, the rest is: [ 5.0 4.0 3.0 2.0 1.0 ]
popped 5.0, the rest is: [ 4.0 3.0 2.0 1.0 ]
popped 4.0, the rest is: [ 3.0 2.0 1.0 ]
popped 3.0, the rest is: [ 2.0 1.0 ]
popped 2.0, the rest is: [ 1.0 ]
popped 1.0, the rest is: [ ]
testing addAfter(): 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 
popped 1.0, and reversed the rest: [ 9.0 8.0 7.0 6.0 5.0 4.0 3.0 2.0 ]
popped 9.0, and reversed the rest: [ 2.0 3.0 4.0 5.0 6.0 7.0 8.0 ]
popped 2.0, and reversed the rest: [ 8.0 7.0 6.0 5.0 4.0 3.0 ]
popped 8.0, and reversed the rest: [ 3.0 4.0 5.0 6.0 7.0 ]
popped 3.0, and reversed the rest: [ 7.0 6.0 5.0 4.0 ]
popped 7.0, and reversed the rest: [ 4.0 5.0 6.0 ]
popped 4.0, and reversed the rest: [ 6.0 5.0 ]
popped 6.0, and reversed the rest: [ 5.0 ]
popped 5.0, and reversed the rest: [ ]
==19947== 
==19947== HEAP SUMMARY:
==19947==     in use at exit: 0 bytes in 0 blocks
==19947==   total heap usage: 19 allocs, 19 frees, 1,312 bytes allocated
==19947== 
==19947== All heap blocks were freed -- no leaks are possible
==19947== 
==19947== For counts of detected and suppressed errors, rerun with: -v
==19947== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

---The valgrind result of part 2 is below--
valgrind --leak-check=yes ./revecho 213 432 434 12dude dude
==20475== Memcheck, a memory error detector
==20475== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20475== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20475== Command: ./revecho 213 432 434 12dude dude
==20475== 
dude 
12dude 
434 
432 
213 

dude found
==20475== 
==20475== HEAP SUMMARY:
==20475==     in use at exit: 0 bytes in 0 blocks
==20475==   total heap usage: 6 allocs, 6 frees, 1,104 bytes allocated
==20475== 
==20475== All heap blocks were freed -- no leaks are possible
==20475== 
==20475== For counts of detected and suppressed errors, rerun with: -v
==20475== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
