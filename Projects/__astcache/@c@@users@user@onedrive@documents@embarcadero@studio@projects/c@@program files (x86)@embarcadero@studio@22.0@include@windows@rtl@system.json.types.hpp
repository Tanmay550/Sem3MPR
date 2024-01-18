﻿// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.JSON.Types.pas' rev: 35.00 (Windows)

#ifndef System_Json_TypesHPP
#define System_Json_TypesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Classes.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Json
{
namespace Types
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TJsonLineInfo;
struct TJsonPosition;
class DELPHICLASS TJsonFiler;
class DELPHICLASS EJsonException;
struct TJsonOid;
struct TJsonRegEx;
struct TJsonDBRef;
struct TJsonCodeWScope;
//-- type declarations -------------------------------------------------------
enum class DECLSPEC_DENUM TJsonToken : unsigned char { None, StartObject, StartArray, StartConstructor, PropertyName, Comment, Raw, Integer, Float, String, Boolean, Null, Undefined, EndObject, EndArray, EndConstructor, Date, Bytes, Oid, RegEx, DBRef, CodeWScope, MinKey, MaxKey };

enum class DECLSPEC_DENUM TJsonEmptyValueHandling : unsigned char { Empty, Null };

enum class DECLSPEC_DENUM TJsonDateFormatHandling : unsigned char { Iso, Unix, FormatSettings };

enum class DECLSPEC_DENUM TJsonDateTimeZoneHandling : unsigned char { Local, Utc };

enum class DECLSPEC_DENUM TJsonDateParseHandling : unsigned char { None, DateTime };

enum class DECLSPEC_DENUM TJsonStringEscapeHandling : unsigned char { Default, EscapeNonAscii, EscapeHtml };

enum class DECLSPEC_DENUM TJsonFloatFormatHandling : unsigned char { String, Symbol, DefaultValue };

enum class DECLSPEC_DENUM TJsonFormatting : unsigned char { None, Indented };

enum class DECLSPEC_DENUM TJsonContainerType : unsigned char { None, Object, Array, Constructor };

enum class DECLSPEC_DENUM TJsonNullValueHandling : unsigned char { Include, Ignore };

enum class DECLSPEC_DENUM TJsonDefaultValueHandling : unsigned char { Include, Ignore, Populate, IgnoreAndPopulate };

enum class DECLSPEC_DENUM TJsonReferenceLoopHandling : unsigned char { Error, Ignore, Serialize };

enum class DECLSPEC_DENUM TJsonObjectCreationHandling : unsigned char { Auto, Reuse, Replace };

enum class DECLSPEC_DENUM TJsonTypeNameHandling : unsigned char { None, Objects, Arrays, All, Auto };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TJsonLineInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual int __fastcall GetLineNumber();
	virtual int __fastcall GetLinePosition();
	virtual bool __fastcall HasLineInfo();
	__property int LineNumber = {read=GetLineNumber, nodefault};
	__property int LinePosition = {read=GetLinePosition, nodefault};
public:
	/* TObject.Create */ inline __fastcall TJsonLineInfo() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJsonLineInfo() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum class DECLSPEC_DENUM TJsonExtendedJsonMode : unsigned char { None, StrictMode, MongoShell };

enum class DECLSPEC_DENUM TJsonBinaryType : unsigned char { Generic, Function, BinaryOld, UUIDOld, UUID, MD5, UserDefined = 128 };

struct DECLSPEC_DRECORD TJsonPosition
{
private:
	static bool __fastcall TypeHasIndex(TJsonContainerType Atype);
	
public:
	TJsonContainerType ContainerType;
	int Position;
	System::UnicodeString PropertyName;
	bool HasIndex;
	__fastcall TJsonPosition(TJsonContainerType AType)/* overload */;
	void __fastcall WriteTo(System::Sysutils::TStringBuilder* const Sb);
	static TJsonPosition __fastcall Create()/* overload */;
	static System::UnicodeString __fastcall BuildPath(System::Generics::Collections::TEnumerable__1<TJsonPosition>* const Positions, int AFromIndex = 0x0);
	static System::UnicodeString __fastcall FormatMessage(TJsonLineInfo* const LineInfo, const System::UnicodeString Path, const System::UnicodeString Msg);
	TJsonPosition() {}
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TJsonFiler : public TJsonLineInfo
{
	typedef TJsonLineInfo inherited;
	
private:
	#if defined(__CGVER__)
	public:
	#endif
	System::UnicodeString __fastcall GetPath();
	
protected:
	System::Generics::Collections::TList__1<TJsonPosition>* FStack;
	System::Sysutils::TStringBuilder* FPathBuilder;
	TJsonPosition FCurrentPosition;
	TJsonPosition __fastcall GetPosition(int ADepth);
	TJsonContainerType __fastcall Peek();
	TJsonContainerType __fastcall Pop();
	void __fastcall Push(TJsonContainerType AValue);
	virtual bool __fastcall GetInsideContainer() = 0 ;
	
public:
	__fastcall TJsonFiler();
	__fastcall virtual ~TJsonFiler();
	System::UnicodeString __fastcall GetPath(int AFromDepth)/* overload */;
	virtual void __fastcall Rewind();
	__property bool InsideContainer = {read=GetInsideContainer, nodefault};
	static bool __fastcall IsEndToken(TJsonToken Token);
	static bool __fastcall IsStartToken(TJsonToken Token);
	static bool __fastcall IsPrimitiveToken(TJsonToken Token);
	__property System::UnicodeString Path = {read=GetPath};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EJsonException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
private:
	System::Sysutils::Exception* FInnerException;
	
public:
	__fastcall EJsonException(const System::UnicodeString Msg, System::Sysutils::Exception* const InnerException)/* overload */;
	__property System::Sysutils::Exception* InnerException = {read=FInnerException};
public:
	/* Exception.CreateFmt */ inline __fastcall EJsonException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EJsonException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EJsonException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EJsonException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EJsonException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EJsonException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJsonException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJsonException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJsonException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJsonException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJsonException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJsonException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

struct DECLSPEC_DRECORD TJsonOid
{
private:
	System::UnicodeString __fastcall GetAsString();
	void __fastcall SetAsString(const System::UnicodeString Value);
#ifndef _WIN64
	System::DynamicArray<System::Byte> __fastcall GetAsBytes();
	void __fastcall SetAsBytes(const System::DynamicArray<System::Byte> Value);
#else /* _WIN64 */
	System::TArray__1<System::Byte> __fastcall GetAsBytes();
	void __fastcall SetAsBytes(const System::TArray__1<System::Byte> Value);
#endif /* _WIN64 */
	
public:
	System::StaticArray<System::Byte, 12> Bytes;
#ifndef _WIN64
	__fastcall TJsonOid(const System::DynamicArray<System::Byte> AOid)/* overload */;
#else /* _WIN64 */
	__fastcall TJsonOid(const System::TArray__1<System::Byte> AOid)/* overload */;
#endif /* _WIN64 */
	__fastcall TJsonOid(const System::UnicodeString AOid)/* overload */;
	__property System::UnicodeString AsString = {read=GetAsString, write=SetAsString};
#ifndef _WIN64
	__property System::DynamicArray<System::Byte> AsBytes = {read=GetAsBytes, write=SetAsBytes};
#else /* _WIN64 */
	__property System::TArray__1<System::Byte> AsBytes = {read=GetAsBytes, write=SetAsBytes};
#endif /* _WIN64 */
	TJsonOid() {}
};


struct DECLSPEC_DRECORD TJsonRegEx
{
private:
	System::UnicodeString __fastcall GetAsString();
	void __fastcall SetAsString(const System::UnicodeString AValue);
	
public:
	System::UnicodeString RegEx;
	System::UnicodeString Options;
	__fastcall TJsonRegEx(const System::UnicodeString ARegEx, const System::UnicodeString AOptions);
	__property System::UnicodeString AsString = {read=GetAsString, write=SetAsString};
	TJsonRegEx() {}
};


struct DECLSPEC_DRECORD TJsonDBRef
{
private:
	System::UnicodeString __fastcall GetAsString();
	void __fastcall SetAsString(const System::UnicodeString AValue);
	
public:
	System::UnicodeString DB;
	System::UnicodeString Ref;
	TJsonOid Id;
	__fastcall TJsonDBRef(const System::UnicodeString ADb, const System::UnicodeString ARef, const System::UnicodeString AId)/* overload */;
	__fastcall TJsonDBRef(const System::UnicodeString ARef, const System::UnicodeString AId)/* overload */;
	__fastcall TJsonDBRef(const System::UnicodeString ADb, const System::UnicodeString ARef, const TJsonOid &AId)/* overload */;
	__fastcall TJsonDBRef(const System::UnicodeString ARef, const TJsonOid &AId)/* overload */;
	__property System::UnicodeString AsString = {read=GetAsString, write=SetAsString};
	TJsonDBRef() {}
};


struct DECLSPEC_DRECORD TJsonCodeWScope
{
	
public:
	struct DECLSPEC_DRECORD TScopeItem
	{
	public:
		System::UnicodeString Ident;
		System::UnicodeString Value;
	};
	
	
	
private:
	typedef System::DynamicArray<TScopeItem> _TJsonCodeWScope__1;
	
	
public:
	System::UnicodeString Code;
	_TJsonCodeWScope__1 Scope;
	__fastcall TJsonCodeWScope(const System::UnicodeString ACode, System::Classes::TStrings* AScope);
	TJsonCodeWScope() {}
};


//-- var, const, procedure ---------------------------------------------------
#define JsonExtOidPropertyName L"$oid"
#define JsonExtBinaryPropertyName L"$binary"
#define JsonExtTypePropertyName L"$type"
#define JsonExtDatePropertyName L"$date"
#define JsonExtRegexPropertyName L"$regex"
#define JsonExtOptionsPropertyName L"$options"
#define JsonExtRefPropertyName L"$ref"
#define JsonExtIdPropertyName L"$id"
#define JsonExtDbPropertyName L"$db"
#define JsonExtCodePropertyName L"$code"
#define JsonExtScopePropertyName L"$scope"
#define JsonExtUndefinedPropertyName L"$undefined"
#define JsonExtMinKeyPropertyName L"$minkey"
#define JsonExtMaxKeyPropertyName L"$maxkey"
#define JsonExtNumberLongPropertyName L"$numberlong"
static const int JsonExtMaxPropertyNameLen = int(11);
#define JsonUndefined L"undefined"
#define JsonNull L"null"
#define JsonTrue L"true"
#define JsonFalse L"false"
#define JsonNew L"new"
#define JsonPositiveInfinity L"Infinity"
#define JsonNegativeInfinity L"-Infinity"
#define JsonNan L"NaN"
extern DELPHI_PACKAGE System::Sysutils::TFormatSettings JSONFormatSettings;
extern DELPHI_PACKAGE int JSONSerializationVersion;
}	/* namespace Types */
}	/* namespace Json */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_JSON_TYPES)
using namespace System::Json::Types;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_JSON)
using namespace System::Json;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_Json_TypesHPP
