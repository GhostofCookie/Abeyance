// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BaseCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacter() {}
// Cross Module References
	ABEYANCE_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
	ABEYANCE_API UClass* Z_Construct_UClass_ABaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Abeyance();
	ABEYANCE_API UFunction* Z_Construct_UFunction_ABaseCharacter_CalculateHealth();
	ABEYANCE_API UFunction* Z_Construct_UFunction_ABaseCharacter_CalculateMana();
	ABEYANCE_API UFunction* Z_Construct_UFunction_ABaseCharacter_CalculateUnderstanding();
	ABEYANCE_API UFunction* Z_Construct_UFunction_ABaseCharacter_MoveForward();
	ABEYANCE_API UFunction* Z_Construct_UFunction_ABaseCharacter_MoveRight();
	ABEYANCE_API UFunction* Z_Construct_UFunction_ABaseCharacter_StartJump();
	ABEYANCE_API UFunction* Z_Construct_UFunction_ABaseCharacter_StopJump();
// End Cross Module References
	void ABaseCharacter::StaticRegisterNativesABaseCharacter()
	{
		UClass* Class = ABaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateHealth", (Native)&ABaseCharacter::execCalculateHealth },
			{ "CalculateMana", (Native)&ABaseCharacter::execCalculateMana },
			{ "CalculateUnderstanding", (Native)&ABaseCharacter::execCalculateUnderstanding },
			{ "MoveForward", (Native)&ABaseCharacter::execMoveForward },
			{ "MoveRight", (Native)&ABaseCharacter::execMoveRight },
			{ "StartJump", (Native)&ABaseCharacter::execStartJump },
			{ "StopJump", (Native)&ABaseCharacter::execStopJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABaseCharacter_CalculateHealth()
	{
		struct BaseCharacter_eventCalculateHealth_Parms
		{
			float Delta;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delta = { UE4CodeGen_Private::EPropertyClass::Float, "Delta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseCharacter_eventCalculateHealth_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Delta,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Calculate Stats" },
				{ "ModuleRelativePath", "BaseCharacter.h" },
				{ "ToolTip", "Calculate health function" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "CalculateHealth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(BaseCharacter_eventCalculateHealth_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseCharacter_CalculateMana()
	{
		struct BaseCharacter_eventCalculateMana_Parms
		{
			float Delta;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delta = { UE4CodeGen_Private::EPropertyClass::Float, "Delta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseCharacter_eventCalculateMana_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Delta,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Calculate Stats" },
				{ "ModuleRelativePath", "BaseCharacter.h" },
				{ "ToolTip", "Calculate health function" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "CalculateMana", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(BaseCharacter_eventCalculateMana_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseCharacter_CalculateUnderstanding()
	{
		struct BaseCharacter_eventCalculateUnderstanding_Parms
		{
			float Delta;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delta = { UE4CodeGen_Private::EPropertyClass::Float, "Delta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseCharacter_eventCalculateUnderstanding_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Delta,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Base Character" },
				{ "ModuleRelativePath", "BaseCharacter.h" },
				{ "ToolTip", "Calculate health function" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "CalculateUnderstanding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(BaseCharacter_eventCalculateUnderstanding_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseCharacter_MoveForward()
	{
		struct BaseCharacter_eventMoveForward_Parms
		{
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseCharacter_eventMoveForward_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BaseCharacter.h" },
				{ "ToolTip", "Handles input for moving forward and backward." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "MoveForward", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(BaseCharacter_eventMoveForward_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseCharacter_MoveRight()
	{
		struct BaseCharacter_eventMoveRight_Parms
		{
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BaseCharacter_eventMoveRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BaseCharacter.h" },
				{ "ToolTip", "Handles input for moving right and left." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "MoveRight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(BaseCharacter_eventMoveRight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseCharacter_StartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BaseCharacter.h" },
				{ "ToolTip", "Sets jump flag when key is pressed." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "StartJump", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABaseCharacter_StopJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "BaseCharacter.h" },
				{ "ToolTip", "Clears jump flag when key is released." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, "StopJump", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseCharacter_NoRegister()
	{
		return ABaseCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ABaseCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_Abeyance,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABaseCharacter_CalculateHealth, "CalculateHealth" }, // 3629810924
				{ &Z_Construct_UFunction_ABaseCharacter_CalculateMana, "CalculateMana" }, // 3540070094
				{ &Z_Construct_UFunction_ABaseCharacter_CalculateUnderstanding, "CalculateUnderstanding" }, // 1839166862
				{ &Z_Construct_UFunction_ABaseCharacter_MoveForward, "MoveForward" }, // 2454903078
				{ &Z_Construct_UFunction_ABaseCharacter_MoveRight, "MoveRight" }, // 2850488394
				{ &Z_Construct_UFunction_ABaseCharacter_StartJump, "StartJump" }, // 1603016209
				{ &Z_Construct_UFunction_ABaseCharacter_StopJump, "StopJump" }, // 2543244309
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "BaseCharacter.h" },
				{ "ModuleRelativePath", "BaseCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowPercentage_MetaData[] = {
				{ "Category", "Stats" },
				{ "ModuleRelativePath", "BaseCharacter.h" },
				{ "ToolTip", "The chance that the character will be ignored." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadowPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "ShadowPercentage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, ShadowPercentage), METADATA_PARAMS(NewProp_ShadowPercentage_MetaData, ARRAY_COUNT(NewProp_ShadowPercentage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Influence_MetaData[] = {
				{ "Category", "Stats" },
				{ "ModuleRelativePath", "BaseCharacter.h" },
				{ "ToolTip", "Character's ability to coherse enemies to their side." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Influence = { UE4CodeGen_Private::EPropertyClass::Float, "Influence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, Influence), METADATA_PARAMS(NewProp_Influence_MetaData, ARRAY_COUNT(NewProp_Influence_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaRegenRate_MetaData[] = {
				{ "Category", "Rates" },
				{ "ModuleRelativePath", "BaseCharacter.h" },
				{ "ToolTip", "How fast mana regenerates" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ManaRegenRate = { UE4CodeGen_Private::EPropertyClass::Float, "ManaRegenRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, ManaRegenRate), METADATA_PARAMS(NewProp_ManaRegenRate_MetaData, ARRAY_COUNT(NewProp_ManaRegenRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthRegenRate_MetaData[] = {
				{ "Category", "Rates" },
				{ "ModuleRelativePath", "BaseCharacter.h" },
				{ "ToolTip", "How fast health regenerates" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthRegenRate = { UE4CodeGen_Private::EPropertyClass::Float, "HealthRegenRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, HealthRegenRate), METADATA_PARAMS(NewProp_HealthRegenRate_MetaData, ARRAY_COUNT(NewProp_HealthRegenRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Understanding_MetaData[] = {
				{ "Category", "Stats" },
				{ "ModuleRelativePath", "BaseCharacter.h" },
				{ "ToolTip", "Character XP and Ability multiplier." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Understanding = { UE4CodeGen_Private::EPropertyClass::Float, "Understanding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, Understanding), METADATA_PARAMS(NewProp_Understanding_MetaData, ARRAY_COUNT(NewProp_Understanding_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lucidity_MetaData[] = {
				{ "Category", "Stats" },
				{ "ModuleRelativePath", "BaseCharacter.h" },
				{ "ToolTip", "Character Mana." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Lucidity = { UE4CodeGen_Private::EPropertyClass::Float, "Lucidity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, Lucidity), METADATA_PARAMS(NewProp_Lucidity_MetaData, ARRAY_COUNT(NewProp_Lucidity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDead_MetaData[] = {
				{ "Category", "Base Character" },
				{ "ModuleRelativePath", "BaseCharacter.h" },
				{ "ToolTip", "Is the character dead?" },
			};
#endif
			auto NewProp_IsDead_SetBit = [](void* Obj){ ((ABaseCharacter*)Obj)->IsDead = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDead = { UE4CodeGen_Private::EPropertyClass::Bool, "IsDead", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABaseCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsDead_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsDead_MetaData, ARRAY_COUNT(NewProp_IsDead_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
				{ "Category", "Stats" },
				{ "ModuleRelativePath", "BaseCharacter.h" },
				{ "ToolTip", "Character Health." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABaseCharacter, Health), METADATA_PARAMS(NewProp_Health_MetaData, ARRAY_COUNT(NewProp_Health_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowPercentage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Influence,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ManaRegenRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthRegenRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Understanding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Lucidity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsDead,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Health,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABaseCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABaseCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseCharacter, 4168497656);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseCharacter(Z_Construct_UClass_ABaseCharacter, &ABaseCharacter::StaticClass, TEXT("/Script/Abeyance"), TEXT("ABaseCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
