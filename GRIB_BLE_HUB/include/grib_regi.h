#ifndef __GRIB_REGI_H__
#define __GRIB_REGI_H__

/* ********** ********** ********** ********** ********** ********** ********** ********** ********** **********
shbaek: Include File
********** ********** ********** ********** ********** ********** ********** ********** ********** ********** */

#include "grib_define.h"
#include "grib_onem2m.h"

#include "grib_db.h"
#include "grib_ble.h"
#include "grib_util.h"
#include "grib_auth.h"

#ifdef FEATURE_CAS
#include "grib_cas.h"
#endif
/* ********** ********** ********** ********** ********** ********** ********** ********** ********** ********** */
//shbaek: Define
/* ********** ********** ********** ********** ********** ********** ********** ********** ********** ********** */

/* ********** ********** ********** ********** ********** ********** ********** ********** ********** **********
shbaek: Function Prototype
********** ********** ********** ********** ********** ********** ********** ********** ********** ********** */
int Grib_DeviceRegi(char* deviceAddr, int optAuth);
int Grib_DeviceDeRegi(char* deviceID, int delOneM2M);

#ifdef FEATURE_CAS
int Grib_HubRegi(char* pAuthKey);
#else
int Grib_HubRegi(void);
#endif

#endif
