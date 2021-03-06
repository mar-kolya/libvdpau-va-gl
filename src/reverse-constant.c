/*
 * Copyright 2013-2014  Rinat Ibragimov
 *
 * This file is part of libvdpau-va-gl
 *
 * libvdpau-va-gl is distributed under the terms of the LGPLv3. See COPYING for details.
 */

#include "reverse-constant.h"
#include <vdpau/vdpau.h>
#include <vdpau/vdpau_x11.h>

const char *
reverse_func_id(VdpFuncId func_id)
{
    switch (func_id) {
    case VDP_FUNC_ID_GET_ERROR_STRING:
        return "VDP_FUNC_ID_GET_ERROR_STRING";
    case VDP_FUNC_ID_GET_PROC_ADDRESS:
        return "VDP_FUNC_ID_GET_PROC_ADDRESS";
    case VDP_FUNC_ID_GET_API_VERSION:
        return "VDP_FUNC_ID_GET_API_VERSION";
    case VDP_FUNC_ID_GET_INFORMATION_STRING:
        return "VDP_FUNC_ID_GET_INFORMATION_STRING";
    case VDP_FUNC_ID_DEVICE_DESTROY:
        return "VDP_FUNC_ID_DEVICE_DESTROY";
    case VDP_FUNC_ID_GENERATE_CSC_MATRIX:
        return "VDP_FUNC_ID_GENERATE_CSC_MATRIX";
    case VDP_FUNC_ID_VIDEO_SURFACE_QUERY_CAPABILITIES:
        return "VDP_FUNC_ID_VIDEO_SURFACE_QUERY_CAPABILITIES";
    case VDP_FUNC_ID_VIDEO_SURFACE_QUERY_GET_PUT_BITS_Y_CB_CR_CAPABILITIES:
        return "VDP_FUNC_ID_VIDEO_SURFACE_QUERY_GET_PUT_BITS_Y_CB_CR_CAPABILITIES";
    case VDP_FUNC_ID_VIDEO_SURFACE_CREATE:
        return "VDP_FUNC_ID_VIDEO_SURFACE_CREATE";
    case VDP_FUNC_ID_VIDEO_SURFACE_DESTROY:
        return "VDP_FUNC_ID_VIDEO_SURFACE_DESTROY";
    case VDP_FUNC_ID_VIDEO_SURFACE_GET_PARAMETERS:
        return "VDP_FUNC_ID_VIDEO_SURFACE_GET_PARAMETERS";
    case VDP_FUNC_ID_VIDEO_SURFACE_GET_BITS_Y_CB_CR:
        return "VDP_FUNC_ID_VIDEO_SURFACE_GET_BITS_Y_CB_CR";
    case VDP_FUNC_ID_VIDEO_SURFACE_PUT_BITS_Y_CB_CR:
        return "VDP_FUNC_ID_VIDEO_SURFACE_PUT_BITS_Y_CB_CR";
    case VDP_FUNC_ID_OUTPUT_SURFACE_QUERY_CAPABILITIES:
        return "VDP_FUNC_ID_OUTPUT_SURFACE_QUERY_CAPABILITIES";
    case VDP_FUNC_ID_OUTPUT_SURFACE_QUERY_GET_PUT_BITS_NATIVE_CAPABILITIES:
        return "VDP_FUNC_ID_OUTPUT_SURFACE_QUERY_GET_PUT_BITS_NATIVE_CAPABILITIES";
    case VDP_FUNC_ID_OUTPUT_SURFACE_QUERY_PUT_BITS_INDEXED_CAPABILITIES:
        return "VDP_FUNC_ID_OUTPUT_SURFACE_QUERY_PUT_BITS_INDEXED_CAPABILITIES";
    case VDP_FUNC_ID_OUTPUT_SURFACE_QUERY_PUT_BITS_Y_CB_CR_CAPABILITIES:
        return "VDP_FUNC_ID_OUTPUT_SURFACE_QUERY_PUT_BITS_Y_CB_CR_CAPABILITIES";
    case VDP_FUNC_ID_OUTPUT_SURFACE_CREATE:
        return "VDP_FUNC_ID_OUTPUT_SURFACE_CREATE";
    case VDP_FUNC_ID_OUTPUT_SURFACE_DESTROY:
        return "VDP_FUNC_ID_OUTPUT_SURFACE_DESTROY";
    case VDP_FUNC_ID_OUTPUT_SURFACE_GET_PARAMETERS:
        return "VDP_FUNC_ID_OUTPUT_SURFACE_GET_PARAMETERS";
    case VDP_FUNC_ID_OUTPUT_SURFACE_GET_BITS_NATIVE:
        return "VDP_FUNC_ID_OUTPUT_SURFACE_GET_BITS_NATIVE";
    case VDP_FUNC_ID_OUTPUT_SURFACE_PUT_BITS_NATIVE:
        return "VDP_FUNC_ID_OUTPUT_SURFACE_PUT_BITS_NATIVE";
    case VDP_FUNC_ID_OUTPUT_SURFACE_PUT_BITS_INDEXED:
        return "VDP_FUNC_ID_OUTPUT_SURFACE_PUT_BITS_INDEXED";
    case VDP_FUNC_ID_OUTPUT_SURFACE_PUT_BITS_Y_CB_CR:
        return "VDP_FUNC_ID_OUTPUT_SURFACE_PUT_BITS_Y_CB_CR";
    case VDP_FUNC_ID_BITMAP_SURFACE_QUERY_CAPABILITIES:
        return "VDP_FUNC_ID_BITMAP_SURFACE_QUERY_CAPABILITIES";
    case VDP_FUNC_ID_BITMAP_SURFACE_CREATE:
        return "VDP_FUNC_ID_BITMAP_SURFACE_CREATE";
    case VDP_FUNC_ID_BITMAP_SURFACE_DESTROY:
        return "VDP_FUNC_ID_BITMAP_SURFACE_DESTROY";
    case VDP_FUNC_ID_BITMAP_SURFACE_GET_PARAMETERS:
        return "VDP_FUNC_ID_BITMAP_SURFACE_GET_PARAMETERS";
    case VDP_FUNC_ID_BITMAP_SURFACE_PUT_BITS_NATIVE:
        return "VDP_FUNC_ID_BITMAP_SURFACE_PUT_BITS_NATIVE";
    case VDP_FUNC_ID_OUTPUT_SURFACE_RENDER_OUTPUT_SURFACE:
        return "VDP_FUNC_ID_OUTPUT_SURFACE_RENDER_OUTPUT_SURFACE";
    case VDP_FUNC_ID_OUTPUT_SURFACE_RENDER_BITMAP_SURFACE:
        return "VDP_FUNC_ID_OUTPUT_SURFACE_RENDER_BITMAP_SURFACE";
    case VDP_FUNC_ID_OUTPUT_SURFACE_RENDER_VIDEO_SURFACE_LUMA:
        return "VDP_FUNC_ID_OUTPUT_SURFACE_RENDER_VIDEO_SURFACE_LUMA";
    case VDP_FUNC_ID_DECODER_QUERY_CAPABILITIES:
        return "VDP_FUNC_ID_DECODER_QUERY_CAPABILITIES";
    case VDP_FUNC_ID_DECODER_CREATE:
        return "VDP_FUNC_ID_DECODER_CREATE";
    case VDP_FUNC_ID_DECODER_DESTROY:
        return "VDP_FUNC_ID_DECODER_DESTROY";
    case VDP_FUNC_ID_DECODER_GET_PARAMETERS:
        return "VDP_FUNC_ID_DECODER_GET_PARAMETERS";
    case VDP_FUNC_ID_DECODER_RENDER:
        return "VDP_FUNC_ID_DECODER_RENDER";
    case VDP_FUNC_ID_VIDEO_MIXER_QUERY_FEATURE_SUPPORT:
        return "VDP_FUNC_ID_VIDEO_MIXER_QUERY_FEATURE_SUPPORT";
    case VDP_FUNC_ID_VIDEO_MIXER_QUERY_PARAMETER_SUPPORT:
        return "VDP_FUNC_ID_VIDEO_MIXER_QUERY_PARAMETER_SUPPORT";
    case VDP_FUNC_ID_VIDEO_MIXER_QUERY_ATTRIBUTE_SUPPORT:
        return "VDP_FUNC_ID_VIDEO_MIXER_QUERY_ATTRIBUTE_SUPPORT";
    case VDP_FUNC_ID_VIDEO_MIXER_QUERY_PARAMETER_VALUE_RANGE:
        return "VDP_FUNC_ID_VIDEO_MIXER_QUERY_PARAMETER_VALUE_RANGE";
    case VDP_FUNC_ID_VIDEO_MIXER_QUERY_ATTRIBUTE_VALUE_RANGE:
        return "VDP_FUNC_ID_VIDEO_MIXER_QUERY_ATTRIBUTE_VALUE_RANGE";
    case VDP_FUNC_ID_VIDEO_MIXER_CREATE:
        return "VDP_FUNC_ID_VIDEO_MIXER_CREATE";
    case VDP_FUNC_ID_VIDEO_MIXER_SET_FEATURE_ENABLES:
        return "VDP_FUNC_ID_VIDEO_MIXER_SET_FEATURE_ENABLES";
    case VDP_FUNC_ID_VIDEO_MIXER_SET_ATTRIBUTE_VALUES:
        return "VDP_FUNC_ID_VIDEO_MIXER_SET_ATTRIBUTE_VALUES";
    case VDP_FUNC_ID_VIDEO_MIXER_GET_FEATURE_SUPPORT:
        return "VDP_FUNC_ID_VIDEO_MIXER_GET_FEATURE_SUPPORT";
    case VDP_FUNC_ID_VIDEO_MIXER_GET_FEATURE_ENABLES:
        return "VDP_FUNC_ID_VIDEO_MIXER_GET_FEATURE_ENABLES";
    case VDP_FUNC_ID_VIDEO_MIXER_GET_PARAMETER_VALUES:
        return "VDP_FUNC_ID_VIDEO_MIXER_GET_PARAMETER_VALUES";
    case VDP_FUNC_ID_VIDEO_MIXER_GET_ATTRIBUTE_VALUES:
        return "VDP_FUNC_ID_VIDEO_MIXER_GET_ATTRIBUTE_VALUES";
    case VDP_FUNC_ID_VIDEO_MIXER_DESTROY:
        return "VDP_FUNC_ID_VIDEO_MIXER_DESTROY";
    case VDP_FUNC_ID_VIDEO_MIXER_RENDER:
        return "VDP_FUNC_ID_VIDEO_MIXER_RENDER";
    case VDP_FUNC_ID_PRESENTATION_QUEUE_TARGET_DESTROY:
        return "VDP_FUNC_ID_PRESENTATION_QUEUE_TARGET_DESTROY";
    case VDP_FUNC_ID_PRESENTATION_QUEUE_CREATE:
        return "VDP_FUNC_ID_PRESENTATION_QUEUE_CREATE";
    case VDP_FUNC_ID_PRESENTATION_QUEUE_DESTROY:
        return "VDP_FUNC_ID_PRESENTATION_QUEUE_DESTROY";
    case VDP_FUNC_ID_PRESENTATION_QUEUE_SET_BACKGROUND_COLOR:
        return "VDP_FUNC_ID_PRESENTATION_QUEUE_SET_BACKGROUND_COLOR";
    case VDP_FUNC_ID_PRESENTATION_QUEUE_GET_BACKGROUND_COLOR:
        return "VDP_FUNC_ID_PRESENTATION_QUEUE_GET_BACKGROUND_COLOR";
    case VDP_FUNC_ID_PRESENTATION_QUEUE_GET_TIME:
        return "VDP_FUNC_ID_PRESENTATION_QUEUE_GET_TIME";
    case VDP_FUNC_ID_PRESENTATION_QUEUE_DISPLAY:
        return "VDP_FUNC_ID_PRESENTATION_QUEUE_DISPLAY";
    case VDP_FUNC_ID_PRESENTATION_QUEUE_BLOCK_UNTIL_SURFACE_IDLE:
        return "VDP_FUNC_ID_PRESENTATION_QUEUE_BLOCK_UNTIL_SURFACE_IDLE";
    case VDP_FUNC_ID_PRESENTATION_QUEUE_QUERY_SURFACE_STATUS:
        return "VDP_FUNC_ID_PRESENTATION_QUEUE_QUERY_SURFACE_STATUS";
    case VDP_FUNC_ID_PREEMPTION_CALLBACK_REGISTER:
        return "VDP_FUNC_ID_PREEMPTION_CALLBACK_REGISTER";
    case VDP_FUNC_ID_PRESENTATION_QUEUE_TARGET_CREATE_X11:
        return "VDP_FUNC_ID_PRESENTATION_QUEUE_TARGET_CREATE_X11";
    default:
        return "Unknown";
    }
}

