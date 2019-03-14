#include "stdafx.h"

#include "blender_gasmask_diffuse.h"

CBlender_gasmask_diffuse::CBlender_gasmask_diffuse() { description.CLS = 0; }
CBlender_gasmask_diffuse::~CBlender_gasmask_diffuse() { }

void CBlender_gasmask_diffuse::Compile(CBlender_Compile& C)
{
	IBlender::Compile(C);

	C.r_Pass("null", "gasmask_diffuse", FALSE, FALSE, FALSE);
	C.r_Sampler_clf("s_image", r2_RT_generic0);
	C.r_Sampler_clf("s_bloom", r2_RT_bloom1);

	C.r_Sampler_clf("s_mask_1", "gasmasks\\mask_1");
	C.r_Sampler_clf("s_mask_2", "gasmasks\\mask_2");
	C.r_Sampler_clf("s_mask_3", "gasmasks\\mask_3");
	C.r_Sampler_clf("s_mask_4", "gasmasks\\mask_4");
	C.r_Sampler_clf("s_mask_5", "gasmasks\\mask_5");
	C.r_Sampler_clf("s_mask_6", "gasmasks\\mask_6");
	C.r_Sampler_clf("s_mask_7", "gasmasks\\mask_7");
	C.r_Sampler_clf("s_mask_8", "gasmasks\\mask_8");
	C.r_Sampler_clf("s_mask_9", "gasmasks\\mask_9");
	C.r_Sampler_clf("s_mask_10", "gasmasks\\mask_10");
	C.r_End();
} 