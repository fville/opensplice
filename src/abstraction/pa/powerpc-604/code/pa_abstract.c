/*
 *                         OpenSplice DDS
 *
 *   This software and documentation are Copyright 2006 to 2011 PrismTech
 *   Limited and its licensees. All rights reserved. See file:
 *
 *                     $OSPL_HOME/LICENSE 
 *
 *   for full copyright notice and license terms. 
 *
 */
/*
 * Implements PA abstraction for x86
 */


os_uint32
pa_increment(
    os_uint32 *count)
{
    os_uint32 value;

#ifdef __GNUC__
    // code lifted from linux
    __asm__ __volatile__ (
    "1: lwarx   %0,0,%1\n"
    "   addic   %0,%0,1\n"
    "   stwcx.  %0,0,%1 \n"
    "   bne-    1b"
    : "=&r" (value)
    : "r" (count)
    : "cc", "memory");

    return value;
#else
    AtomicModify( count, &value, 0, 1 );
    return( value + 1 );
#endif
}


os_uint32
pa_decrement(
    os_uint32 *count)
{
    os_uint32 value;
#ifdef __GNUC__
    // code lifted from linux
    __asm__ __volatile__(
    "1: lwarx   %0,0,%1\n"
    "   addic   %0,%0,-1\n"
    "   stwcx.  %0,0,%1\n"
    "   bne-    1b"
    : "=&r" (value)
    : "r" (count)
    : "cc", "memory");

    return value;
#else
    AtomicModify( count, &value, 0, -1 );
    return( value - 1 );
#endif
}

