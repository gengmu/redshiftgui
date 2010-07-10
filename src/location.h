/**\file	location.h
 * \date	Thursday, July 08, 2010
 * \brief	Latitude/Longitude location functions
 */

#ifndef __LOCATION_H__
#define __LOCATION_H__

typedef enum{
	LOCMETHOD_GEOCODE_HOSTIP,
	LOCMETHOD_ADDRESS_LOOKUP,
	LOCMETHOD_MANUAL
} loc_method_t;

/**\brief Geocode from www.hostip.info*/
int location_geocode_hostip(float *lat,float *lon,char *city,int bsize);

/**\brief Look up location from address (from Google maps api)*/
int location_address_lookup(char *address,float *lat,float *lon,
		char *city,int bsize);

/**\brief Initialize location lookup*/
int location_init(void);

/**\brief Shut down location lookup*/
int location_end(void);

#endif//__LOCATION_H__
