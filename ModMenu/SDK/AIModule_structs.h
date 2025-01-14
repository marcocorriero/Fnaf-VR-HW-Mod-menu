﻿#pragma once

/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AIModule.EPathFollowingResult
	 */
	enum class AIModule_EPathFollowingResult : uint8_t
	{
		EPathFollowingResult__Success                  = 0,
		EPathFollowingResult__Blocked                  = 1,
		EPathFollowingResult__OffPath                  = 2,
		EPathFollowingResult__Aborted                  = 3,
		EPathFollowingResult__Skipped_DEPRECATED       = 4,
		EPathFollowingResult__Invalid                  = 5,
		EPathFollowingResult__EPathFollowingResult_MAX = 6
	};

	/**
	 * Enum AIModule.EEnvQueryStatus
	 */
	enum class AIModule_EEnvQueryStatus : uint8_t
	{
		EEnvQueryStatus__Processing          = 0,
		EEnvQueryStatus__Success             = 1,
		EEnvQueryStatus__Failed              = 2,
		EEnvQueryStatus__Aborted             = 3,
		EEnvQueryStatus__OwnerLost           = 4,
		EEnvQueryStatus__MissingParam        = 5,
		EEnvQueryStatus__EEnvQueryStatus_MAX = 6
	};

	/**
	 * Enum AIModule.EAISenseNotifyType
	 */
	enum class AIModule_EAISenseNotifyType : uint8_t
	{
		EAISenseNotifyType__OnEveryPerception      = 0,
		EAISenseNotifyType__OnPerceptionChange     = 1,
		EAISenseNotifyType__EAISenseNotifyType_MAX = 2
	};

	/**
	 * Enum AIModule.EAITaskPriority
	 */
	enum class AIModule_EAITaskPriority : uint8_t
	{
		EAITaskPriority__Lowest              = 0,
		EAITaskPriority__Low                 = 1,
		EAITaskPriority__AutonomousAI        = 2,
		EAITaskPriority__High                = 3,
		EAITaskPriority__Ultimate            = 4,
		EAITaskPriority__EAITaskPriority_MAX = 5
	};

	/**
	 * Enum AIModule.EGenericAICheck
	 */
	enum class AIModule_EGenericAICheck : uint8_t
	{
		EGenericAICheck__Less           = 0,
		EGenericAICheck__LessOrEqual    = 1,
		EGenericAICheck__Equal          = 2,
		EGenericAICheck__NotEqual       = 3,
		EGenericAICheck__GreaterOrEqual = 4,
		EGenericAICheck__Greater        = 5,
		EGenericAICheck__IsTrue         = 6,
		EGenericAICheck__MAX            = 7
	};

	/**
	 * Enum AIModule.EAILockSource
	 */
	enum class AIModule_EAILockSource : uint8_t
	{
		EAILockSource__Animation = 0,
		EAILockSource__Logic     = 1,
		EAILockSource__Script    = 2,
		EAILockSource__Gameplay  = 3,
		EAILockSource__MAX       = 4
	};

	/**
	 * Enum AIModule.EAIRequestPriority
	 */
	enum class AIModule_EAIRequestPriority : uint8_t
	{
		EAIRequestPriority__SoftScript = 0,
		EAIRequestPriority__Logic      = 1,
		EAIRequestPriority__HardScript = 2,
		EAIRequestPriority__Reaction   = 3,
		EAIRequestPriority__Ultimate   = 4,
		EAIRequestPriority__MAX        = 5
	};

	/**
	 * Enum AIModule.EPawnActionEventType
	 */
	enum class AIModule_EPawnActionEventType : uint8_t
	{
		EPawnActionEventType__Invalid                  = 0,
		EPawnActionEventType__FailedToStart            = 1,
		EPawnActionEventType__InstantAbort             = 2,
		EPawnActionEventType__FinishedAborting         = 3,
		EPawnActionEventType__FinishedExecution        = 4,
		EPawnActionEventType__Push                     = 5,
		EPawnActionEventType__EPawnActionEventType_MAX = 6
	};

	/**
	 * Enum AIModule.EPawnActionResult
	 */
	enum class AIModule_EPawnActionResult : uint8_t
	{
		EPawnActionResult__NotStarted            = 0,
		EPawnActionResult__InProgress            = 1,
		EPawnActionResult__Success               = 2,
		EPawnActionResult__Failed                = 3,
		EPawnActionResult__Aborted               = 4,
		EPawnActionResult__EPawnActionResult_MAX = 5
	};

	/**
	 * Enum AIModule.EPawnActionAbortState
	 */
	enum class AIModule_EPawnActionAbortState : uint8_t
	{
		EPawnActionAbortState__NeverStarted          = 0,
		EPawnActionAbortState__NotBeingAborted       = 1,
		EPawnActionAbortState__MarkPendingAbort      = 2,
		EPawnActionAbortState__LatentAbortInProgress = 3,
		EPawnActionAbortState__AbortDone             = 4,
		EPawnActionAbortState__MAX                   = 5
	};

	/**
	 * Enum AIModule.FAIDistanceType
	 */
	enum class AIModule_EFAIDistanceType : uint8_t
	{
		FAIDistanceType__Distance3D = 0,
		FAIDistanceType__Distance2D = 1,
		FAIDistanceType__DistanceZ  = 2,
		FAIDistanceType__MAX        = 3
	};

	/**
	 * Enum AIModule.EAIOptionFlag
	 */
	enum class AIModule_EAIOptionFlag : uint8_t
	{
		EAIOptionFlag__Default = 0,
		EAIOptionFlag__Enable  = 1,
		EAIOptionFlag__Disable = 2,
		EAIOptionFlag__MAX     = 3
	};

	/**
	 * Enum AIModule.EBTFlowAbortMode
	 */
	enum class AIModule_EBTFlowAbortMode : uint8_t
	{
		EBTFlowAbortMode__None                 = 0,
		EBTFlowAbortMode__LowerPriority        = 1,
		EBTFlowAbortMode__Self                 = 2,
		EBTFlowAbortMode__Both                 = 3,
		EBTFlowAbortMode__EBTFlowAbortMode_MAX = 4
	};

	/**
	 * Enum AIModule.EBTNodeResult
	 */
	enum class AIModule_EBTNodeResult : uint8_t
	{
		EBTNodeResult__Succeeded         = 0,
		EBTNodeResult__Failed            = 1,
		EBTNodeResult__Aborted           = 2,
		EBTNodeResult__InProgress        = 3,
		EBTNodeResult__EBTNodeResult_MAX = 4
	};

	/**
	 * Enum AIModule.ETextKeyOperation
	 */
	enum class AIModule_ETextKeyOperation : uint8_t
	{
		ETextKeyOperation__Equal                 = 0,
		ETextKeyOperation__NotEqual              = 1,
		ETextKeyOperation__Contain               = 2,
		ETextKeyOperation__NotContain            = 3,
		ETextKeyOperation__ETextKeyOperation_MAX = 4
	};

	/**
	 * Enum AIModule.EArithmeticKeyOperation
	 */
	enum class AIModule_EArithmeticKeyOperation : uint8_t
	{
		EArithmeticKeyOperation__Equal                       = 0,
		EArithmeticKeyOperation__NotEqual                    = 1,
		EArithmeticKeyOperation__Less                        = 2,
		EArithmeticKeyOperation__LessOrEqual                 = 3,
		EArithmeticKeyOperation__Greater                     = 4,
		EArithmeticKeyOperation__GreaterOrEqual              = 5,
		EArithmeticKeyOperation__EArithmeticKeyOperation_MAX = 6
	};

	/**
	 * Enum AIModule.EBasicKeyOperation
	 */
	enum class AIModule_EBasicKeyOperation : uint8_t
	{
		EBasicKeyOperation__Set                    = 0,
		EBasicKeyOperation__NotSet                 = 1,
		EBasicKeyOperation__EBasicKeyOperation_MAX = 2
	};

	/**
	 * Enum AIModule.EBTParallelMode
	 */
	enum class AIModule_EBTParallelMode : uint8_t
	{
		EBTParallelMode__AbortBackground     = 0,
		EBTParallelMode__WaitForBackground   = 1,
		EBTParallelMode__EBTParallelMode_MAX = 2
	};

	/**
	 * Enum AIModule.EBTDecoratorLogic
	 */
	enum class AIModule_EBTDecoratorLogic : uint8_t
	{
		EBTDecoratorLogic__Invalid               = 0,
		EBTDecoratorLogic__Test                  = 1,
		EBTDecoratorLogic__And                   = 2,
		EBTDecoratorLogic__Or                    = 3,
		EBTDecoratorLogic__Not                   = 4,
		EBTDecoratorLogic__EBTDecoratorLogic_MAX = 5
	};

	/**
	 * Enum AIModule.EBTChildIndex
	 */
	enum class AIModule_EBTChildIndex : uint8_t
	{
		EBTChildIndex__FirstNode         = 0,
		EBTChildIndex__TaskNode          = 1,
		EBTChildIndex__EBTChildIndex_MAX = 2
	};

	/**
	 * Enum AIModule.EBTBlackboardRestart
	 */
	enum class AIModule_EBTBlackboardRestart : uint8_t
	{
		EBTBlackboardRestart__ValueChange              = 0,
		EBTBlackboardRestart__ResultChange             = 1,
		EBTBlackboardRestart__EBTBlackboardRestart_MAX = 2
	};

	/**
	 * Enum AIModule.EBlackBoardEntryComparison
	 */
	enum class AIModule_EBlackBoardEntryComparison : uint8_t
	{
		EBlackBoardEntryComparison__Equal                          = 0,
		EBlackBoardEntryComparison__NotEqual                       = 1,
		EBlackBoardEntryComparison__EBlackBoardEntryComparison_MAX = 2
	};

	/**
	 * Enum AIModule.EPathExistanceQueryType
	 */
	enum class AIModule_EPathExistanceQueryType : uint8_t
	{
		EPathExistanceQueryType__NavmeshRaycast2D            = 0,
		EPathExistanceQueryType__HierarchicalQuery           = 1,
		EPathExistanceQueryType__RegularPathFinding          = 2,
		EPathExistanceQueryType__EPathExistanceQueryType_MAX = 3
	};

	/**
	 * Enum AIModule.EPointOnCircleSpacingMethod
	 */
	enum class AIModule_EPointOnCircleSpacingMethod : uint8_t
	{
		EPointOnCircleSpacingMethod__BySpaceBetween                  = 0,
		EPointOnCircleSpacingMethod__ByNumberOfPoints                = 1,
		EPointOnCircleSpacingMethod__EPointOnCircleSpacingMethod_MAX = 2
	};

	/**
	 * Enum AIModule.EEQSNormalizationType
	 */
	enum class AIModule_EEQSNormalizationType : uint8_t
	{
		EEQSNormalizationType__Absolute                  = 0,
		EEQSNormalizationType__RelativeToScores          = 1,
		EEQSNormalizationType__EEQSNormalizationType_MAX = 2
	};

	/**
	 * Enum AIModule.EEnvTestDistance
	 */
	enum class AIModule_EEnvTestDistance : uint8_t
	{
		EEnvTestDistance__Distance3D           = 0,
		EEnvTestDistance__Distance2D           = 1,
		EEnvTestDistance__DistanceZ            = 2,
		EEnvTestDistance__DistanceAbsoluteZ    = 3,
		EEnvTestDistance__EEnvTestDistance_MAX = 4
	};

	/**
	 * Enum AIModule.EEnvTestDot
	 */
	enum class AIModule_EEnvTestDot : uint8_t
	{
		EEnvTestDot__Dot3D           = 0,
		EEnvTestDot__Dot2D           = 1,
		EEnvTestDot__EEnvTestDot_MAX = 2
	};

	/**
	 * Enum AIModule.EEnvTestPathfinding
	 */
	enum class AIModule_EEnvTestPathfinding : uint8_t
	{
		EEnvTestPathfinding__PathExist               = 0,
		EEnvTestPathfinding__PathCost                = 1,
		EEnvTestPathfinding__PathLength              = 2,
		EEnvTestPathfinding__EEnvTestPathfinding_MAX = 3
	};

	/**
	 * Enum AIModule.EEnvQueryTestClamping
	 */
	enum class AIModule_EEnvQueryTestClamping : uint8_t
	{
		EEnvQueryTestClamping__None                      = 0,
		EEnvQueryTestClamping__SpecifiedValue            = 1,
		EEnvQueryTestClamping__FilterThreshold           = 2,
		EEnvQueryTestClamping__EEnvQueryTestClamping_MAX = 3
	};

	/**
	 * Enum AIModule.EEnvDirection
	 */
	enum class AIModule_EEnvDirection : uint8_t
	{
		EEnvDirection__TwoPoints         = 0,
		EEnvDirection__Rotation          = 1,
		EEnvDirection__EEnvDirection_MAX = 2
	};

	/**
	 * Enum AIModule.EEnvOverlapShape
	 */
	enum class AIModule_EEnvOverlapShape : uint8_t
	{
		EEnvOverlapShape__Box                  = 0,
		EEnvOverlapShape__Sphere               = 1,
		EEnvOverlapShape__Capsule              = 2,
		EEnvOverlapShape__EEnvOverlapShape_MAX = 3
	};

	/**
	 * Enum AIModule.EEnvTraceShape
	 */
	enum class AIModule_EEnvTraceShape : uint8_t
	{
		EEnvTraceShape__Line               = 0,
		EEnvTraceShape__Box                = 1,
		EEnvTraceShape__Sphere             = 2,
		EEnvTraceShape__Capsule            = 3,
		EEnvTraceShape__EEnvTraceShape_MAX = 4
	};

	/**
	 * Enum AIModule.EEnvQueryTrace
	 */
	enum class AIModule_EEnvQueryTrace : uint8_t
	{
		EEnvQueryTrace__None                 = 0,
		EEnvQueryTrace__Navigation           = 1,
		EEnvQueryTrace__Geometry             = 2,
		EEnvQueryTrace__NavigationOverLedges = 3,
		EEnvQueryTrace__EEnvQueryTrace_MAX   = 4
	};

	/**
	 * Enum AIModule.EAIParamType
	 */
	enum class AIModule_EAIParamType : uint8_t
	{
		EAIParamType__Float = 0,
		EAIParamType__Int   = 1,
		EAIParamType__Bool  = 2,
		EAIParamType__MAX   = 3
	};

	/**
	 * Enum AIModule.EEnvQueryParam
	 */
	enum class AIModule_EEnvQueryParam : uint8_t
	{
		EEnvQueryParam__Float              = 0,
		EEnvQueryParam__Int                = 1,
		EEnvQueryParam__Bool               = 2,
		EEnvQueryParam__EEnvQueryParam_MAX = 3
	};

	/**
	 * Enum AIModule.EEnvQueryRunMode
	 */
	enum class AIModule_EEnvQueryRunMode : uint8_t
	{
		EEnvQueryRunMode__SingleResult         = 0,
		EEnvQueryRunMode__RandomBest5Pct       = 1,
		EEnvQueryRunMode__RandomBest25Pct      = 2,
		EEnvQueryRunMode__AllMatching          = 3,
		EEnvQueryRunMode__EEnvQueryRunMode_MAX = 4
	};

	/**
	 * Enum AIModule.EEnvTestScoreOperator
	 */
	enum class AIModule_EEnvTestScoreOperator : uint8_t
	{
		EEnvTestScoreOperator__AverageScore              = 0,
		EEnvTestScoreOperator__MinScore                  = 1,
		EEnvTestScoreOperator__MaxScore                  = 2,
		EEnvTestScoreOperator__EEnvTestScoreOperator_MAX = 3
	};

	/**
	 * Enum AIModule.EEnvTestFilterOperator
	 */
	enum class AIModule_EEnvTestFilterOperator : uint8_t
	{
		EEnvTestFilterOperator__AllPass                    = 0,
		EEnvTestFilterOperator__AnyPass                    = 1,
		EEnvTestFilterOperator__EEnvTestFilterOperator_MAX = 2
	};

	/**
	 * Enum AIModule.EEnvTestCost
	 */
	enum class AIModule_EEnvTestCost : uint8_t
	{
		EEnvTestCost__Low              = 0,
		EEnvTestCost__Medium           = 1,
		EEnvTestCost__High             = 2,
		EEnvTestCost__EEnvTestCost_MAX = 3
	};

	/**
	 * Enum AIModule.EEnvTestWeight
	 */
	enum class AIModule_EEnvTestWeight : uint8_t
	{
		EEnvTestWeight__None               = 0,
		EEnvTestWeight__Square             = 1,
		EEnvTestWeight__Inverse            = 2,
		EEnvTestWeight__Unused             = 3,
		EEnvTestWeight__Constant           = 4,
		EEnvTestWeight__Skip               = 5,
		EEnvTestWeight__EEnvTestWeight_MAX = 6
	};

	/**
	 * Enum AIModule.EEnvTestScoreEquation
	 */
	enum class AIModule_EEnvTestScoreEquation : uint8_t
	{
		EEnvTestScoreEquation__Linear                    = 0,
		EEnvTestScoreEquation__Square                    = 1,
		EEnvTestScoreEquation__InverseLinear             = 2,
		EEnvTestScoreEquation__SquareRoot                = 3,
		EEnvTestScoreEquation__Constant                  = 4,
		EEnvTestScoreEquation__EEnvTestScoreEquation_MAX = 5
	};

	/**
	 * Enum AIModule.EEnvTestFilterType
	 */
	enum class AIModule_EEnvTestFilterType : uint8_t
	{
		EEnvTestFilterType__Minimum                = 0,
		EEnvTestFilterType__Maximum                = 1,
		EEnvTestFilterType__Range                  = 2,
		EEnvTestFilterType__Match                  = 3,
		EEnvTestFilterType__EEnvTestFilterType_MAX = 4
	};

	/**
	 * Enum AIModule.EEnvTestPurpose
	 */
	enum class AIModule_EEnvTestPurpose : uint8_t
	{
		EEnvTestPurpose__Filter              = 0,
		EEnvTestPurpose__Score               = 1,
		EEnvTestPurpose__FilterAndScore      = 2,
		EEnvTestPurpose__EEnvTestPurpose_MAX = 3
	};

	/**
	 * Enum AIModule.EEnvQueryHightlightMode
	 */
	enum class AIModule_EEnvQueryHightlightMode : uint8_t
	{
		EEnvQueryHightlightMode__All                         = 0,
		EEnvQueryHightlightMode__Best5Pct                    = 1,
		EEnvQueryHightlightMode__Best25Pct                   = 2,
		EEnvQueryHightlightMode__EEnvQueryHightlightMode_MAX = 3
	};

	/**
	 * Enum AIModule.ETeamAttitude
	 */
	enum class AIModule_ETeamAttitude : uint8_t
	{
		ETeamAttitude__Friendly          = 0,
		ETeamAttitude__Neutral           = 1,
		ETeamAttitude__Hostile           = 2,
		ETeamAttitude__ETeamAttitude_MAX = 3
	};

	/**
	 * Enum AIModule.EPathFollowingRequestResult
	 */
	enum class AIModule_EPathFollowingRequestResult : uint8_t
	{
		EPathFollowingRequestResult__Failed                          = 0,
		EPathFollowingRequestResult__AlreadyAtGoal                   = 1,
		EPathFollowingRequestResult__RequestSuccessful               = 2,
		EPathFollowingRequestResult__EPathFollowingRequestResult_MAX = 3
	};

	/**
	 * Enum AIModule.EPathFollowingAction
	 */
	enum class AIModule_EPathFollowingAction : uint8_t
	{
		EPathFollowingAction__Error                    = 0,
		EPathFollowingAction__NoMove                   = 1,
		EPathFollowingAction__DirectMove               = 2,
		EPathFollowingAction__PartialPath              = 3,
		EPathFollowingAction__PathToGoal               = 4,
		EPathFollowingAction__EPathFollowingAction_MAX = 5
	};

	/**
	 * Enum AIModule.EPathFollowingStatus
	 */
	enum class AIModule_EPathFollowingStatus : uint8_t
	{
		EPathFollowingStatus__Idle                     = 0,
		EPathFollowingStatus__Waiting                  = 1,
		EPathFollowingStatus__Paused                   = 2,
		EPathFollowingStatus__Moving                   = 3,
		EPathFollowingStatus__EPathFollowingStatus_MAX = 4
	};

	/**
	 * Enum AIModule.EPawnActionFailHandling
	 */
	enum class AIModule_EPawnActionFailHandling : uint8_t
	{
		EPawnActionFailHandling__RequireSuccess              = 0,
		EPawnActionFailHandling__IgnoreFailure               = 1,
		EPawnActionFailHandling__EPawnActionFailHandling_MAX = 2
	};

	/**
	 * Enum AIModule.EPawnSubActionTriggeringPolicy
	 */
	enum class AIModule_EPawnSubActionTriggeringPolicy : uint8_t
	{
		EPawnSubActionTriggeringPolicy__CopyBeforeTriggering               = 0,
		EPawnSubActionTriggeringPolicy__ReuseInstances                     = 1,
		EPawnSubActionTriggeringPolicy__EPawnSubActionTriggeringPolicy_MAX = 2
	};

	/**
	 * Enum AIModule.EPawnActionMoveMode
	 */
	enum class AIModule_EPawnActionMoveMode : uint8_t
	{
		EPawnActionMoveMode__UsePathfinding          = 0,
		EPawnActionMoveMode__StraightLine            = 1,
		EPawnActionMoveMode__EPawnActionMoveMode_MAX = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AIModule.AIRequestID
	 * Size -> 0x0004
	 */
	struct FAIRequestID
	{
	public:
		uint32_t                                                   RequestID;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct AIModule.AIStimulus
	 * Size -> 0x003C
	 */
	struct FAIStimulus
	{
	public:
		float                                                      Age;                                                     // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ExpirationAge;                                           // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Strength;                                                // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             StimulusLocation;                                        // 0x000C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ReceiverLocation;                                        // 0x0018(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tag;                                                     // 0x0024(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WS8J[0xC];                                   // 0x002C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              UnknownData_X79D : 1;                                    // 0x0038(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bSuccessfullySensed : 1;                                 // 0x0038(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7KFK[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AIModule.ActorPerceptionBlueprintInfo
	 * Size -> 0x0020
	 */
	struct FActorPerceptionBlueprintInfo
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAIStimulus>                                 LastSensedStimuli;                                       // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bIsHostile : 1;                                          // 0x0018(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1JKA[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AIModule.AIDamageEvent
	 * Size -> 0x0030
	 */
	struct FAIDamageEvent
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DMFO[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Instigator;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AIModule.AINoiseEvent
	 * Size -> 0x0030
	 */
	struct FAINoiseEvent
	{
	public:
		unsigned char                                              UnknownData_MF54[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NoiseLocation;                                           // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Loudness;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRange;                                                // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Instigator;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tag;                                                     // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_97N6[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AIModule.AIPredictionEvent
	 * Size -> 0x0018
	 */
	struct FAIPredictionEvent
	{
	public:
		class AActor*                                              Requestor;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              PredictedActor;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9WI5[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AIModule.AITeamStimulusEvent
	 * Size -> 0x0038
	 */
	struct FAITeamStimulusEvent
	{
	public:
		unsigned char                                              UnknownData_26P4[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Broadcaster;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              Enemy;                                                   // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AIModule.AITouchEvent
	 * Size -> 0x0020
	 */
	struct FAITouchEvent
	{
	public:
		unsigned char                                              UnknownData_WSD1[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              TouchReceiver;                                           // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              OtherActor;                                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AIModule.AISenseAffiliationFilter
	 * Size -> 0x0004
	 */
	struct FAISenseAffiliationFilter
	{
	public:
		unsigned char                                              bDetectEnemies : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDetectNeutrals : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDetectFriendlies : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IUF6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AIModule.AIMoveRequest
	 * Size -> 0x0040
	 */
	struct FAIMoveRequest
	{
	public:
		class AActor*                                              GoalActor;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J96V[0x38];                                  // 0x0008(0x0038) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AIModule.BTDecoratorLogic
	 * Size -> 0x0004
	 */
	struct FBTDecoratorLogic
	{
	public:
		AIModule_EBTDecoratorLogic                                 Operation;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZ8J[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   Number;                                                  // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AIModule.BehaviorTreeTemplateInfo
	 * Size -> 0x0018
	 */
	struct FBehaviorTreeTemplateInfo
	{
	public:
		class UBehaviorTree*                                       Asset;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBTCompositeNode*                                    Template;                                                // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IGL5[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AIModule.BlackboardEntry
	 * Size -> 0x0018
	 */
	struct FBlackboardEntry
	{
	public:
		class FName                                                EntryName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlackboardKeyType*                                  KeyType;                                                 // 0x0008(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInstanceSynced : 1;                                     // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PG6E[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AIModule.BTCompositeChild
	 * Size -> 0x0030
	 */
	struct FBTCompositeChild
	{
	public:
		class UBTCompositeNode*                                    ChildComposite;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBTTaskNode*                                         ChildTask;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UBTDecorator*>                                Decorators;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FBTDecoratorLogic>                           DecoratorOps;                                            // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AIModule.BlackboardKeySelector
	 * Size -> 0x0028
	 */
	struct FBlackboardKeySelector
	{
	public:
		TArray<class UBlackboardKeyType*>                          AllowedTypes;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		class FName                                                SelectedKeyName;                                         // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SelectedKeyType;                                         // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SelectedKeyID;                                           // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IOCD[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bNoneIsAllowedValue : 1;                                 // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UJCX[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AIModule.AIDataProviderValue
	 * Size -> 0x0020
	 */
	struct FAIDataProviderValue
	{
	public:
		unsigned char                                              UnknownData_PFB2[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UProperty*                                           CachedProperty;                                          // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAIDataProvider*                                     DataBinding;                                             // 0x0010(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DataField;                                               // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AIModule.AIDataProviderTypedValue
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FAIDataProviderTypedValue : public FAIDataProviderValue
	{
	public:
		class UClass*                                              PropertyType;                                            // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AIModule.AIDataProviderFloatValue
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FAIDataProviderFloatValue : public FAIDataProviderTypedValue
	{
	public:
		float                                                      DefaultValue;                                            // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1FE0[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AIModule.AIDynamicParam
	 * Size -> 0x0038
	 */
	struct FAIDynamicParam
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AIModule_EAIParamType                                      ParamType;                                               // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KJDI[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              BBKey;                                                   // 0x0010(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
	 * Size -> 0x0048
	 */
	struct FEQSParametrizedQueryExecutionRequest
	{
	public:
		class UEnvQuery*                                           QueryTemplate;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAIDynamicParam>                             QueryConfig;                                             // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              EQSQueryBlackboardKey;                                   // 0x0018(0x0028) Edit, NativeAccessSpecifierPublic
		AIModule_EEnvQueryRunMode                                  RunMode;                                                 // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WEHL[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bUseBBKeyForQueryTemplate : 1;                           // 0x0044(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZI53[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AIModule.EnvNamedValue
	 * Size -> 0x0010
	 */
	struct FEnvNamedValue
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AIModule_EAIParamType                                      ParamType;                                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_828H[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AIModule.CrowdAvoidanceConfig
	 * Size -> 0x001C
	 */
	struct FCrowdAvoidanceConfig
	{
	public:
		float                                                      VelocityBias;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DesiredVelocityWeight;                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentVelocityWeight;                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SideBiasWeight;                                          // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpactTimeWeight;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpactTimeRange;                                         // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomPatternIdx;                                        // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AdaptiveDivisions;                                       // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AdaptiveRings;                                           // 0x001A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AdaptiveDepth;                                           // 0x001B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
	 * Size -> 0x0020
	 */
	struct FCrowdAvoidanceSamplingPattern
	{
	public:
		TArray<float>                                              Angles;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              Radii;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AIModule.AIDataProviderBoolValue
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FAIDataProviderBoolValue : public FAIDataProviderTypedValue
	{
	public:
		bool                                                       DefaultValue;                                            // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CRR1[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AIModule.EnvTraceData
	 * Size -> 0x0030
	 */
	struct FEnvTraceData
	{
	public:
		int                                                        VersionNum;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZA6E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              NavigationFilter;                                        // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectDown;                                             // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectUp;                                               // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentX;                                                 // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentY;                                                 // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentZ;                                                 // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PostProjectionVerticalOffset;                            // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ETraceTypeQuery                                     TraceChannel;                                            // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionChannel                                   SerializedChannel;                                       // 0x0029(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AIModule_EEnvTraceShape                                    TraceShape;                                              // 0x002A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AIModule_EEnvQueryTrace                                    TraceMode;                                               // 0x002B(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTraceComplex : 1;                                       // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOnlyBlockingHits : 1;                                   // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanTraceOnNavMesh : 1;                                  // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanTraceOnGeometry : 1;                                 // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanDisableTrace : 1;                                    // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanProjectDown : 1;                                     // 0x002C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QNWB[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AIModule.AIDataProviderIntValue
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FAIDataProviderIntValue : public FAIDataProviderTypedValue
	{
	public:
		int                                                        DefaultValue;                                            // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4JQF[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AIModule.EnvDirection
	 * Size -> 0x0020
	 */
	struct FEnvDirection
	{
	public:
		class UClass*                                              LineFrom;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              LineTo;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Rotation;                                                // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AIModule_EEnvDirection                                     DirMode;                                                 // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3466[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AIModule.EnvQueryInstanceCache
	 * Size -> 0x0178
	 */
	struct FEnvQueryInstanceCache
	{
	public:
		class UEnvQuery*                                           Template;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZ7E[0x170];                                 // 0x0008(0x0170) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AIModule.EnvOverlapData
	 * Size -> 0x0020
	 */
	struct FEnvOverlapData
	{
	public:
		float                                                      ExtentX;                                                 // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentY;                                                 // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentZ;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ShapeOffset;                                             // 0x000C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ECollisionChannel                                   OverlapChannel;                                          // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AIModule_EEnvOverlapShape                                  OverlapShape;                                            // 0x0019(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2BGE[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bOnlyBlockingHits : 1;                                   // 0x001C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverlapComplex : 1;                                     // 0x001C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSkipOverlapQuerier : 1;                                 // 0x001C(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2T2I[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AIModule.PawnActionStack
	 * Size -> 0x0008
	 */
	struct FPawnActionStack
	{
	public:
		class UPawnAction*                                         TopAction;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct AIModule.PawnActionEvent
	 * Size -> 0x0018
	 */
	struct FPawnActionEvent
	{
	public:
		class UPawnAction*                                         Action;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4NXP[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AIModule.AIDataProviderStructValue
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FAIDataProviderStructValue : public FAIDataProviderValue
	{
	public:
		unsigned char                                              UnknownData_GL49[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AIModule.AISightEvent
	 * Size -> 0x0018
	 */
	struct FAISightEvent
	{
	public:
		unsigned char                                              UnknownData_QIKT[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              SeenActor;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Observer;                                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AIModule.EnvQueryRequest
	 * Size -> 0x0068
	 */
	struct FEnvQueryRequest
	{
	public:
		class UEnvQuery*                                           QueryTemplate;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UObject*                                             Owner;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWorld*                                              World;                                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZE5Y[0x50];                                  // 0x0018(0x0050) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AIModule.EnvQueryResult
	 * Size -> 0x0040
	 */
	struct FEnvQueryResult
	{
	public:
		unsigned char                                              UnknownData_I16V[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ItemType;                                                // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M7I9[0x14];                                  // 0x0018(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        OptionIndex;                                             // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        QueryID;                                                 // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FDH2[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AIModule.GenericTeamId
	 * Size -> 0x0001
	 */
	struct FGenericTeamId
	{
	public:
		unsigned char                                              TeamID;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
