//
// Copyright (C) 2005 - 2015 Apple Inc. All rights reserved.
//
// This program and the accompanying materials have not been licensed.
// Neither is its usage, its redistribution, in source or binary form,
// licensed, nor implicitely or explicitely permitted, except when
// required by applicable law.
//
// Unless required by applicable law or agreed to in writing, software
// distributed is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES
// OR CONDITIONS OF ANY KIND, either express or implied.
//

///
/// @file      Include/Protocol/AppleSmcIo.h
///
///            
///
/// @author    Download-Fritz
/// @date      31/10/2015: Initial version
/// @copyright Copyright (C) 2005 - 2015 Apple Inc. All rights reserved.
///

#ifndef __APPLE_SMC_IO_H__
#define __APPLE_SMC_IO_H__

#include <IndustryStandard/AppleSmc.h>

// APPLE_SMC_IO_PROTOCOL_GUID
#define APPLE_SMC_IO_PROTOCOL_GUID \
  { 0x17407E5A, 0xAF6C, 0x4EE8, { 0x98, 0xA8, 0x00, 0x21, 0x04, 0x53, 0xCD, 0xD9 } }

FORWARD_DECLARATION (APPLE_SMC_IO_PROTOCOL);

// SMC_IO_SMC_READ_VALUE
/// 
///
/// @param 
///
/// @return 
/// @retval
typedef
EFI_STATUS
(EFIAPI *SMC_IO_SMC_READ_VALUE)(
  IN  APPLE_SMC_IO_PROTOCOL  *This,
  IN  SMC_KEY                Key,
  IN  SMC_DATA_SIZE          Size,
  OUT SMC_DATA               *Value
  );

// SMC_IO_SMC_WRITE_VALUE
/// 
///
/// @param 
///
/// @return 
/// @retval 
typedef
EFI_STATUS
(EFIAPI *SMC_IO_SMC_WRITE_VALUE)(
  IN  APPLE_SMC_IO_PROTOCOL  *This,
  IN  SMC_KEY                Key,
  IN  UINT32                 Size,
  OUT SMC_DATA               *Value
  );

// SMC_IO_SMC_GET_KEY_COUNT
/// 
///
/// @param 
///
/// @return 
/// @retval 
typedef
EFI_STATUS
(EFIAPI *SMC_IO_SMC_GET_KEY_COUNT)(
  IN  APPLE_SMC_IO_PROTOCOL  *This,
  OUT UINT32                 *Count
  );

// SMC_IO_SMC_MAKE_KEY
/// 
///
/// @param 
///
/// @return 
/// @retval 
typedef
EFI_STATUS
(EFIAPI *SMC_IO_SMC_MAKE_KEY)(
  IN  CHAR8    *Name,
  OUT SMC_KEY  *Key
  );

// SMC_IO_SMC_GET_KEY_FROM_INDEX
/// 
///
/// @param 
///
/// @return 
/// @retval
typedef
EFI_STATUS
(EFIAPI *SMC_IO_SMC_GET_KEY_FROM_INDEX)(
  IN  APPLE_SMC_IO_PROTOCOL  *This,
  IN  SMC_INDEX              Index,
  OUT SMC_KEY                *Key
  );

// SMC_IO_SMC_GET_KEY_INFO
/// 
///
/// @param 
///
/// @return 
/// @retval
typedef
EFI_STATUS
(EFIAPI *SMC_IO_SMC_GET_KEY_INFO)(
  IN     APPLE_SMC_IO_PROTOCOL  *This,
  IN     SMC_KEY                Key,
  IN OUT SMC_DATA_SIZE          *Size,
  IN OUT SMC_KEY_TYPE           *Type,
  IN OUT SMC_KEY_ATTRIBUTES     *Attributes
  );

// SMC_IO_SMC_RESET
/// 
///
/// @param 
///
/// @return 
/// @retval
typedef
EFI_STATUS
(EFIAPI *SMC_IO_SMC_RESET)(
  IN APPLE_SMC_IO_PROTOCOL  *This,
  IN UINT32                 Mode
  );

// SMC_IO_SMC_FLASH_TYPE
/// 
///
/// @param 
///
/// @return 
/// @retval
typedef
EFI_STATUS
(EFIAPI *SMC_IO_SMC_FLASH_TYPE)(
  IN APPLE_SMC_IO_PROTOCOL  *This,
  IN UINT32                 Type
  );