const char *
reverse_video_mixer_feature(VdpVideoMixerFeature mixer_feature)
{
    switch (mixer_feature) {
    case VDP_VIDEO_MIXER_FEATURE_DEINTERLACE_TEMPORAL:
        return "VDP_VIDEO_MIXER_FEATURE_DEINTERLACE_TEMPORAL";
    case VDP_VIDEO_MIXER_FEATURE_DEINTERLACE_TEMPORAL_SPATIAL:
        return "VDP_VIDEO_MIXER_FEATURE_DEINTERLACE_TEMPORAL_SPATIAL";
    case VDP_VIDEO_MIXER_FEATURE_INVERSE_TELECINE:
        return "VDP_VIDEO_MIXER_FEATURE_INVERSE_TELECINE";
    case VDP_VIDEO_MIXER_FEATURE_NOISE_REDUCTION:
        return "VDP_VIDEO_MIXER_FEATURE_NOISE_REDUCTION";
    case VDP_VIDEO_MIXER_FEATURE_SHARPNESS:
        return "VDP_VIDEO_MIXER_FEATURE_SHARPNESS";
    case VDP_VIDEO_MIXER_FEATURE_LUMA_KEY:
        return "VDP_VIDEO_MIXER_FEATURE_LUMA_KEY";
    case VDP_VIDEO_MIXER_FEATURE_HIGH_QUALITY_SCALING_L1:
        return "VDP_VIDEO_MIXER_FEATURE_HIGH_QUALITY_SCALING_L1";
    case VDP_VIDEO_MIXER_FEATURE_HIGH_QUALITY_SCALING_L2:
        return "VDP_VIDEO_MIXER_FEATURE_HIGH_QUALITY_SCALING_L2";
    case VDP_VIDEO_MIXER_FEATURE_HIGH_QUALITY_SCALING_L3:
        return "VDP_VIDEO_MIXER_FEATURE_HIGH_QUALITY_SCALING_L3";
    case VDP_VIDEO_MIXER_FEATURE_HIGH_QUALITY_SCALING_L4:
        return "VDP_VIDEO_MIXER_FEATURE_HIGH_QUALITY_SCALING_L4";
    case VDP_VIDEO_MIXER_FEATURE_HIGH_QUALITY_SCALING_L5:
        return "VDP_VIDEO_MIXER_FEATURE_HIGH_QUALITY_SCALING_L5";
    case VDP_VIDEO_MIXER_FEATURE_HIGH_QUALITY_SCALING_L6:
        return "VDP_VIDEO_MIXER_FEATURE_HIGH_QUALITY_SCALING_L6";
    case VDP_VIDEO_MIXER_FEATURE_HIGH_QUALITY_SCALING_L7:
        return "VDP_VIDEO_MIXER_FEATURE_HIGH_QUALITY_SCALING_L7";
    case VDP_VIDEO_MIXER_FEATURE_HIGH_QUALITY_SCALING_L8:
        return "VDP_VIDEO_MIXER_FEATURE_HIGH_QUALITY_SCALING_L8";
    case VDP_VIDEO_MIXER_FEATURE_HIGH_QUALITY_SCALING_L9:
        return "VDP_VIDEO_MIXER_FEATURE_HIGH_QUALITY_SCALING_L9";
    default:
        return "Unknown video mixer feature";
    }
}

