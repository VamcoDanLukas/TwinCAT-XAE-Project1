///////////////////////////////////////////////////////////////////////////////
// MyCppProjectCtrl.h

#ifndef __MYCPPPROJECTCTRL_H__
#define __MYCPPPROJECTCTRL_H__

#include <atlbase.h>
#include <atlcom.h>


#include "resource.h"       // main symbols
#include "MyCppProjectW32.h"
#include "TcBase.h"
#include "MyCppProjectClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CMyCppProjectCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CMyCppProjectCtrl, &CLSID_MyCppProjectCtrl>
	, public IMyCppProjectCtrl
	, public ITcOCFCtrlImpl<CMyCppProjectCtrl, CMyCppProjectClassFactory>
{
public:
	CMyCppProjectCtrl();
	virtual ~CMyCppProjectCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_MYCPPPROJECTCTRL)
DECLARE_NOT_AGGREGATABLE(CMyCppProjectCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CMyCppProjectCtrl)
	COM_INTERFACE_ENTRY(IMyCppProjectCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __MYCPPPROJECTCTRL_H__
