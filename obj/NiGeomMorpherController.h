/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIGEOMMORPHERCONTROLLER_H_
#define _NIGEOMMORPHERCONTROLLER_H_

#include "xml_extract.h"
#include NI_GEOM_MORPHER_CONTROLLER_INCLUDE

/*
 * NiGeomMorpherController
 */

class NiGeomMorpherController;
typedef Ref<NiGeomMorpherController> NiGeomMorpherControllerRef;

class NiGeomMorpherController : public NI_GEOM_MORPHER_CONTROLLER_PARENT {
public:
	NiGeomMorpherController();
	~NiGeomMorpherController();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> link_stack, unsigned int version );
private:
	NI_GEOM_MORPHER_CONTROLLER_MEMBERS
};
#endif