const char *
reverse_video_mixer_attribute(VdpVideoMixerAttribute attr)
{
    switch (attr) {
    case VDP_VIDEO_MIXER_ATTRIBUTE_BACKGROUND_COLOR:
        return "VDP_VIDEO_MIXER_ATTRIBUTE_BACKGROUND_COLOR";
    case VDP_VIDEO_MIXER_ATTRIBUTE_CSC_MATRIX:
        return "VDP_VIDEO_MIXER_ATTRIBUTE_CSC_MATRIX";
    case VDP_VIDEO_MIXER_ATTRIBUTE_NOISE_REDUCTION_LEVEL:
        return "VDP_VIDEO_MIXER_ATTRIBUTE_NOISE_REDUCTION_LEVEL";
    case VDP_VIDEO_MIXER_ATTRIBUTE_SHARPNESS_LEVEL:
        return "VDP_VIDEO_MIXER_ATTRIBUTE_SHARPNESS_LEVEL";
    case VDP_VIDEO_MIXER_ATTRIBUTE_LUMA_KEY_MIN_LUMA:
        return "VDP_VIDEO_MIXER_ATTRIBUTE_LUMA_KEY_MIN_LUMA";
    case VDP_VIDEO_MIXER_ATTRIBUTE_LUMA_KEY_MAX_LUMA:
        return "VDP_VIDEO_MIXER_ATTRIBUTE_LUMA_KEY_MAX_LUMA";
    case VDP_VIDEO_MIXER_ATTRIBUTE_SKIP_CHROMA_DEINTERLACE:
        return "VDP_VIDEO_MIXER_ATTRIBUTE_SKIP_CHROMA_DEINTERLACE";
    default:
        return "Unknown video mixer attribute";
    }
}

