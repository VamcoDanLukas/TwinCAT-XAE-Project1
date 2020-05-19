///////////////////////////////////////////////////////////////////////////////
// MyCppProjectDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "MyCppProjectDriver.h"
#include "MyCppProjectClassFactory.h"

DECLARE_GENERIC_DEVICE(MYCPPPROJECTDRV)

IOSTATUS CMyCppProjectDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CMyCppProjectClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CMyCppProjectDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CMyCppProjectDriver::MYCPPPROJECTDRV_GetVersion( )
{
	return( (MYCPPPROJECTDRV_Major << 8) | MYCPPPROJECTDRV_Minor );
}

