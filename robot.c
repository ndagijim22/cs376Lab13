/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *
<<<<<<< HEAD
 * @author Tanya L. Crenshaw, Nathan Schmedake, Aidan D.
=======
 * @author Tanya L. Crenshaw, Nathan Schmedake, Moses N.
>>>>>>> 0111c00b7c04034a3edc232ef63f025738dec64d
 * @since August 2013
 *
 */

#include "robot.h"

/**
 * robotPrintMessage
 *
 * This function prints the message, "I really love robots!"
 *
 * @returns none 
 */
void robotPrintMessage(void)
{
  printf("\n\nI really hate robots!\n\n");
  return;
}

/**
 * robotPrintAscii
 *
 */
void robotPrintAscii(void)
{
  int i;
  char* blank = "                              ";
  blank = blank +30;
  for (i = 0; i < 3; i++) 
  { 
    printf("\n\n"
  	 "UWR: Unidentified Wheeled Robot\n"
  	 "%s    i_i    \n"
  	 "%s   [-_O]   \n"
	 "%s  /|___|\\ \n"
	 "%s   d   b   \n",blank, blank, blank, blank);
   
     blank = blank - 10;
   }
}

/**
 * dalekPrintAscii
 *
 */
void dalekPrintAscii(void)
{
  int i;
  char* blank = "                              ";
  blank = blank +30;
  printf("\n\n"
	 "I am not Dalek, from Dr. Who\n"
	 "%s      <----->      \n" 
         "%s     <  (X)  >     \n"        
	 "%s     <  (0)  >     \n"        
         "%s     |       |     \n"
         "%s    < ------- >    \n"
         "%s    o         o    \n"
         "%s    o  0  ()  o    \n"
	 "%s   o           o   \n"
   	 "%s o o o o o o o o o \n"
   	 "%s o o o o o o o o o \n"
   	 "%s o o o o o o o o o \n", blank, blank, blank, blank, blank, blank, 
	 blank, blank, blank, blank);
  blank = blank - 10;
}
