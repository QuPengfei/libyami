/*
 * Copyright (C) 2016 Intel Corporation. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __VIDEO_POST_PROCESS_DEFS_H__
#define __VIDEO_POST_PROCESS_DEFS_H__

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    VppParamTypeOsd,
    VppParamTypeTransform,
    VppParamTypeMosaic,
} VppParamType;

typedef struct VppParamOsd {
    size_t size;
    uint32_t threshold;
} VppParamOsd;

typedef enum {
    VPP_TRANSFORM_NONE   = 0x0,
    VPP_TRANSFORM_FLIP_H = 0x1,
    VPP_TRANSFORM_FLIP_V = 0x2,
    VPP_TRANSFORM_ROT_90 = 0x4,
    VPP_TRANSFORM_ROT_180 = 0x8,
    VPP_TRANSFORM_ROT_270 = 0x10,
} VppTransform;

typedef struct VppParamTransform {
    size_t size;
    uint32_t transform;
} VppParamTransform;

typedef struct VppParamMosaic {
    size_t size;
    uint32_t blockSize;
} VppParamMosaic;

#ifdef __cplusplus
}
#endif
#endif /*  __VIDEO_POST_PROCESS_DEFS_H__ */