/*
 * Codepage definitions for libmapidb
 *
 * Copyright (C) 2011-2015, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBMAPIDB_CODEPAGE_H )
#define _LIBMAPIDB_CODEPAGE_H

#include <libmapidb/types.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* The codepage definitions
 */
enum LIBMAPIDB_CODEPAGES
{
	LIBMAPIDB_CODEPAGE_ASCII				= 20127,

	LIBMAPIDB_CODEPAGE_ISO_8859_1			= 28591,
	LIBMAPIDB_CODEPAGE_ISO_8859_2			= 28592,
	LIBMAPIDB_CODEPAGE_ISO_8859_3			= 28593,
	LIBMAPIDB_CODEPAGE_ISO_8859_4			= 28594,
	LIBMAPIDB_CODEPAGE_ISO_8859_5			= 28595,
	LIBMAPIDB_CODEPAGE_ISO_8859_6			= 28596,
	LIBMAPIDB_CODEPAGE_ISO_8859_7			= 28597,
	LIBMAPIDB_CODEPAGE_ISO_8859_8			= 28598,
	LIBMAPIDB_CODEPAGE_ISO_8859_9			= 28599,
	LIBMAPIDB_CODEPAGE_ISO_8859_10			= 28600,
	LIBMAPIDB_CODEPAGE_ISO_8859_11			= 28601,
	LIBMAPIDB_CODEPAGE_ISO_8859_13			= 28603,
	LIBMAPIDB_CODEPAGE_ISO_8859_14			= 28604,
	LIBMAPIDB_CODEPAGE_ISO_8859_15			= 28605,
	LIBMAPIDB_CODEPAGE_ISO_8859_16			= 28606,

	LIBMAPIDB_CODEPAGE_KOI8_R			= 20866,
	LIBMAPIDB_CODEPAGE_KOI8_U			= 21866,

	LIBMAPIDB_CODEPAGE_WINDOWS_874			= 874,
	LIBMAPIDB_CODEPAGE_WINDOWS_932			= 932,
	LIBMAPIDB_CODEPAGE_WINDOWS_936			= 936,
	LIBMAPIDB_CODEPAGE_WINDOWS_949			= 949,
	LIBMAPIDB_CODEPAGE_WINDOWS_950			= 950,
	LIBMAPIDB_CODEPAGE_WINDOWS_1250			= 1250,
	LIBMAPIDB_CODEPAGE_WINDOWS_1251			= 1251,
	LIBMAPIDB_CODEPAGE_WINDOWS_1252			= 1252,
	LIBMAPIDB_CODEPAGE_WINDOWS_1253			= 1253,
	LIBMAPIDB_CODEPAGE_WINDOWS_1254			= 1254,
	LIBMAPIDB_CODEPAGE_WINDOWS_1255			= 1255,
	LIBMAPIDB_CODEPAGE_WINDOWS_1256			= 1256,
	LIBMAPIDB_CODEPAGE_WINDOWS_1257			= 1257,
	LIBMAPIDB_CODEPAGE_WINDOWS_1258			= 1258
};

#define LIBMAPIDB_CODEPAGE_US_ASCII			LIBMAPIDB_CODEPAGE_ASCII

#define LIBMAPIDB_CODEPAGE_ISO_WESTERN_EUROPEAN		LIBMAPIDB_CODEPAGE_ISO_8859_1
#define LIBMAPIDB_CODEPAGE_ISO_CENTRAL_EUROPEAN		LIBMAPIDB_CODEPAGE_ISO_8859_2
#define LIBMAPIDB_CODEPAGE_ISO_SOUTH_EUROPEAN		LIBMAPIDB_CODEPAGE_ISO_8859_3
#define LIBMAPIDB_CODEPAGE_ISO_NORTH_EUROPEAN		LIBMAPIDB_CODEPAGE_ISO_8859_4
#define LIBMAPIDB_CODEPAGE_ISO_CYRILLIC			LIBMAPIDB_CODEPAGE_ISO_8859_5
#define LIBMAPIDB_CODEPAGE_ISO_ARABIC			LIBMAPIDB_CODEPAGE_ISO_8859_6
#define LIBMAPIDB_CODEPAGE_ISO_GREEK			LIBMAPIDB_CODEPAGE_ISO_8859_7
#define LIBMAPIDB_CODEPAGE_ISO_HEBREW			LIBMAPIDB_CODEPAGE_ISO_8859_8
#define LIBMAPIDB_CODEPAGE_ISO_TURKISH			LIBMAPIDB_CODEPAGE_ISO_8859_9
#define LIBMAPIDB_CODEPAGE_ISO_NORDIC			LIBMAPIDB_CODEPAGE_ISO_8859_10
#define LIBMAPIDB_CODEPAGE_ISO_THAI			LIBMAPIDB_CODEPAGE_ISO_8859_11
#define LIBMAPIDB_CODEPAGE_ISO_BALTIC			LIBMAPIDB_CODEPAGE_ISO_8859_13
#define LIBMAPIDB_CODEPAGE_ISO_CELTIC			LIBMAPIDB_CODEPAGE_ISO_8859_14

