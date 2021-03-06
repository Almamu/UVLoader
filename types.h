/// 
/// \file types.h
/// \brief Types used in UVLoader
/// 
#ifndef UVL_TYPES
#define UVL_TYPES

/** \name Fixed width integers
 *  @{
 */
typedef unsigned char u8_t;             ///< Unsigned 8-bit type
typedef unsigned short int u16_t;       ///< Unsigned 16-bit type
typedef unsigned int u32_t;             ///< Unsigned 32-bit type
typedef unsigned long int u64_t;        ///< Unsigned 64-bit type
/** @}*/

/** \name SCE standard types
 *  @{
 */
typedef int SceUID;         ///< SceUID type
typedef u64_t SceOff;       ///< SceOff type
typedef int SceSSize;       ///< SceSSize type
/** @}*/

// TODO: Make sure void* is 4 bytes

#define NULL 0

#endif
