//-------------------------------------------------------------------------
//    $Id$
//    Version: $Name$
//
//    Copyright (C) 2003, 2004, 2006 by the deal.II authors
//
//    This file is subject to QPL and may not be  distributed
//    without copyright and license information. Please refer
//    to the file deal.II/doc/license.html for the  text  and
//    further information on this license.
//
//-------------------------------------------------------------------------


/**
 * @defgroup VMemory Vector memory management
 *
 * This module groups a few classes that are used to avoid allocating and
 * deallocating vectors over and over in iterative procedures. These methods
 * all use an object of the base class VectorMemory to get their auxiliary
 * vectors.
 *
 * Presently, only step-20 illustrates the use of these classes.
 *
 * @ingroup LAC
 */
