// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef GESTURESAMPLE_GestureRecognizerComponent_generated_h
#error "GestureRecognizerComponent.generated.h already included, missing '#pragma once' in GestureRecognizerComponent.h"
#endif
#define GESTURESAMPLE_GestureRecognizerComponent_generated_h

class UGestureRecognizerComponent;
void FGestureEnded_DelegateWrapper(const FMulticastScriptDelegate& GestureEnded, UGestureRecognizerComponent* Recognizer, float DeltaTime);


#define UGestureRecognizerComponent_USTRUCT_BODY_LINE_45 \
	friend GESTURESAMPLE_API class UScriptStruct* Z_Construct_UScriptStruct_UGestureRecognizerComponent_FGestureTouchData(); \
	GESTURESAMPLE_API static class UScriptStruct* StaticStruct();


#define UGestureRecognizerComponent_EVENTPARMS
#define UGestureRecognizerComponent_DELEGATES \
struct GestureRecognizerComponent_eventGestureEnded_Parms \
{ \
	UGestureRecognizerComponent* Recognizer; \
	float DeltaTime; \
}; \
inline void FGestureEnded_DelegateWrapper(const FMulticastScriptDelegate& GestureEnded, UGestureRecognizerComponent* Recognizer, float DeltaTime) \
{ \
	GestureRecognizerComponent_eventGestureEnded_Parms Parms; \
	Parms.Recognizer=Recognizer; \
	Parms.DeltaTime=DeltaTime; \
	GestureEnded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UGestureRecognizerComponent_RPC_WRAPPERS \
 \
 \
	DECLARE_FUNCTION(execDetectGestures) \
	{ \
		P_GET_PROPERTY(UFloatProperty,DeltaTime); \
		P_FINISH; \
		this->DetectGestures(DeltaTime); \
	}


#define UGestureRecognizerComponent_RPC_WRAPPERS_NO_PURE_DECLS \
	static inline void StaticChecks_Implementation_Validate() \
	{ \
	} \
 \
 \
	DECLARE_FUNCTION(execDetectGestures) \
	{ \
		P_GET_PROPERTY(UFloatProperty,DeltaTime); \
		P_FINISH; \
		this->DetectGestures(DeltaTime); \
	}


#define UGestureRecognizerComponent_CALLBACK_WRAPPERS
#define UGestureRecognizerComponent_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUGestureRecognizerComponent(); \
	friend GESTURESAMPLE_API class UClass* Z_Construct_UClass_UGestureRecognizerComponent(); \
	public: \
	DECLARE_CLASS(UGestureRecognizerComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, GestureSample, NO_API) \
	DECLARE_SERIALIZER(UGestureRecognizerComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	UObject* _getUObject() const { return const_cast<UGestureRecognizerComponent*>(this); }


#define UGestureRecognizerComponent_INCLASS \
	private: \
	static void StaticRegisterNativesUGestureRecognizerComponent(); \
	friend GESTURESAMPLE_API class UClass* Z_Construct_UClass_UGestureRecognizerComponent(); \
	public: \
	DECLARE_CLASS(UGestureRecognizerComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, GestureSample, NO_API) \
	DECLARE_SERIALIZER(UGestureRecognizerComponent) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	UObject* _getUObject() const { return const_cast<UGestureRecognizerComponent*>(this); }


#define UGestureRecognizerComponent_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGestureRecognizerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGestureRecognizerComponent) \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UGestureRecognizerComponent(const UGestureRecognizerComponent& InCopy); \
public:


#define UGestureRecognizerComponent_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UGestureRecognizerComponent(const UGestureRecognizerComponent& InCopy); \
public: \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGestureRecognizerComponent)


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME UGestureRecognizerComponent


#undef UCLASS
#undef UINTERFACE
#if UE_BUILD_DOCS
#define UCLASS(...)
#else
#define UCLASS(...) \
UGestureRecognizerComponent_EVENTPARMS \
UGestureRecognizerComponent_DELEGATES
#endif


#undef GENERATED_UCLASS_BODY
#undef GENERATED_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UGestureRecognizerComponent_RPC_WRAPPERS \
	UGestureRecognizerComponent_CALLBACK_WRAPPERS \
	UGestureRecognizerComponent_INCLASS \
	UGestureRecognizerComponent_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_POP


#define GENERATED_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UGestureRecognizerComponent_RPC_WRAPPERS_NO_PURE_DECLS \
	UGestureRecognizerComponent_CALLBACK_WRAPPERS \
	UGestureRecognizerComponent_INCLASS_NO_PURE_DECLS \
	UGestureRecognizerComponent_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_POP