const char *
reverse_rgba_format(VdpRGBAFormat rgba_format)
{
    switch (rgba_format) {
    case VDP_RGBA_FORMAT_B8G8R8A8:
        return "VDP_RGBA_FORMAT_B8G8R8A8";
    case VDP_RGBA_FORMAT_R8G8B8A8:
        return "VDP_RGBA_FORMAT_R8G8B8A8";
    case VDP_RGBA_FORMAT_R10G10B10A2:
        return "VDP_RGBA_FORMAT_R10G10B10A2";
    case VDP_RGBA_FORMAT_B10G10R10A2:
        return "VDP_RGBA_FORMAT_B10G10R10A2";
    case VDP_RGBA_FORMAT_A8:
        return "VDP_RGBA_FORMAT_A8";
    default:
        return "Unknown RGBA format";
    }
}

const char *
reverse_chroma_type(VdpChromaType chroma_type)
{
    switch (chroma_type) {
    case VDP_CHROMA_TYPE_420:
        return "VDP_CHROMA_TYPE_420";
    case VDP_CHROMA_TYPE_422:
        return "VDP_CHROMA_TYPE_422";
    case VDP_CHROMA_TYPE_444:
        return "VDP_CHROMA_TYPE_444";
    default:
        return "Unknown chroma type";
    }
}

