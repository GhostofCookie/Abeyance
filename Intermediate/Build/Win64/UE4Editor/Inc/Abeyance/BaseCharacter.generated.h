// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABEYANCE_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define ABEYANCE_BaseCharacter_generated_h

#define Abeyance_Source_Abeyance_BaseCharacter_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveRight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateXp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateXp(Z_Param_Delta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateStat) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateStat(Z_Param_Name,Z_Param_Delta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateHealth(Z_Param_Delta); \
		P_NATIVE_END; \
	}


#define Abeyance_Source_Abeyance_BaseCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveRight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateXp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateXp(Z_Param_Delta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateStat) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateStat(Z_Param_Name,Z_Param_Delta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CalculateHealth(Z_Param_Delta); \
		P_NATIVE_END; \
	}


#define Abeyance_Source_Abeyance_BaseCharacter_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend ABEYANCE_API class UClass* Z_Construct_UClass_ABaseCharacter(); \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Abeyance"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Abeyance_Source_Abeyance_BaseCharacter_h_11_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend ABEYANCE_API class UClass* Z_Construct_UClass_ABaseCharacter(); \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Abeyance"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Abeyance_Source_Abeyance_BaseCharacter_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define Abeyance_Source_Abeyance_BaseCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define Abeyance_Source_Abeyance_BaseCharacter_h_11_PRIVATE_PROPERTY_OFFSET
#define Abeyance_Source_Abeyance_BaseCharacter_h_8_PROLOG
#define Abeyance_Source_Abeyance_BaseCharacter_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Abeyance_Source_Abeyance_BaseCharacter_h_11_PRIVATE_PROPERTY_OFFSET \
	Abeyance_Source_Abeyance_BaseCharacter_h_11_RPC_WRAPPERS \
	Abeyance_Source_Abeyance_BaseCharacter_h_11_INCLASS \
	Abeyance_Source_Abeyance_BaseCharacter_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Abeyance_Source_Abeyance_BaseCharacter_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Abeyance_Source_Abeyance_BaseCharacter_h_11_PRIVATE_PROPERTY_OFFSET \
	Abeyance_Source_Abeyance_BaseCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Abeyance_Source_Abeyance_BaseCharacter_h_11_INCLASS_NO_PURE_DECLS \
	Abeyance_Source_Abeyance_BaseCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Abeyance_Source_Abeyance_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
