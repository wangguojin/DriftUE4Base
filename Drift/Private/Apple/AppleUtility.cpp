/**
* This file is part of the Drift Unreal Engine Integration.
*
* Copyright (C) 2016-2017 Directive Games Limited. All Rights Reserved.
*
* Licensed under the MIT License (the "License");
*
* You may not use this file except in compliance with the License.
* You may obtain a copy of the license in the LICENSE file found at the top
* level directory of this module, and at https://mit-license.org/
*/

#include "DriftPrivatePCH.h"

#include "AppleUtility.h"

#if PLATFORM_APPLE

const FString AppleUtility::bundleVersion = [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"];
const FString AppleUtility::bundleShortVersion = [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"];
const FString AppleUtility::bundleName = [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleName"];

#endif //PLATFORM_APPLE

#if PLATFORM_IOS
const FString IOSUtility::iOSVersion = [[UIDevice currentDevice] systemVersion];
#endif