#define LIBMAPIDB_CODEPAGE_ISO_LATIN_1			LIBMAPIDB_CODEPAGE_ISO_8859_1
#define LIBMAPIDB_CODEPAGE_ISO_LATIN_2			LIBMAPIDB_CODEPAGE_ISO_8859_2
#define LIBMAPIDB_CODEPAGE_ISO_LATIN_3			LIBMAPIDB_CODEPAGE_ISO_8859_3
#define LIBMAPIDB_CODEPAGE_ISO_LATIN_4			LIBMAPIDB_CODEPAGE_ISO_8859_4
#define LIBMAPIDB_CODEPAGE_ISO_LATIN_5			LIBMAPIDB_CODEPAGE_ISO_8859_9
#define LIBMAPIDB_CODEPAGE_ISO_LATIN_6			LIBMAPIDB_CODEPAGE_ISO_8859_10
#define LIBMAPIDB_CODEPAGE_ISO_LATIN_7			LIBMAPIDB_CODEPAGE_ISO_8859_13
#define LIBMAPIDB_CODEPAGE_ISO_LATIN_8			LIBMAPIDB_CODEPAGE_ISO_8859_14
#define LIBMAPIDB_CODEPAGE_ISO_LATIN_9			LIBMAPIDB_CODEPAGE_ISO_8859_15
#define LIBMAPIDB_CODEPAGE_ISO_LATIN_10			LIBMAPIDB_CODEPAGE_ISO_8859_16

#define LIBMAPIDB_CODEPAGE_KOI8_RUSSIAN			LIBMAPIDB_CODEPAGE_KOI8_R
#define LIBMAPIDB_CODEPAGE_KOI8_UKRAINIAN		LIBMAPIDB_CODEPAGE_KOI8_U

#define LIBMAPIDB_CODEPAGE_WINDOWS_THAI			LIBMAPIDB_CODEPAGE_WINDOWS_874
#define LIBMAPIDB_CODEPAGE_WINDOWS_JAPANESE		LIBMAPIDB_CODEPAGE_WINDOWS_932
#define LIBMAPIDB_CODEPAGE_WINDOWS_CHINESE_SIMPLIFIED	LIBMAPIDB_CODEPAGE_WINDOWS_936
#define LIBMAPIDB_CODEPAGE_WINDOWS_KOREAN		LIBMAPIDB_CODEPAGE_WINDOWS_949
#define LIBMAPIDB_CODEPAGE_WINDOWS_CHINESE_TRADITIONAL	LIBMAPIDB_CODEPAGE_WINDOWS_950
#define LIBMAPIDB_CODEPAGE_WINDOWS_CENTRAL_EUROPEAN	LIBMAPIDB_CODEPAGE_WINDOWS_1250
#define LIBMAPIDB_CODEPAGE_WINDOWS_CYRILLIC		LIBMAPIDB_CODEPAGE_WINDOWS_1251
#define LIBMAPIDB_CODEPAGE_WINDOWS_WESTERN_EUROPEAN	LIBMAPIDB_CODEPAGE_WINDOWS_1252
#define LIBMAPIDB_CODEPAGE_WINDOWS_GREEK			LIBMAPIDB_CODEPAGE_WINDOWS_1253
#define LIBMAPIDB_CODEPAGE_WINDOWS_TURKISH		LIBMAPIDB_CODEPAGE_WINDOWS_1254
#define LIBMAPIDB_CODEPAGE_WINDOWS_HEBREW		LIBMAPIDB_CODEPAGE_WINDOWS_1255
#define LIBMAPIDB_CODEPAGE_WINDOWS_ARABIC		LIBMAPIDB_CODEPAGE_WINDOWS_1256
#define LIBMAPIDB_CODEPAGE_WINDOWS_BALTIC		LIBMAPIDB_CODEPAGE_WINDOWS_1257
#define LIBMAPIDB_CODEPAGE_WINDOWS_VIETNAMESE		LIBMAPIDB_CODEPAGE_WINDOWS_1258

#if defined( __cplusplus )
}
#endif

#endif

