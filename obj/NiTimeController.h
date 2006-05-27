/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NITIMECONTROLLER_H_
#define _NITIMECONTROLLER_H_

#include "xml_extract.h"
#include NI_TIME_CONTROLLER_INCLUDE

/*
 * NiTimeController
 */

class NiTimeController;
typedef Ref<NiTimeController> NiTimeControllerRef;

class NiTimeController : public NI_TIME_CONTROLLER_PARENT {
public:
	NiTimeController();
	~NiTimeController();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> link_stack, unsigned int version );
private:
	NI_TIME_CONTROLLER_MEMBERS
};
#endif
