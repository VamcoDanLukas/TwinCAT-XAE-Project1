///////////////////////////////////////////////////////////////////////////////
// MyCppProjectServices.h

#pragma once

#include "TcServices.h"

const ULONG DrvID_MyCppProject = 0x3F000000;
#define SRVNAME_MYCPPPROJECT "MyCppProject"

///<AutoGeneratedContent id="ClassIDs">
const CTCID CID_MyCppProjectCCyclicIO = {0x481d65af,0x7ae1,0x4a43,{0xb8,0x57,0x7a,0xf9,0x11,0xc7,0xad,0x8e}};
///</AutoGeneratedContent>

///<AutoGeneratedContent id="ParameterIDs">
const PTCID PID_CyclicIOParameter = 0x00000001;
///</AutoGeneratedContent>

///<AutoGeneratedContent id="DataTypes">
typedef struct _CyclicIOParameter
{
	ULONG data1;
	ULONG data2;
	double data3;
} CyclicIOParameter, *PCyclicIOParameter;

#pragma pack(push,1)
typedef struct _CyclicIOInputs
{
	ULONG Value;
	ULONG Status;
	ULONG Data;
	bool MyPhyInput1;
	bool MyPhyInput2;
} CyclicIOInputs, *PCyclicIOInputs;
#pragma pack(pop)

#pragma pack(push,1)
typedef struct _CyclicIOOutputs
{
	ULONG Value;
	ULONG Control;
	ULONG Data;
	bool MyPhyOutput1;
	bool MyPhyOutput2;
	bool MyPhyOutput3;
} CyclicIOOutputs, *PCyclicIOOutputs;
#pragma pack(pop)

typedef struct _CyclicIOMyDataAreaForVariables
{
	SHORT MyCounter;
} CyclicIOMyDataAreaForVariables, *PCyclicIOMyDataAreaForVariables;

///</AutoGeneratedContent>



///<AutoGeneratedContent id="DataAreaIDs">
#define ADI_CyclicIOInputs 0
#define ADI_CyclicIOOutputs 1
#define ADI_CyclicIOMyDataAreaForVariables 3
///</AutoGeneratedContent>

///<AutoGeneratedContent id="InterfaceIDs">
///</AutoGeneratedContent>

///<AutoGeneratedContent id="EventClasses">
///</AutoGeneratedContent>
