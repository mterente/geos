/**********************************************************************
 * $Id$
 *
 * GEOS - Geometry Engine Open Source
 * http://geos.refractions.net
 *
 * Copyright (C) 2001-2002 Vivid Solutions Inc.
 *
 * This is free software; you can redistribute and/or modify it under
 * the terms of the GNU Lesser General Public Licence as published
 * by the Free Software Foundation. 
 * See the COPYING file for more information.
 *
 **********************************************************************
 * $Log$
 * Revision 1.1  2004/04/14 06:04:26  ybychkov
 * "geomgraph/index" committ problem fixed.
 *
 * Revision 1.9  2004/03/19 09:49:29  ybychkov
 * "geomgraph" and "geomgraph/indexl" upgraded to JTS 1.4
 *
 * Revision 1.8  2003/11/07 01:23:42  pramsey
 * Add standard CVS headers licence notices and copyrights to all cpp and h
 * files.
 *
 * Revision 1.7  2003/10/15 15:30:32  strk
 * Declared a SweepLineEventOBJ from which MonotoneChain and SweepLineSegment
 * derive to abstract SweepLineEvent object previously done on void * pointers.
 * No more compiler warnings...
 *
 **********************************************************************/


#include "../../headers/geomgraphindex.h"

namespace geos {

MonotoneChain::MonotoneChain(MonotoneChainEdge *newMce,int newChainIndex) {
	mce=newMce;
	chainIndex=newChainIndex;
}

MonotoneChain::~MonotoneChain() {
}

void MonotoneChain::computeIntersections(MonotoneChain *mc,SegmentIntersector *si){
	mce->computeIntersectsForChain(chainIndex,mc->mce,mc->chainIndex,si);
}

}

