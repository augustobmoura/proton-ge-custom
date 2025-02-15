#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.16/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRTrackedCamera_IVRTrackedCamera_003.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraErrorNameFromEnum( struct cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraErrorNameFromEnum_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetCameraErrorNameFromEnum((vr::EVRTrackedCameraError)params->eCameraError);
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_HasCamera( struct cppIVRTrackedCamera_IVRTrackedCamera_003_HasCamera_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->HasCamera((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (bool *)params->pHasCamera);
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraFrameSize( struct cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraFrameSize_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetCameraFrameSize((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (vr::EVRTrackedCameraFrameType)params->eFrameType, (uint32_t *)params->pnWidth, (uint32_t *)params->pnHeight, (uint32_t *)params->pnFrameBufferSize);
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraIntrinsics( struct cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraIntrinsics_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetCameraIntrinsics((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (vr::EVRTrackedCameraFrameType)params->eFrameType, (vr::HmdVector2_t *)params->pFocalLength, (vr::HmdVector2_t *)params->pCenter);
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraProjection( struct cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraProjection_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetCameraProjection((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (vr::EVRTrackedCameraFrameType)params->eFrameType, (float)params->flZNear, (float)params->flZFar, (vr::HmdMatrix44_t *)params->pProjection);
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_AcquireVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_003_AcquireVideoStreamingService_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->AcquireVideoStreamingService((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (vr::TrackedCameraHandle_t *)params->pHandle);
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamingService_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->ReleaseVideoStreamingService((vr::TrackedCameraHandle_t)params->hTrackedCamera);
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamFrameBuffer( struct cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamFrameBuffer_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetVideoStreamFrameBuffer((vr::TrackedCameraHandle_t)params->hTrackedCamera, (vr::EVRTrackedCameraFrameType)params->eFrameType, (void *)params->pFrameBuffer, (uint32_t)params->nFrameBufferSize, (vr::CameraVideoStreamFrameHeader_t *)params->pFrameHeader, (uint32_t)params->nFrameHeaderSize);
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureSize( struct cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureSize_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetVideoStreamTextureSize((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (vr::EVRTrackedCameraFrameType)params->eFrameType, (vr::VRTextureBounds_t *)params->pTextureBounds, (uint32_t *)params->pnWidth, (uint32_t *)params->pnHeight);
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureD3D11( struct cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureD3D11_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetVideoStreamTextureD3D11((vr::TrackedCameraHandle_t)params->hTrackedCamera, (vr::EVRTrackedCameraFrameType)params->eFrameType, (void *)params->pD3D11DeviceOrResource, (void **)params->ppD3D11ShaderResourceView, (vr::CameraVideoStreamFrameHeader_t *)params->pFrameHeader, (uint32_t)params->nFrameHeaderSize);
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureGL( struct cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureGL_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetVideoStreamTextureGL((vr::TrackedCameraHandle_t)params->hTrackedCamera, (vr::EVRTrackedCameraFrameType)params->eFrameType, (vr::glUInt_t *)params->pglTextureId, (vr::CameraVideoStreamFrameHeader_t *)params->pFrameHeader, (uint32_t)params->nFrameHeaderSize);
}

void cppIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamTextureGL( struct cppIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamTextureGL_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->ReleaseVideoStreamTextureGL((vr::TrackedCameraHandle_t)params->hTrackedCamera, (vr::glUInt_t)params->glTextureId);
}

#ifdef __cplusplus
}
#endif
