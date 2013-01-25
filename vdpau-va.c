#include <stdlib.h>
#include <vdpau/vdpau.h>
#include <vdpau/vdpau_x11.h>
#include "reverse-constant.h"
#include "handle-storage.h"
#include "vdpau-trace.h"

static char const *implemetation_description_string = "VAAPI backend for VDPAU";

static
const char *
vaVdpGetErrorString(VdpStatus status)
{
    return reverse_status(status);
}

static
VdpStatus
vaVdpGetApiVersion(uint32_t *api_version)
{
    traceVdpGetApiVersion("{full}", api_version);
    *api_version = VDPAU_VERSION;
    return VDP_STATUS_OK;
}

static
VdpStatus
vaVdpDecoderQueryCapabilities(VdpDevice device, VdpDecoderProfile profile, VdpBool *is_supported,
                                uint32_t *max_level, uint32_t *max_macroblocks,
                                uint32_t *max_width, uint32_t *max_height)
{
    traceVdpDecoderQueryCapabilities("{zilch}", device, profile, is_supported, max_level,
        max_macroblocks, max_width, max_height);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpDecoderCreate(VdpDevice device, VdpDecoderProfile profile, uint32_t width, uint32_t height,
                     uint32_t max_references, VdpDecoder *decoder)
{
    traceVdpDecoderCreate("{zilch}", device, profile, width, height, max_references, decoder);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpDecoderDestroy(VdpDecoder decoder)
{
    traceVdpDecoderDestroy("{zilch}", decoder);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpDecoderGetParameters(VdpDecoder decoder, VdpDecoderProfile *profile,
                            uint32_t *width, uint32_t *height)
{
    traceVdpDecoderGetParameters("{zilch}", decoder, profile, width, height);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpDecoderRender(VdpDecoder decoder, VdpVideoSurface target,
                     VdpPictureInfo const *picture_info, uint32_t bitstream_buffer_count,
                     VdpBitstreamBuffer const *bitstream_buffers)
{
    traceVdpDecoderRender("{zilch}", decoder, target, picture_info, bitstream_buffer_count,
        bitstream_buffers);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpOutputSurfaceQueryCapabilities(VdpDevice device, VdpRGBAFormat surface_rgba_format,
                                      VdpBool *is_supported, uint32_t *max_width,
                                      uint32_t *max_height)
{
    traceVdpOutputSurfaceQueryCapabilities("{zilch}", device, surface_rgba_format, is_supported,
        max_width, max_height);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpOutputSurfaceQueryGetPutBitsNativeCapabilities(VdpDevice device,
                                                      VdpRGBAFormat surface_rgba_format,
                                                      VdpBool *is_supported)
{
    traceVdpOutputSurfaceQueryGetPutBitsNativeCapabilities("{zilch}", device, surface_rgba_format,
        is_supported);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpOutputSurfaceQueryPutBitsIndexedCapabilities(VdpDevice device,
                                                    VdpRGBAFormat surface_rgba_format,
                                                    VdpIndexedFormat bits_indexed_format,
                                                    VdpColorTableFormat color_table_format,
                                                    VdpBool *is_supported)
{
    traceVdpOutputSurfaceQueryPutBitsIndexedCapabilities("{zilch}", device, surface_rgba_format,
        bits_indexed_format, color_table_format, is_supported);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpOutputSurfaceQueryPutBitsYCbCrCapabilities(VdpDevice device,
                                                  VdpRGBAFormat surface_rgba_format,
                                                  VdpYCbCrFormat bits_ycbcr_format,
                                                  VdpBool *is_supported)
{
    traceVdpOutputSurfaceQueryPutBitsYCbCrCapabilities("{zilch}", device, surface_rgba_format,
        bits_ycbcr_format, is_supported);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpOutputSurfaceCreate(VdpDevice device, VdpRGBAFormat rgba_format, uint32_t width,
                           uint32_t height, VdpOutputSurface *surface)
{
    traceVdpOutputSurfaceCreate("{zilch}", device, rgba_format, width, height, surface);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpOutputSurfaceDestroy(VdpOutputSurface surface)
{
    traceVdpOutputSurfaceDestroy("{zilch}", surface);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpOutputSurfaceGetParameters(VdpOutputSurface surface, VdpRGBAFormat *rgba_format,
                                  uint32_t *width, uint32_t *height)
{
    traceVdpOutputSurfaceGetParameters("{zilch}", surface, rgba_format, width, height);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpOutputSurfaceGetBitsNative(VdpOutputSurface surface, VdpRect const *source_rect,
                                  void *const *destination_data,
                                  uint32_t const *destination_pitches)
{
    traceVdpOutputSurfaceGetBitsNative("{zilch}", surface, source_rect, destination_data,
        destination_pitches);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpOutputSurfacePutBitsNative(VdpOutputSurface surface, void const *const *source_data,
                                  uint32_t const *source_pitches, VdpRect const *destination_rect)
{
    traceVdpOutputSurfacePutBitsNative("{zilch}", surface, source_data, source_pitches,
        destination_rect);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpOutputSurfacePutBitsIndexed(VdpOutputSurface surface, VdpIndexedFormat source_indexed_format,
                                   void const *const *source_data, uint32_t const *source_pitch,
                                   VdpRect const *destination_rect,
                                   VdpColorTableFormat color_table_format, void const *color_table)
{
    traceVdpOutputSurfacePutBitsIndexed("{zilch}", surface, source_indexed_format, source_data,
        source_pitch, destination_rect, color_table_format, color_table);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpOutputSurfacePutBitsYCbCr(VdpOutputSurface surface, VdpYCbCrFormat source_ycbcr_format,
                                 void const *const *source_data, uint32_t const *source_pitches,
                                 VdpRect const *destination_rect, VdpCSCMatrix const *csc_matrix)
{
    traceVdpOutputSurfacePutBitsYCbCr("{zilch}", surface, source_ycbcr_format, source_data,
        source_pitches, destination_rect, csc_matrix);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpVideoMixerQueryFeatureSupport(VdpDevice device, VdpVideoMixerFeature feature,
                                     VdpBool *is_supported)
{
    traceVdpVideoMixerQueryFeatureSupport("{zilch}", device, feature, is_supported);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpVideoMixerQueryParameterSupport(VdpDevice device, VdpVideoMixerParameter parameter,
                                       VdpBool *is_supported)
{
    traceVdpVideoMixerQueryParameterSupport("{zilch}", device, parameter, is_supported);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpVideoMixerQueryAttributeSupport(VdpDevice device, VdpVideoMixerAttribute attribute,
                                       VdpBool *is_supported)
{
    traceVdpVideoMixerQueryAttributeSupport("{zilch}", device, attribute, is_supported);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpVideoMixerQueryParameterValueRange(VdpDevice device, VdpVideoMixerParameter parameter,
                                          void *min_value, void *max_value)
{
    traceVdpVideoMixerQueryParameterValueRange("{zilch}", device, parameter, min_value, max_value);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpVideoMixerQueryAttributeValueRange(VdpDevice device, VdpVideoMixerAttribute attribute,
                                          void *min_value, void *max_value)
{
    traceVdpVideoMixerQueryAttributeValueRange("{zilch}", device, attribute, min_value, max_value);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpVideoMixerCreate(VdpDevice device, uint32_t feature_count,
                        VdpVideoMixerFeature const *features, uint32_t parameter_count,
                        VdpVideoMixerParameter const *parameters,
                        void const *const *parameter_values, VdpVideoMixer *mixer)
{
    traceVdpVideoMixerCreate("{zilch}", device, feature_count, features, parameter_count, parameters,
        parameter_values, mixer);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpVideoMixerSetFeatureEnables(VdpVideoMixer mixer, uint32_t feature_count,
                                   VdpVideoMixerFeature const *features,
                                   VdpBool const *feature_enables)
{
    traceVdpVideoMixerSetFeatureEnables("{zilch}", mixer, feature_count, features, feature_enables);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpVideoMixerSetAttributeValues(VdpVideoMixer mixer, uint32_t attribute_count,
                                    VdpVideoMixerAttribute const *attributes,
                                    void const *const *attribute_values)
{
    traceVdpVideoMixerSetAttributeValues("{zilch}", mixer, attribute_count, attributes,
        attribute_values);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpVideoMixerGetFeatureSupport(VdpVideoMixer mixer, uint32_t feature_count,
                                   VdpVideoMixerFeature const *features, VdpBool *feature_supports)
{
    traceVdpVideoMixerGetFeatureSupport("{zilch}", mixer, feature_count, features,
        feature_supports);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpVideoMixerGetFeatureEnables(VdpVideoMixer mixer, uint32_t feature_count,
                                   VdpVideoMixerFeature const *features, VdpBool *feature_enables)
{
    traceVdpVideoMixerGetFeatureEnables("{zilch}", mixer, feature_count, features, feature_enables);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpVideoMixerGetParameterValues(VdpVideoMixer mixer, uint32_t parameter_count,
                                    VdpVideoMixerParameter const *parameters,
                                    void *const *parameter_values)
{
    traceVdpVideoMixerGetParameterValues("{zilch}", mixer, parameter_count, parameters,
        parameter_values);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpVideoMixerGetAttributeValues(VdpVideoMixer mixer, uint32_t attribute_count,
                                    VdpVideoMixerAttribute const *attributes,
                                    void *const *attribute_values)
{
    traceVdpVideoMixerGetAttributeValues("{zilch}", mixer, attribute_count, attributes,
        attribute_values);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpVideoMixerDestroy(VdpVideoMixer mixer)
{
    traceVdpVideoMixerDestroy("{zilch}", mixer);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpVideoMixerRender(VdpVideoMixer mixer, VdpOutputSurface background_surface,
                        VdpRect const *background_source_rect,
                        VdpVideoMixerPictureStructure current_picture_structure,
                        uint32_t video_surface_past_count,
                        VdpVideoSurface const *video_surface_past,
                        VdpVideoSurface video_surface_current, uint32_t video_surface_future_count,
                        VdpVideoSurface const *video_surface_future,
                        VdpRect const *video_source_rect, VdpOutputSurface destination_surface,
                        VdpRect const *destination_rect, VdpRect const *destination_video_rect,
                        uint32_t layer_count, VdpLayer const *layers)
{
    traceVdpVideoMixerRender("{zilch}", mixer, background_surface, background_source_rect,
        current_picture_structure, video_surface_past_count, video_surface_past,
        video_surface_current, video_surface_future_count, video_surface_future, video_source_rect,
        destination_surface, destination_rect, destination_video_rect, layer_count, layers);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpPresentationQueueTargetDestroy(VdpPresentationQueueTarget presentation_queue_target)
{
    traceVdpPresentationQueueTargetDestroy("{zilch}", presentation_queue_target);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpPresentationQueueCreate(VdpDevice device,
                               VdpPresentationQueueTarget presentation_queue_target,
                               VdpPresentationQueue *presentation_queue)
{
    traceVdpPresentationQueueCreate("{zilch}", device, presentation_queue_target,
        presentation_queue);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpPresentationQueueDestroy(VdpPresentationQueue presentation_queue)
{
    traceVdpPresentationQueueDestroy("{zilch}", presentation_queue);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpPresentationQueueSetBackgroundColor(VdpPresentationQueue presentation_queue,
                                           VdpColor *const background_color)
{
    traceVdpPresentationQueueSetBackgroundColor("{zilch}", presentation_queue, background_color);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpPresentationQueueGetBackgroundColor(VdpPresentationQueue presentation_queue,
                                           VdpColor *background_color)
{
    traceVdpPresentationQueueGetBackgroundColor("{zilch}", presentation_queue, background_color);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpPresentationQueueGetTime(VdpPresentationQueue presentation_queue,
                                VdpTime *current_time)
{
    traceVdpPresentationQueueGetTime("{zilch}", presentation_queue, current_time);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpPresentationQueueDisplay(VdpPresentationQueue presentation_queue, VdpOutputSurface surface,
                                uint32_t clip_width, uint32_t clip_height,
                                VdpTime earliest_presentation_time)
{
    traceVdpPresentationQueueDisplay("{zilch}", presentation_queue, surface, clip_width, clip_height,
        earliest_presentation_time);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpPresentationQueueBlockUntilSurfaceIdle(VdpPresentationQueue presentation_queue,
                                              VdpOutputSurface surface,
                                              VdpTime *first_presentation_time)

{
    traceVdpPresentationQueueBlockUntilSurfaceIdle("{zilch}", presentation_queue, surface,
        first_presentation_time);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpPresentationQueueQuerySurfaceStatus(VdpPresentationQueue presentation_queue,
                                           VdpOutputSurface surface,
                                           VdpPresentationQueueStatus *status,
                                           VdpTime *first_presentation_time)
{
    traceVdpPresentationQueueQuerySurfaceStatus("{zilch}", presentation_queue, surface,
        status, first_presentation_time);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpVideoSurfaceQueryCapabilities(VdpDevice device, VdpChromaType surface_chroma_type,
                                     VdpBool *is_supported, uint32_t *max_width,
                                     uint32_t *max_height)
{
    traceVdpVideoSurfaceQueryCapabilities("{zilch}", device, surface_chroma_type, is_supported,
        max_width, max_height);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpVideoSurfaceQueryGetPutBitsYCbCrCapabilities(VdpDevice device,
                                                    VdpChromaType surface_chroma_type,
                                                    VdpYCbCrFormat bits_ycbcr_format,
                                                    VdpBool *is_supported)
{
    traceVdpVideoSurfaceQueryGetPutBitsYCbCrCapabilities("{zilch}", device, surface_chroma_type,
        bits_ycbcr_format, is_supported);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpVideoSurfaceCreate(VdpDevice device, VdpChromaType chroma_type, uint32_t width,
                          uint32_t height, VdpVideoSurface *surface)
{
    traceVdpVideoSurfaceCreate("{zilch}", device, chroma_type, width, height, surface);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpVideoSurfaceDestroy(VdpVideoSurface surface)
{
    traceVdpVideoSurfaceDestroy("{zilch}", surface);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpVideoSurfaceGetParameters(VdpVideoSurface surface, VdpChromaType *chroma_type,
                                 uint32_t *width, uint32_t *height)
{
    traceVdpVideoSurfaceGetParameters("{zilch}", surface, chroma_type, width, height);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpVideoSurfaceGetBitsYCbCr(VdpVideoSurface surface, VdpYCbCrFormat destination_ycbcr_format,
                                void *const *destination_data, uint32_t const *destination_pitches)
{
    traceVdpVideoSurfaceGetBitsYCbCr("{zilch}", surface, destination_ycbcr_format,
        destination_data, destination_pitches);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpVideoSurfacePutBitsYCbCr(VdpVideoSurface surface, VdpYCbCrFormat source_ycbcr_format,
                                void const *const *source_data, uint32_t const *source_pitches)
{
    traceVdpVideoSurfacePutBitsYCbCr("{zilch}", surface, source_ycbcr_format, source_data,
        source_pitches);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpBitmapSurfaceQueryCapabilities(VdpDevice device, VdpRGBAFormat surface_rgba_format,
                                      VdpBool *is_supported, uint32_t *max_width,
                                      uint32_t *max_height)
{
    traceVdpBitmapSurfaceQueryCapabilities("{zilch}", device, surface_rgba_format, is_supported,
        max_width, max_height);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpBitmapSurfaceCreate(VdpDevice device, VdpRGBAFormat rgba_format, uint32_t width,
                           uint32_t height, VdpBool frequently_accessed, VdpBitmapSurface *surface)
{
    traceVdpBitmapSurfaceCreate("{zilch}", device, rgba_format, width, height, frequently_accessed,
        surface);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpBitmapSurfaceDestroy(VdpBitmapSurface surface)
{
    traceVdpBitmapSurfaceDestroy("{zilch}", surface);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpBitmapSurfaceGetParameters(VdpBitmapSurface surface, VdpRGBAFormat *rgba_format,
                                  uint32_t *width, uint32_t *height, VdpBool *frequently_accessed)
{
    traceVdpBitmapSurfaceGetParameters("{zilch}", surface, rgba_format, width, height,
        frequently_accessed);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpBitmapSurfacePutBitsNative(VdpBitmapSurface surface, void const *const *source_data,
                                  uint32_t const *source_pitches, VdpRect const *destination_rect)
{
    traceVdpBitmapSurfacePutBitsNative("{zilch}", surface, source_data, source_pitches,
        destination_rect);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpDeviceDestroy(VdpDevice device)
{
    traceVdpDeviceDestroy("{zilch}", device);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpGetInformationString(char const **information_string)
{
    traceVdpGetInformationString("{full}", information_string);
    *information_string = implemetation_description_string;
    return VDP_STATUS_OK;
}

static
VdpStatus
vaVdpGenerateCSCMatrix(VdpProcamp *procamp, VdpColorStandard standard, VdpCSCMatrix *csc_matrix)
{
    traceVdpGenerateCSCMatrix("{zilch}", procamp, standard, csc_matrix);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpOutputSurfaceRenderOutputSurface(VdpOutputSurface destination_surface,
                                        VdpRect const *destination_rect,
                                        VdpOutputSurface source_surface, VdpRect const *source_rect,
                                        VdpColor const *colors,
                                        VdpOutputSurfaceRenderBlendState const *blend_state,
                                        uint32_t flags)
{
    traceVdpOutputSurfaceRenderOutputSurface("{zilch}", destination_surface, destination_rect,
        source_surface, source_rect, colors, blend_state, flags);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpOutputSurfaceRenderBitmapSurface(VdpOutputSurface destination_surface,
                                        VdpRect const *destination_rect,
                                        VdpBitmapSurface source_surface, VdpRect const *source_rect,
                                        VdpColor const *colors,
                                        VdpOutputSurfaceRenderBlendState const *blend_state,
                                        uint32_t flags)
{
    traceVdpOutputSurfaceRenderBitmapSurface("{zilch}", destination_surface, destination_rect,
        source_surface, source_rect, colors, blend_state, flags);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpPreemptionCallbackRegister(VdpDevice device, VdpPreemptionCallback callback, void *context)
{
    traceVdpPreemptionCallbackRegister("{zilch}", device, callback, context);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpPresentationQueueTargetCreateX11(VdpDevice device, Drawable drawable,
                                        VdpPresentationQueueTarget *target)
{
    traceVdpPresentationQueueTargetCreateX11("{zilch}", device, drawable, target);
    return VDP_STATUS_NO_IMPLEMENTATION;
}

static
VdpStatus
vaVdpGetProcAddress(VdpDevice device, VdpFuncId function_id, void **function_pointer)
{
    traceVdpGetProcAddress("{full}", device, function_id, function_pointer);

    switch (function_id) {
    case VDP_FUNC_ID_GET_ERROR_STRING:
        *function_pointer = &vaVdpGetErrorString;
        break;
    case VDP_FUNC_ID_GET_PROC_ADDRESS:
        *function_pointer = &vaVdpGetProcAddress;
        break;
    case VDP_FUNC_ID_GET_API_VERSION:
        *function_pointer = &vaVdpGetApiVersion;
        break;
    case VDP_FUNC_ID_GET_INFORMATION_STRING:
        *function_pointer = &vaVdpGetInformationString;
        break;
    case VDP_FUNC_ID_DEVICE_DESTROY:
        *function_pointer = &vaVdpDeviceDestroy;
        break;
    case VDP_FUNC_ID_GENERATE_CSC_MATRIX:
        *function_pointer = &vaVdpGenerateCSCMatrix;
        break;
    case VDP_FUNC_ID_VIDEO_SURFACE_QUERY_CAPABILITIES:
        *function_pointer = &vaVdpVideoSurfaceQueryCapabilities;
        break;
    case VDP_FUNC_ID_VIDEO_SURFACE_QUERY_GET_PUT_BITS_Y_CB_CR_CAPABILITIES:
        *function_pointer = &vaVdpVideoSurfaceQueryGetPutBitsYCbCrCapabilities;
        break;
    case VDP_FUNC_ID_VIDEO_SURFACE_CREATE:
        *function_pointer = &vaVdpVideoSurfaceCreate;
        break;
    case VDP_FUNC_ID_VIDEO_SURFACE_DESTROY:
        *function_pointer = &vaVdpVideoSurfaceDestroy;
        break;
    case VDP_FUNC_ID_VIDEO_SURFACE_GET_PARAMETERS:
        *function_pointer = &vaVdpVideoSurfaceGetParameters;
        break;
    case VDP_FUNC_ID_VIDEO_SURFACE_GET_BITS_Y_CB_CR:
        *function_pointer = &vaVdpVideoSurfaceGetBitsYCbCr;
        break;
    case VDP_FUNC_ID_VIDEO_SURFACE_PUT_BITS_Y_CB_CR:
        *function_pointer = &vaVdpVideoSurfacePutBitsYCbCr;
        break;
    case VDP_FUNC_ID_OUTPUT_SURFACE_QUERY_CAPABILITIES:
        *function_pointer = &vaVdpOutputSurfaceQueryCapabilities;
        break;
    case VDP_FUNC_ID_OUTPUT_SURFACE_QUERY_GET_PUT_BITS_NATIVE_CAPABILITIES:
        *function_pointer = &vaVdpOutputSurfaceQueryGetPutBitsNativeCapabilities;
        break;
    case VDP_FUNC_ID_OUTPUT_SURFACE_QUERY_PUT_BITS_INDEXED_CAPABILITIES:
        *function_pointer = &vaVdpOutputSurfaceQueryPutBitsIndexedCapabilities;
        break;
    case VDP_FUNC_ID_OUTPUT_SURFACE_QUERY_PUT_BITS_Y_CB_CR_CAPABILITIES:
        *function_pointer = &vaVdpOutputSurfaceQueryPutBitsYCbCrCapabilities;
        break;
    case VDP_FUNC_ID_OUTPUT_SURFACE_CREATE:
        *function_pointer = &vaVdpOutputSurfaceCreate;
        break;
    case VDP_FUNC_ID_OUTPUT_SURFACE_DESTROY:
        *function_pointer = &vaVdpOutputSurfaceDestroy;
        break;
    case VDP_FUNC_ID_OUTPUT_SURFACE_GET_PARAMETERS:
        *function_pointer = &vaVdpOutputSurfaceGetParameters;
        break;
    case VDP_FUNC_ID_OUTPUT_SURFACE_GET_BITS_NATIVE:
        *function_pointer = &vaVdpOutputSurfaceGetBitsNative;
        break;
    case VDP_FUNC_ID_OUTPUT_SURFACE_PUT_BITS_NATIVE:
        *function_pointer = &vaVdpOutputSurfacePutBitsNative;
        break;
    case VDP_FUNC_ID_OUTPUT_SURFACE_PUT_BITS_INDEXED:
        *function_pointer = &vaVdpOutputSurfacePutBitsIndexed;
        break;
    case VDP_FUNC_ID_OUTPUT_SURFACE_PUT_BITS_Y_CB_CR:
        *function_pointer = &vaVdpOutputSurfacePutBitsYCbCr;
        break;
    case VDP_FUNC_ID_BITMAP_SURFACE_QUERY_CAPABILITIES:
        *function_pointer = &vaVdpBitmapSurfaceQueryCapabilities;
        break;
    case VDP_FUNC_ID_BITMAP_SURFACE_CREATE:
        *function_pointer = &vaVdpBitmapSurfaceCreate;
        break;
    case VDP_FUNC_ID_BITMAP_SURFACE_DESTROY:
        *function_pointer = &vaVdpBitmapSurfaceDestroy;
        break;
    case VDP_FUNC_ID_BITMAP_SURFACE_GET_PARAMETERS:
        *function_pointer = &vaVdpBitmapSurfaceGetParameters;
        break;
    case VDP_FUNC_ID_BITMAP_SURFACE_PUT_BITS_NATIVE:
        *function_pointer = &vaVdpBitmapSurfacePutBitsNative;
        break;
    case VDP_FUNC_ID_OUTPUT_SURFACE_RENDER_OUTPUT_SURFACE:
        *function_pointer = &vaVdpOutputSurfaceRenderOutputSurface;
        break;
    case VDP_FUNC_ID_OUTPUT_SURFACE_RENDER_BITMAP_SURFACE:
        *function_pointer = &vaVdpOutputSurfaceRenderBitmapSurface;
        break;
    case VDP_FUNC_ID_OUTPUT_SURFACE_RENDER_VIDEO_SURFACE_LUMA:
        // *function_pointer = &vaVdpOutputSurfaceRenderVideoSurfaceLuma;
        *function_pointer = NULL;
        break;
    case VDP_FUNC_ID_DECODER_QUERY_CAPABILITIES:
        *function_pointer = &vaVdpDecoderQueryCapabilities;
        break;
    case VDP_FUNC_ID_DECODER_CREATE:
        *function_pointer = &vaVdpDecoderCreate;
        break;
    case VDP_FUNC_ID_DECODER_DESTROY:
        *function_pointer = &vaVdpDecoderDestroy;
        break;
    case VDP_FUNC_ID_DECODER_GET_PARAMETERS:
        *function_pointer = &vaVdpDecoderGetParameters;
        break;
    case VDP_FUNC_ID_DECODER_RENDER:
        *function_pointer = &vaVdpDecoderRender;
        break;
    case VDP_FUNC_ID_VIDEO_MIXER_QUERY_FEATURE_SUPPORT:
        *function_pointer = &vaVdpVideoMixerQueryFeatureSupport;
        break;
    case VDP_FUNC_ID_VIDEO_MIXER_QUERY_PARAMETER_SUPPORT:
        *function_pointer = &vaVdpVideoMixerQueryParameterSupport;
        break;
    case VDP_FUNC_ID_VIDEO_MIXER_QUERY_ATTRIBUTE_SUPPORT:
        *function_pointer = &vaVdpVideoMixerQueryAttributeSupport;
        break;
    case VDP_FUNC_ID_VIDEO_MIXER_QUERY_PARAMETER_VALUE_RANGE:
        *function_pointer = &vaVdpVideoMixerQueryParameterValueRange;
        break;
    case VDP_FUNC_ID_VIDEO_MIXER_QUERY_ATTRIBUTE_VALUE_RANGE:
        *function_pointer = &vaVdpVideoMixerQueryAttributeValueRange;
        break;
    case VDP_FUNC_ID_VIDEO_MIXER_CREATE:
        *function_pointer = &vaVdpVideoMixerCreate;
        break;
    case VDP_FUNC_ID_VIDEO_MIXER_SET_FEATURE_ENABLES:
        *function_pointer = &vaVdpVideoMixerSetFeatureEnables;
        break;
    case VDP_FUNC_ID_VIDEO_MIXER_SET_ATTRIBUTE_VALUES:
        *function_pointer = &vaVdpVideoMixerSetAttributeValues;
        break;
    case VDP_FUNC_ID_VIDEO_MIXER_GET_FEATURE_SUPPORT:
        *function_pointer = &vaVdpVideoMixerGetFeatureSupport;
        break;
    case VDP_FUNC_ID_VIDEO_MIXER_GET_FEATURE_ENABLES:
        *function_pointer = &vaVdpVideoMixerGetFeatureEnables;
        break;
    case VDP_FUNC_ID_VIDEO_MIXER_GET_PARAMETER_VALUES:
        *function_pointer = &vaVdpVideoMixerGetParameterValues;
        break;
    case VDP_FUNC_ID_VIDEO_MIXER_GET_ATTRIBUTE_VALUES:
        *function_pointer = &vaVdpVideoMixerGetAttributeValues;
        break;
    case VDP_FUNC_ID_VIDEO_MIXER_DESTROY:
        *function_pointer = &vaVdpVideoMixerDestroy;
        break;
    case VDP_FUNC_ID_VIDEO_MIXER_RENDER:
        *function_pointer = &vaVdpVideoMixerRender;
        break;
    case VDP_FUNC_ID_PRESENTATION_QUEUE_TARGET_DESTROY:
        *function_pointer = &vaVdpPresentationQueueTargetDestroy;
        break;
    case VDP_FUNC_ID_PRESENTATION_QUEUE_CREATE:
        *function_pointer = &vaVdpPresentationQueueCreate;
        break;
    case VDP_FUNC_ID_PRESENTATION_QUEUE_DESTROY:
        *function_pointer = &vaVdpPresentationQueueDestroy;
        break;
    case VDP_FUNC_ID_PRESENTATION_QUEUE_SET_BACKGROUND_COLOR:
        *function_pointer = &vaVdpPresentationQueueSetBackgroundColor;
        break;
    case VDP_FUNC_ID_PRESENTATION_QUEUE_GET_BACKGROUND_COLOR:
        *function_pointer = &vaVdpPresentationQueueGetBackgroundColor;
        break;
    case VDP_FUNC_ID_PRESENTATION_QUEUE_GET_TIME:
        *function_pointer = &vaVdpPresentationQueueGetTime;
        break;
    case VDP_FUNC_ID_PRESENTATION_QUEUE_DISPLAY:
        *function_pointer = &vaVdpPresentationQueueDisplay;
        break;
    case VDP_FUNC_ID_PRESENTATION_QUEUE_BLOCK_UNTIL_SURFACE_IDLE:
        *function_pointer = &vaVdpPresentationQueueBlockUntilSurfaceIdle;
        break;
    case VDP_FUNC_ID_PRESENTATION_QUEUE_QUERY_SURFACE_STATUS:
        *function_pointer = &vaVdpPresentationQueueQuerySurfaceStatus;
        break;
    case VDP_FUNC_ID_PREEMPTION_CALLBACK_REGISTER:
        *function_pointer = &vaVdpPreemptionCallbackRegister;
        break;
    case VDP_FUNC_ID_BASE_WINSYS:
        *function_pointer = &vaVdpPresentationQueueTargetCreateX11;
        break;
    default:
        *function_pointer = NULL;
        break;
    } // switch

    if (NULL == *function_pointer)
        return VDP_STATUS_INVALID_FUNC_ID;
    return VDP_STATUS_OK;
}

VdpStatus
vaVdpDeviceCreateX11(Display *display, int screen, VdpDevice *device,
                       VdpGetProcAddress **get_proc_address)
{
    traceVdpDeviceCreateX11("{zilch}", display, screen, device, get_proc_address);
    return VDP_STATUS_NO_IMPLEMENTATION;
}
