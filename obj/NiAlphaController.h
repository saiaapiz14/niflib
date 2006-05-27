/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIALPHACONTROLLER_H_
#define _NIALPHACONTROLLER_H_

#include "xml_extract.h"
#include NI_ALPHA_CONTROLLER_INCLUDE

/*
 * NiAlphaController
 */

class NiAlphaController;
typedef Ref<NiAlphaController> NiAlphaControllerRef;

class NiAlphaController : public NI_ALPHA_CONTROLLER_PARENT {
public:
	NiAlphaController();
	~NiAlphaController();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> link_stack, unsigned int version );
private:
	NI_ALPHA_CONTROLLER_MEMBERS
};
#endif
