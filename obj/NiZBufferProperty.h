/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIZBUFFERPROPERTY_H_
#define _NIZBUFFERPROPERTY_H_

#include "xml_extract.h"
#include NI_Z_BUFFER_PROPERTY_INCLUDE

/*
 * NiZBufferProperty
 */

class NiZBufferProperty;
typedef Ref<NiZBufferProperty> NiZBufferPropertyRef;

class NiZBufferProperty : public NI_Z_BUFFER_PROPERTY_PARENT {
public:
	NiZBufferProperty();
	~NiZBufferProperty();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> link_stack, unsigned int version );
private:
	NI_Z_BUFFER_PROPERTY_MEMBERS
};
#endif