const char *
reverse_ycbcr_format(VdpYCbCrFormat ycbcr_format)
{
    switch (ycbcr_format) {
    case VDP_YCBCR_FORMAT_NV12:
        return "VDP_YCBCR_FORMAT_NV12";
    case VDP_YCBCR_FORMAT_YV12:
        return "VDP_YCBCR_FORMAT_YV12";
    case VDP_YCBCR_FORMAT_UYVY:
        return "VDP_YCBCR_FORMAT_UYVY";
    case VDP_YCBCR_FORMAT_YUYV:
        return "VDP_YCBCR_FORMAT_YUYV";
    case VDP_YCBCR_FORMAT_Y8U8V8A8:
        return "VDP_YCBCR_FORMAT_Y8U8V8A8";
    case VDP_YCBCR_FORMAT_V8U8Y8A8:
        return "VDP_YCBCR_FORMAT_V8U8Y8A8";
    default:
        return "Unknown YCbCr format";
    }
}

const char *
reverser_video_mixer_picture_structure(VdpVideoMixerPictureStructure s)
{
    switch (s) {
    case VDP_VIDEO_MIXER_PICTURE_STRUCTURE_TOP_FIELD:
        return "VDP_VIDEO_MIXER_PICTURE_STRUCTURE_TOP_FIELD";
    case VDP_VIDEO_MIXER_PICTURE_STRUCTURE_BOTTOM_FIELD:
        return "VDP_VIDEO_MIXER_PICTURE_STRUCTURE_BOTTOM_FIELD";
    case VDP_VIDEO_MIXER_PICTURE_STRUCTURE_FRAME:
        return "VDP_VIDEO_MIXER_PICTURE_STRUCTURE_FRAME";
    default:
        return "Unknown video mixer picture structure";
    }
}