// SMC_IO_SMC_FLASH_WRITE
/// 
///
/// @param 
///
/// @return 
/// @retval
typedef
EFI_STATUS
(EFIAPI *SMC_IO_SMC_FLASH_WRITE)(
  IN APPLE_SMC_IO_PROTOCOL  *This,
  IN UINT32                 Unknown,
  IN UINT32                 Size,
  IN SMC_DATA               *Data
  );

// SMC_IO_SMC_FLASH_AUTH
/// 
///
/// @param 
///
/// @return 
/// @retval
typedef
EFI_STATUS
(EFIAPI *SMC_IO_SMC_FLASH_AUTH)(
  IN APPLE_SMC_IO_PROTOCOL  *This,
  IN UINT32                 Size,
  IN SMC_DATA               *Data
  );

// SMC_IO_SMC_UNSUPPORTED
/// 
///
/// @param 
///
/// @return 
/// @retval
typedef
EFI_STATUS
(EFIAPI *SMC_IO_SMC_UNSUPPORTED)(
  VOID
  );

// SMC_IO_SMC_UNKNOWN_1
/// 
///
/// @param 
///
/// @return 
/// @retval 
typedef
EFI_STATUS
(EFIAPI *SMC_IO_SMC_UNKNOWN_1)(
  VOID
  );

// SMC_IO_SMC_UNKNOWN_2
/// 
///
/// @param 
///
/// @return 
/// @retval 
typedef
EFI_STATUS
(EFIAPI *SMC_IO_SMC_UNKNOWN_2)(
  IN APPLE_SMC_IO_PROTOCOL  *This,
  IN UINTN                  Ukn1,
  IN UINTN                  Ukn2
  );

// SMC_IO_SMC_UNKNOWN_3
/// 
///
/// @param 
///
/// @return 
/// @retval 
typedef
EFI_STATUS
(EFIAPI *SMC_IO_SMC_UNKNOWN_3)(
  IN APPLE_SMC_IO_PROTOCOL  *This,
  IN UINTN                  Ukn1,
  IN UINTN                  Ukn2
  );

// SMC_IO_SMC_UNKNOWN_4
/// 
///
/// @param 
///
/// @return 
/// @retval 
typedef
EFI_STATUS
(EFIAPI *SMC_IO_SMC_UNKNOWN_4)(
  IN APPLE_SMC_IO_PROTOCOL  *This,
  IN UINTN                  Ukn1
  );

// SMC_IO_SMC_UNKNOWN_5
/// 
///
/// @param 
///
/// @return 
/// @retval 
typedef
EFI_STATUS
(EFIAPI *SMC_IO_SMC_UNKNOWN_5)(
  IN APPLE_SMC_IO_PROTOCOL  *This,
  IN UINTN                  Ukn1
  );

// _APPLE_SMC_IO_PROTOCOL
struct _APPLE_SMC_IO_PROTOCOL {
  UINT64                        Revision;            ///< 
  SMC_IO_SMC_READ_VALUE         SmcReadValue;        ///< 
  SMC_IO_SMC_WRITE_VALUE        SmcWriteValue;       ///< 
  SMC_IO_SMC_GET_KEY_COUNT      SmcGetKeyCount;      ///< 
  SMC_IO_SMC_MAKE_KEY           SmcMakeKey;          ///< 
  SMC_IO_SMC_GET_KEY_FROM_INDEX SmcGetKeyFromIndex;  ///< 
  SMC_IO_SMC_GET_KEY_INFO       SmcGetKeyInfo;       ///< 
  SMC_IO_SMC_RESET              SmcReset;            ///< 
  SMC_IO_SMC_FLASH_TYPE         SmcFlashType;        ///< 
  SMC_IO_SMC_UNSUPPORTED        SmcUnsupported;      ///< 
  SMC_IO_SMC_FLASH_WRITE        SmcFlashWrite;       ///< 
  SMC_IO_SMC_FLASH_AUTH         SmcFlashAuth;        ///< 
  SMC_INDEX                     Index;               ///< 
  SMC_ADDRESS                   Address;             ///< 
  BOOLEAN                       Mmio;                ///< 
  SMC_IO_SMC_UNKNOWN_1          SmcUnknown1;         ///< 
  SMC_IO_SMC_UNKNOWN_2          SmcUnknown2;         ///< 
  SMC_IO_SMC_UNKNOWN_3          SmcUnknown3;         ///< 
  SMC_IO_SMC_UNKNOWN_4          SmcUnknown4;         ///< 
  SMC_IO_SMC_UNKNOWN_5          SmcUnknown5;         ///< 
};

// gAppleSmcIoProtocolGuid
extern EFI_GUID gAppleSmcIoProtocolGuid;

#endif // ifndef __APPLE_SMC_IO_H__
