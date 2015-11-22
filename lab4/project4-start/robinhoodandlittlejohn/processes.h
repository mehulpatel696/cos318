#ifndef PROCESSES_H
#define PROCESSES_H

/*
 * These are all of the programs which we include in our
 * ramdisk filesystem.
 *
 * It is VERY IMPORTANT that these functions do
 * not use any global variables.  This is because
 * each one might be running many times, and we do
 * not have any facility to duplicate their
 * data segments.
 *
 */

/* The init process is the first process started
 * by the kernel.
 */
void init(void);

/* Robin hood and little John are allies */
void RobinHood(void);
void LittleJohn(void);

/* And there is a villian (hiss) --- the
 * Sheriff of KnottingHam
 */
void Sheriff(void);


#endif