const char *
reverse_blend_factor(VdpOutputSurfaceRenderBlendFactor blend_factor)
{
    switch (blend_factor) {
    case VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_ZERO:
        return "VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_ZERO";
    case VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_ONE:
        return "VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_ONE";
    case VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_SRC_COLOR:
        return "VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_SRC_COLOR";
    case VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_ONE_MINUS_SRC_COLOR:
        return "VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_ONE_MINUS_SRC_COLOR";
    case VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_SRC_ALPHA:
        return "VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_SRC_ALPHA";
    case VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA:
        return "VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA";
    case VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_DST_ALPHA:
        return "VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_DST_ALPHA";
    case VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_ONE_MINUS_DST_ALPHA:
        return "VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_ONE_MINUS_DST_ALPHA";
    case VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_DST_COLOR:
        return "VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_DST_COLOR";
    case VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_ONE_MINUS_DST_COLOR:
        return "VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_ONE_MINUS_DST_COLOR";
    case VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_SRC_ALPHA_SATURATE:
        return "VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_SRC_ALPHA_SATURATE";
    case VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_CONSTANT_COLOR:
        return "VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_CONSTANT_COLOR";
    case VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR:
        return "VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR";
    case VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_CONSTANT_ALPHA:
        return "VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_CONSTANT_ALPHA";
    case VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA:
        return "VDP_OUTPUT_SURFACE_RENDER_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA";
    default:
        return "Unknown blend factor";
    }
}

const char *
reverse_blend_equation(VdpOutputSurfaceRenderBlendEquation blend_equation)
{
    switch (blend_equation) {
    case VDP_OUTPUT_SURFACE_RENDER_BLEND_EQUATION_SUBTRACT:
        return "VDP_OUTPUT_SURFACE_RENDER_BLEND_EQUATION_SUBTRACT";
    case VDP_OUTPUT_SURFACE_RENDER_BLEND_EQUATION_REVERSE_SUBTRACT:
        return "VDP_OUTPUT_SURFACE_RENDER_BLEND_EQUATION_REVERSE_SUBTRACT";
    case VDP_OUTPUT_SURFACE_RENDER_BLEND_EQUATION_ADD:
        return "VDP_OUTPUT_SURFACE_RENDER_BLEND_EQUATION_ADD";
    case VDP_OUTPUT_SURFACE_RENDER_BLEND_EQUATION_MIN:
        return "VDP_OUTPUT_SURFACE_RENDER_BLEND_EQUATION_MIN";
    case VDP_OUTPUT_SURFACE_RENDER_BLEND_EQUATION_MAX:
        return "VDP_OUTPUT_SURFACE_RENDER_BLEND_EQUATION_MAX";
    default:
        return "Unknown blend equation";
    }
}

const char *
reverse_decoder_profile(VdpDecoderProfile profile)
{
    switch (profile) {
    case VDP_DECODER_PROFILE_MPEG1:
        return "VDP_DECODER_PROFILE_MPEG1";
    case VDP_DECODER_PROFILE_MPEG2_SIMPLE:
        return "VDP_DECODER_PROFILE_MPEG2_SIMPLE";
    case VDP_DECODER_PROFILE_MPEG2_MAIN:
        return "VDP_DECODER_PROFILE_MPEG2_MAIN";
    case VDP_DECODER_PROFILE_H264_BASELINE:
        return "VDP_DECODER_PROFILE_H264_BASELINE";
    case VDP_DECODER_PROFILE_H264_MAIN:
        return "VDP_DECODER_PROFILE_H264_MAIN";
    case VDP_DECODER_PROFILE_H264_HIGH:
        return "VDP_DECODER_PROFILE_H264_HIGH";
    case VDP_DECODER_PROFILE_VC1_SIMPLE:
        return "VDP_DECODER_PROFILE_VC1_SIMPLE";
    case VDP_DECODER_PROFILE_VC1_MAIN:
        return "VDP_DECODER_PROFILE_VC1_MAIN";
    case VDP_DECODER_PROFILE_VC1_ADVANCED:
        return "VDP_DECODER_PROFILE_VC1_ADVANCED";
    case VDP_DECODER_PROFILE_MPEG4_PART2_SP:
        return "VDP_DECODER_PROFILE_MPEG4_PART2_SP";
    case VDP_DECODER_PROFILE_MPEG4_PART2_ASP:
        return "VDP_DECODER_PROFILE_MPEG4_PART2_ASP";
    case VDP_DECODER_PROFILE_DIVX4_QMOBILE:
        return "VDP_DECODER_PROFILE_DIVX4_QMOBILE";
    case VDP_DECODER_PROFILE_DIVX4_MOBILE:
        return "VDP_DECODER_PROFILE_DIVX4_MOBILE";
    case VDP_DECODER_PROFILE_DIVX4_HOME_THEATER:
        return "VDP_DECODER_PROFILE_DIVX4_HOME_THEATER";
    case VDP_DECODER_PROFILE_DIVX4_HD_1080P:
        return "VDP_DECODER_PROFILE_DIVX4_HD_1080P";
    case VDP_DECODER_PROFILE_DIVX5_QMOBILE:
        return "VDP_DECODER_PROFILE_DIVX5_QMOBILE";
    case VDP_DECODER_PROFILE_DIVX5_MOBILE:
        return "VDP_DECODER_PROFILE_DIVX5_MOBILE";
    case VDP_DECODER_PROFILE_DIVX5_HOME_THEATER:
        return "VDP_DECODER_PROFILE_DIVX5_HOME_THEATER";
    case VDP_DECODER_PROFILE_DIVX5_HD_1080P:
        return "VDP_DECODER_PROFILE_DIVX5_HD_1080P";
    default:
        return "Unknown decoder profile";
    }
}

