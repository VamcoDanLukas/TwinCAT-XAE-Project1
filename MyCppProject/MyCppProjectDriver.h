///////////////////////////////////////////////////////////////////////////////
// MyCppProjectDriver.h

#ifndef __MYCPPPROJECTDRIVER_H__
#define __MYCPPPROJECTDRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define MYCPPPROJECTDRV_NAME        "MYCPPPROJECT"
#define MYCPPPROJECTDRV_Major       1
#define MYCPPPROJECTDRV_Minor       0

#define DEVICE_CLASS CMyCppProjectDriver

#include "ObjDriver.h"

class CMyCppProjectDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl MYCPPPROJECTDRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(MYCPPPROJECTDRV)
	VxD_Service( MYCPPPROJECTDRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __MYCPPPROJECTDRIVER_H__