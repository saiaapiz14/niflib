/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _BHKCAPSULESHAPE_H_
#define _BHKCAPSULESHAPE_H_

#include "xml_extract.h"
#include BHK_CAPSULE_SHAPE_INCLUDE

/*
 * bhkCapsuleShape
 */

class bhkCapsuleShape;
typedef Ref<bhkCapsuleShape> bhkCapsuleShapeRef;

class bhkCapsuleShape : public BHK_CAPSULE_SHAPE_PARENT {
public:
	bhkCapsuleShape();
	~bhkCapsuleShape();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> link_stack, unsigned int version );
private:
	BHK_CAPSULE_SHAPE_MEMBERS
};
#endif
