/*
  Free Download Manager Copyright (c) 2003-2007 FreeDownloadManager.ORG
*/

    

#ifndef __INTERFACE_PROPID_H
#define __INTERFACE_PROPID_H

enum
{
  kpidNoProperty = 0,
  
  kpidHandlerItemIndex = 2,
  kpidPath,
  kpidName,
  kpidExtension,
  kpidIsFolder,
  kpidSize,
  kpidPackedSize,
  kpidAttributes,
  kpidCreationTime,
  kpidLastAccessTime,
  kpidLastWriteTime,
  kpidSolid, 
  kpidCommented, 
  kpidEncrypted, 
  kpidSplitBefore, 
  kpidSplitAfter, 
  kpidDictionarySize, 
  kpidCRC, 
  kpidType,
  kpidIsAnti,
  kpidMethod,
  kpidHostOS,
  kpidFileSystem,
  kpidUser,
  kpidGroup,
  kpidBlock,
  kpidComment,
  kpidPosition,

  kpidTotalSize = 0x1100,
  kpidFreeSpace, 
  kpidClusterSize,
  kpidVolumeName,

  kpidLocalName = 0x1200,
  kpidProvider,

  kpidUserDefined = 0x10000
};

#endif