const char *
reverse_status(VdpStatus status)
{
    switch (status) {
    case VDP_STATUS_OK:
        return "VDP_STATUS_OK";
    case VDP_STATUS_NO_IMPLEMENTATION:
        return "VDP_STATUS_NO_IMPLEMENTATION";
    case VDP_STATUS_DISPLAY_PREEMPTED:
        return "VDP_STATUS_DISPLAY_PREEMPTED";
    case VDP_STATUS_INVALID_HANDLE:
        return "VDP_STATUS_INVALID_HANDLE";
    case VDP_STATUS_INVALID_POINTER:
        return "VDP_STATUS_INVALID_POINTER";
    case VDP_STATUS_INVALID_CHROMA_TYPE:
        return "VDP_STATUS_INVALID_CHROMA_TYPE";
    case VDP_STATUS_INVALID_Y_CB_CR_FORMAT:
        return "VDP_STATUS_INVALID_Y_CB_CR_FORMAT";
    case VDP_STATUS_INVALID_RGBA_FORMAT:
        return "VDP_STATUS_INVALID_RGBA_FORMAT";
    case VDP_STATUS_INVALID_INDEXED_FORMAT:
        return "VDP_STATUS_INVALID_INDEXED_FORMAT";
    case VDP_STATUS_INVALID_COLOR_STANDARD:
        return "VDP_STATUS_INVALID_COLOR_STANDARD";
    case VDP_STATUS_INVALID_COLOR_TABLE_FORMAT:
        return "VDP_STATUS_INVALID_COLOR_TABLE_FORMAT";
    case VDP_STATUS_INVALID_BLEND_FACTOR:
        return "VDP_STATUS_INVALID_BLEND_FACTOR";
    case VDP_STATUS_INVALID_BLEND_EQUATION:
        return "VDP_STATUS_INVALID_BLEND_EQUATION";
    case VDP_STATUS_INVALID_FLAG:
        return "VDP_STATUS_INVALID_FLAG";
    case VDP_STATUS_INVALID_DECODER_PROFILE:
        return "VDP_STATUS_INVALID_DECODER_PROFILE";
    case VDP_STATUS_INVALID_VIDEO_MIXER_FEATURE:
        return "VDP_STATUS_INVALID_VIDEO_MIXER_FEATURE";
    case VDP_STATUS_INVALID_VIDEO_MIXER_PARAMETER:
        return "VDP_STATUS_INVALID_VIDEO_MIXER_PARAMETER";
    case VDP_STATUS_INVALID_VIDEO_MIXER_ATTRIBUTE:
        return "VDP_STATUS_INVALID_VIDEO_MIXER_ATTRIBUTE";
    case VDP_STATUS_INVALID_VIDEO_MIXER_PICTURE_STRUCTURE:
        return "VDP_STATUS_INVALID_VIDEO_MIXER_PICTURE_STRUCTURE";
    case VDP_STATUS_INVALID_FUNC_ID:
        return "VDP_STATUS_INVALID_FUNC_ID";
    case VDP_STATUS_INVALID_SIZE:
        return "VDP_STATUS_INVALID_SIZE";
    case VDP_STATUS_INVALID_VALUE:
        return "VDP_STATUS_INVALID_VALUE";
    case VDP_STATUS_INVALID_STRUCT_VERSION:
        return "VDP_STATUS_INVALID_STRUCT_VERSION";
    case VDP_STATUS_RESOURCES:
        return "VDP_STATUS_RESOURCES";
    case VDP_STATUS_HANDLE_DEVICE_MISMATCH:
        return "VDP_STATUS_HANDLE_DEVICE_MISMATCH";
    case VDP_STATUS_ERROR:
        return "VDP_STATUS_ERROR";
    default:
        return "Unknown VDP error";
    }
}

