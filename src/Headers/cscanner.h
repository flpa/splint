/*
** Copyright (C) University of Virginia, Massachusetts Institue of Technology 1994-2001.
** See ../LICENSE for license information.
**
*/
/*
** cscanner.h
*/

extern /*@observer@*/ cstring cscanner_observeLastIdentifier (void) ;
extern void cscanner_expectingMetaStateName (void) /*@modifies internalState@*/ ;
extern void cscanner_clearExpectingMetaStateName (void) /*@modifies internalState@*/ ;
extern void cscanner_swallowMacro (void) /*@modifies internalState, fileSystem@*/ ;
