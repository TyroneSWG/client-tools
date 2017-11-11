
#ifndef _MAttributeSpec
#define _MAttributeSpec
//
//-
// ==========================================================================
// Copyright (C) 1995 - 2006 Autodesk, Inc., and/or its licensors.  All 
// rights reserved.
// 
// The coded instructions, statements, computer programs, and/or related 
// material (collectively the "Data") in these files contain unpublished 
// information proprietary to Autodesk, Inc. ("Autodesk") and/or its 
// licensors,  which is protected by U.S. and Canadian federal copyright law 
// and by international treaties.
// 
// The Data may not be disclosed or distributed to third parties or be 
// copied or duplicated, in whole or in part, without the prior written 
// consent of Autodesk.
// 
// The copyright notices in the Software and this entire statement, 
// including the above license grant, this restriction and the following 
// disclaimer, must be included in all copies of the Software, in whole 
// or in part, and all derivative works of the Software, unless such copies 
// or derivative works are solely in the form of machine-executable object 
// code generated by a source language processor.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND. 
// AUTODESK DOES NOT MAKE AND HEREBY DISCLAIMS ANY EXPRESS OR IMPLIED 
// WARRANTIES INCLUDING, BUT NOT LIMITED TO, THE WARRANTIES OF 
// NON-INFRINGEMENT, MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, 
// OR ARISING FROM A COURSE OF DEALING, USAGE, OR TRADE PRACTICE. IN NO 
// EVENT WILL AUTODESK AND/OR ITS LICENSORS BE LIABLE FOR ANY LOST 
// REVENUES, DATA, OR PROFITS, OR SPECIAL, DIRECT, INDIRECT, OR 
// CONSEQUENTIAL DAMAGES, EVEN IF AUTODESK AND/OR ITS LICENSORS HAS 
// BEEN ADVISED OF THE POSSIBILITY OR PROBABILITY OF SUCH DAMAGES. 
// ==========================================================================
//+
//
// CLASS:    MAttributeSpec
//
// *****************************************************************************
//
// CLASS DESCRIPTION (MAttributeSpec)
//
//		Class that encapsulates component/attribute information
//		for generating selection items.
//
//      This class is used by MPxSurfaceShape::matchComponent for validating
//      attributes specified as strings and converting that specification to
//      a component object.
//
//		The attribute specification ".foo.bar[3].x" would be
//		expressed like this (using a pseudo-structure description):
//
//		MAttributeSpecArray[0..3] {
//			MAttributeSpec[0] {
//				name      = "foo"
//				dimension = 0
//			}
//			MAttributeSpec[1] {
//				name      = "bar"
//				dimension = 1
//				MAttributeIndex[0] = {
//					type      = kInteger
//					isRange   = false
//					isBounded = true
//					value     = 3
//				}
//			}
//			MAttributeSpec[2] {
//				name      = "x"
//				dimension = 0
//			}
//		}
//
// *****************************************************************************

#if defined __cplusplus

// *****************************************************************************

// INCLUDED HEADER FILES



#include <maya/MTypes.h>

// *****************************************************************************

// DECLARATIONS

class MAttributeIndex;
class MString;

// *****************************************************************************

// CLASS DECLARATION (MAttributeSpec)

/// An attribute specification
/**
*/
#ifdef _WIN32
#pragma warning(disable: 4522)
#endif // _WIN32

class OPENMAYA_EXPORT MAttributeSpec {
public:
	///
	MAttributeSpec();
	///
	MAttributeSpec( const char * name);
	///
	MAttributeSpec( const MString & name);
	///
	MAttributeSpec( const MAttributeSpec & other);
	///
	~MAttributeSpec();

public:
	///
	const MString 			name() const;
	///
	int						dimensions() const;
	///
	void					setName( const MString & name);
	///
	void					setDimensions( int value);

public:
	///
	MAttributeSpec &		operator =(const MAttributeSpec & rhs);
	///
	const MAttributeIndex	operator [](int index) const;
	///
	MAttributeIndex 		operator[](int index);
	///
	bool					operator==(const MAttributeSpec & other) const;

private:
	MAttributeSpec( void* );
	void*	data;
	bool	own;
	static const char* className();
};

#ifdef _WIN32
#pragma warning(default: 4522)
#endif // _WIN32

// *****************************************************************************
#endif /* __cplusplus */
#endif /* _MAttributeSpec */