const char *
reverse_indexed_format(VdpIndexedFormat indexed_format)
{
    switch (indexed_format) {
    case VDP_INDEXED_FORMAT_A4I4:
        return "VDP_INDEXED_FORMAT_A4I4";
    case VDP_INDEXED_FORMAT_I4A4:
        return "VDP_INDEXED_FORMAT_I4A4";
    case VDP_INDEXED_FORMAT_A8I8:
        return "VDP_INDEXED_FORMAT_A8I8";
    case VDP_INDEXED_FORMAT_I8A8:
        return "VDP_INDEXED_FORMAT_I8A8";
    default:
        return "Unknown indexed format";
    }
}

const char *
reverse_color_table_format(VdpColorTableFormat color_table_format)
{
    switch (color_table_format) {
    case VDP_COLOR_TABLE_FORMAT_B8G8R8X8:
        return "VDP_COLOR_TABLE_FORMAT_B8G8R8X8";
    default:
        return "Unknown color table format";
    }
}

const char *
reverse_video_mixer_parameter(VdpVideoMixerParameter parameter)
{
    switch (parameter) {
    case VDP_VIDEO_MIXER_PARAMETER_VIDEO_SURFACE_WIDTH:
        return "VDP_VIDEO_MIXER_PARAMETER_VIDEO_SURFACE_WIDTH";
    case VDP_VIDEO_MIXER_PARAMETER_VIDEO_SURFACE_HEIGHT:
        return "VDP_VIDEO_MIXER_PARAMETER_VIDEO_SURFACE_HEIGHT";
    case VDP_VIDEO_MIXER_PARAMETER_CHROMA_TYPE:
        return "VDP_VIDEO_MIXER_PARAMETER_CHROMA_TYPE";
    case VDP_VIDEO_MIXER_PARAMETER_LAYERS:
        return "VDP_VIDEO_MIXER_PARAMETER_LAYERS";
    default:
        return "Unknown video mixer parameter";
    }
}

const char *
reverse_color_standard(VdpColorStandard color_standard)
{
    switch (color_standard) {
    case VDP_COLOR_STANDARD_ITUR_BT_601:
        return "VDP_COLOR_STANDARD_ITUR_BT_601";
    case VDP_COLOR_STANDARD_ITUR_BT_709:
        return "VDP_COLOR_STANDARD_ITUR_BT_709";
    case VDP_COLOR_STANDARD_SMPTE_240M:
        return "VDP_COLOR_STANDARD_SMPTE_240M";
    default:
        return "Unknown color standard";
    }
}

const char *
reverse_output_surface_render_rotate(int flags)
{
    switch (flags & 3) {
    case VDP_OUTPUT_SURFACE_RENDER_ROTATE_0: return "VDP_OUTPUT_SURFACE_RENDER_ROTATE_0";
    case VDP_OUTPUT_SURFACE_RENDER_ROTATE_90: return "VDP_OUTPUT_SURFACE_RENDER_ROTATE_90";
    case VDP_OUTPUT_SURFACE_RENDER_ROTATE_180: return "VDP_OUTPUT_SURFACE_RENDER_ROTATE_180";
    default:
        // The only possible case execution get here is VDP_OUTPUT_SURFACE_RENDER_ROTATE_270 case.
        return "VDP_OUTPUT_SURFACE_RENDER_ROTATE_270";
    }
}
