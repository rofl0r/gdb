#ifndef THREADTOL_H
#define THREADTOL_H

/* macro for conversion of a pthread_t to a long, for numerical representation.
 * pthread_t is a opaque type and it is in fact illegal to use it in a numeric
 * context according to POSIX, but all libc implementations in existence
 * use either a pointer or a number, so its safe to cast it to long 
 * for the moment. */

#define THREADTOL(X) ((long) (X))

#endif

