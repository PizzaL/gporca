//---------------------------------------------------------------------------
//	Greenplum Database
//	Copyright (C) 2015 Pivotal Software, Inc.
//
//	@filename:
//		CEnfdProp.cpp
//
//	@doc:
//		Implementation of enforced property
//---------------------------------------------------------------------------

#include "gpos/base.h"

#include "gpopt/base/CEnfdProp.h"

#ifdef GPOS_DEBUG
#include "gpopt/base/COptCtxt.h"
#include "gpos/error/CAutoTrace.h"
#endif // GPOS_DEBUG

namespace gpopt {

	IOstream &operator << (IOstream &os, CEnfdProp &efdprop)
	{
		return efdprop.OsPrint(os);
	}

#ifdef GPOS_DEBUG
	void
	CEnfdProp::DbgPrint() const
	{
		IMemoryPool *pmp = COptCtxt::PoctxtFromTLS()->Pmp();
		CAutoTrace at(pmp);
		(void) this->OsPrint(at.Os());
	}
#endif // GPOS_DEBUG

}

// EOF
