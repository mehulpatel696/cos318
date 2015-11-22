/*    keyboard.h
*/
#ifndef KEYBOARD_H
    #define KEYBOARD_H

//    Includes
    #include "kernel.h"

//    Constants
enum {
    RIGHT_SHIFT            = 1,
    LEFT_SHIFT            = 2,
    CAPS_SHIFT            = 4,
    CONTROL                = 8,
    ALT                    = 16,
};

#define KEYBOARD_MBOX_NAME  "keyboard"

//    Used for scan code conversion
struct ascii {
    unsigned char no_shift;          /* no_shift ascii code (lower case) */
    unsigned char shift;             /* shift acii code (upper case) */
    unsigned char control;           /* control ascii code */
    void (*handler)(unsigned char);  /* pointer to handler */
};

struct character {
    unsigned char character;         /* ascii code */
    unsigned char attribute;         /* shift status */
    unsigned char scancode;
};

/*    Called by the kernel to initialize keyboard handling.
    Note that it uses the mailboxes, so this must be initialized
    after the mailboxes.
*/
void keyboard_init( void);

//    Keyboard interrupt handler
void keyboard_interrupt( void);

/*    Function to read a character from the keyboard queue.
*/
int    do_getchar();

#endif
